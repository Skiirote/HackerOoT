/*
 * File: z_deatheye.c
 * Overlay: ovl_deatheye
 * Description: Eye enemy that watches player until switch is activated. Starts red light green light game afterwards.
 */

#include "z_deatheye.h"
#include "assets/objects/object_deatheye/gDeatheyeDL.h"
#include "assets/objects/object_deatheye/gDeatheyeDL_collision.h"

#define FLAGS (ACTOR_FLAG_3 | ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define SWITCH_FLAG(this) (this->dyna.actor.params & 0x3F)

void deatheye_Init(Actor* thisx, PlayState* play);
void deatheye_Destroy(Actor* thisx, PlayState* play);
void deatheye_Update(Actor* thisx, PlayState* play);
void deatheye_Draw(Actor* thisx, PlayState* play);

void deatheye_SetupWatchPlayer(deatheye* thisx);
void deatheye_WatchPlayer(deatheye* thisx, PlayState* play);
void deatheye_SetupPreScan(deatheye* thisx);
void deatheye_PreScan(deatheye* thisx, PlayState* play);
void deatheye_SetupScan(deatheye* thisx);
void deatheye_Scan(deatheye* thisx, PlayState* play);
void deatheye_SetupDetect(deatheye* thisx);
void deatheye_Detect(deatheye* thisx, PlayState* play);

//scan for player
//see player
//track player while damaing player

ActorInit deatheye_InitVars = {
    ACTOR_DEATHEYE,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_DEATHEYE,
    sizeof(deatheye),
    (ActorFunc)deatheye_Init,
    (ActorFunc)deatheye_Destroy,
    (ActorFunc)deatheye_Update,
    (ActorFunc)deatheye_Draw,
};

void deatheye_Init(Actor* thisx, PlayState* play){
    deatheye* this = (deatheye*)thisx;
    CollisionHeader* colHeader = NULL;
    CollisionHeader_GetVirtual(&gDeatheyeDL_collisionHeader, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
    this->dyna.actor.targetMode = 6;
    this->playerInitPos.x = 0;
    this->playerInitPos.y = 0;
    deatheye_SetupWatchPlayer(this);
}

void deatheye_Destroy(Actor* thisx, PlayState* play){
    deatheye* this = (deatheye*)thisx;
    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}


void deatheye_Update(Actor* thisx, PlayState* play){
    deatheye* this = (deatheye*)thisx;
    this->actionFunc(this, play);
    Debug_Print(5, "%s", this->actionFuncName);


    /*acHits[0] = (this->colliders[0].base.acFlags & AC_HIT) != 0;
    acHits[1] = (this->colliders[1].base.acFlags & AC_HIT) != 0;
    if ((acHits[0] && (this->colliders[0].elem.acHitElem->atDmgInfo.dmgFlags & DMG_BOOMERANG)) ||
        (acHits[1] && (this->colliders[1].elem.acHitElem->atDmgInfo.dmgFlags & DMG_BOOMERANG))) {

        for (i = 0; i < 2; i++) {
            this->colliders[i].base.atFlags &= ~(AT_HIT | AT_BOUNCED);
            this->colliders[i].base.acFlags &= ~AC_HIT;
        }

        EnBrob_SetupStunned(this);
    } else if ((this->colliders[0].base.atFlags & AT_HIT) || (this->colliders[1].base.atFlags & AT_HIT) ||
               (acHits[0] && (this->colliders[0].elem.acHitElem->atDmgInfo.dmgFlags & DMG_SLASH_KOKIRI)) ||
               (acHits[1] && (this->colliders[1].elem.acHitElem->atDmgInfo.dmgFlags & DMG_SLASH_KOKIRI))) {

            EnBrob_SetupStun(this);


        for (i = 0; i < 2; i++) {
            this->colliders[i].base.atFlags &= ~(AT_HIT | AT_BOUNCED);
            this->colliders[i].base.acFlags &= ~AC_HIT;
        }
    }*/
}

void deatheye_SetupWatchPlayer(deatheye* this){
    this->actionFunc = deatheye_WatchPlayer;
    this->actionFuncName = "deatheye_WatchPlayer";
}

void deatheye_WatchPlayer(deatheye* this, PlayState* play){
    Player* player = GET_PLAYER(play);
    s16 roty = this->dyna.actor.world.rot.y = Math_Vec3f_Yaw(&this->dyna.actor.world.pos, &player->actor.world.pos);
    s16 rotx = this->dyna.actor.world.rot.x = Math_Vec3f_Pitch(&this->dyna.actor.world.pos, &player->actor.world.pos);
 
    this->dyna.actor.shape.rot.y = roty;
    this->dyna.actor.shape.rot.x = rotx;
    if(Flags_GetSwitch(play, SWITCH_FLAG(this))) {
        deatheye_SetupPreScan(this);
    } 
    
}

void deatheye_SetupPreScan(deatheye* this){
    this->timer = 50;
    this->actionFunc = deatheye_PreScan;
    this->actionFuncName = "deatheye_PreScan";
}

void deatheye_PreScan(deatheye* this, PlayState* play){
    Player* player = GET_PLAYER(play);
           this->dyna.actor.shape.rot.y += 800.0f;
           this->dyna.actor.shape.rot.x = 0.0f;
        if(DECR(this->timer) == 0){
            deatheye_SetupScan(this);
        }
}

void deatheye_SetupScan(deatheye* this) {
    this->actionFunc = deatheye_Scan;
    this->actionFuncName = "deatheye_Scan";
}

void deatheye_Scan(deatheye* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    s16 angleDiff = (this->dyna.actor.yawTowardsPlayer) - (this->dyna.actor.shape.rot.y);
    s16 angleDiffConverted = angleDiff/182.0416;
    Debug_Print(6, "%d", angleDiffConverted);
    this->dyna.actor.world.rot.y = this->dyna.actor.shape.rot.y += 800.0f;
    this->dyna.actor.world.rot.x = this->dyna.actor.shape.rot.x = 0.0f;

    Debug_Print(6, "%d", angleDiff);

    if(ABS(angleDiff) <= (47*182.0416) && angleDiff >= (43*182.0416)){
        this->playerInitPos = player->actor.world.pos;
        Debug_Print(2, "playerInitPos :%d", this->playerInitPos.x, this->playerInitPos.y);
    } 
    if ((this->playerInitPos.x > player->actor.world.pos.x + 10 || this->playerInitPos.x < player->actor.world.pos.x - 10 ||
    this->playerInitPos.y > player->actor.world.pos.y + 10 || this->playerInitPos.y < player->actor.world.pos.y - 10 ) 
    && this->playerInitPos.x != 0 && this->playerInitPos.y != 0){
        if (ABS(angleDiff) <= 0x1FFF){
            deatheye_SetupDetect(this);
        }
    } 
}

void deatheye_SetupDetect(deatheye* this){
    this->actionFunc = deatheye_Detect;
    this->actionFuncName = "deatheye_Detect";
}

void deatheye_Detect(deatheye* this, PlayState* play){
    Player* player = GET_PLAYER(play);
    s16 roty = this->dyna.actor.world.rot.y = Math_Vec3f_Yaw(&this->dyna.actor.world.pos, &player->actor.world.pos);
    s16 rotx = this->dyna.actor.world.rot.x = Math_Vec3f_Pitch(&this->dyna.actor.world.pos, &player->actor.world.pos);

    Camera_SetViewParam(play->cameraPtrs[CAM_ID_MAIN], CAM_VIEW_TARGET, &this->dyna.actor);    
    Camera_RequestSetting(play->cameraPtrs[CAM_ID_MAIN], CAM_SET_TURN_AROUND);
    Camera_SetCameraData(play->cameraPtrs[CAM_ID_MAIN], 4, NULL, NULL, 0x51, 0, 0);

    Math_SmoothStepToS(&this->dyna.actor.shape.rot.y, roty, 6, 4000, 100);
    Math_SmoothStepToS(&this->dyna.actor.shape.rot.x, rotx, 6, 4000, 100);
    Math_ApproachS(&this->dyna.actor.shape.rot.z, 800.0f, 0.5f, 100.0f);
    Debug_Print(1, "I SAW YOU MOVE");
}


void deatheye_Draw(Actor* thisx, PlayState* play){
    deatheye* this = (deatheye*)thisx;
    //OPEN_DISPS(play->state.gfxCtx, "../z_deatheye.c", 1046);
    //gSPDisplayList(POLY_OPA_DISP++, gDeatheyeDL);
    Gfx_DrawDListOpa(play, gDeatheyeDL);
    this->dyna.actor.scale.x = .5;
    this->dyna.actor.scale.y = .5;
    this->dyna.actor.scale.z = .5;
    //CLOSE_DISPS(play->state.gfxCtx, "../z_deatheye.c", 1101);
}