/*
 * File: z_deatheye.c
 * Overlay: ovl_deatheye
 * Description: Eye enemy that damages you as long as it can see you.
 */

#include "z_deatheye.h"
#include "assets/objects/object_deatheye/gDeatheyeDL.h"
#include "assets/objects/object_deatheye/gDeatheyeDL_collision.h"

#define FLAGS (ACTOR_FLAG_4 | ACTOR_FLAG_5)

void deatheye_Init(Actor* thisx, PlayState* play);
void deatheye_Destroy(Actor* thisx, PlayState* play);
void deatheye_Update(Actor* thisx, PlayState* play);
void deatheye_Draw(Actor* thisx, PlayState* play);

void deatheye_SetupScan(deatheye* thisx);
void deatheye_Scan(deatheye* thisx, PlayState* play);
void deatheye_SetupDetectPlayer(deatheye* thisx);
void deatheye_DetectPlayer(deatheye* thisx, PlayState* play);
void deatheye_SetupStun(deatheye* thisx);
void deatheye_Stun(deatheye* thisx, PlayState* play);

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
    deatheye_SetupDetectPlayer(this);
}

void deatheye_Destroy(Actor* thisx, PlayState* play){
    deatheye* this = (deatheye*)thisx;
    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}


void deatheye_Update(Actor* thisx, PlayState* play){
    deatheye* this = (deatheye*)thisx;
    this->actionFunc(this, play);
    s32 i;
    s32 acHits[2];

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

void deatheye_SetupScan(deatheye* this) {
    this->actionFunc = deatheye_Scan;
}

void deatheye_Scan(deatheye* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    //if (this->dyna.actor.shape.rot.y == Math_Vec3f_Yaw(&this->dyna.actor.world.pos, &player->actor.world.pos) && this->dyna.actor.shape.rot.y == Math_Vec3f_Yaw(&this->dyna.actor.world.pos, &player->actor.world.pos)){
           
           deatheye_SetupDetectPlayer(this);
    //} 
 
}

void deatheye_SetupStun(deatheye* this){
    this->actionFunc = deatheye_Stun;
}

void deatheye_SetupDetectPlayer(deatheye* this){
    this->actionFunc = deatheye_DetectPlayer;
}

void deatheye_Stun(deatheye* this, PlayState* play){

}

void deatheye_DetectPlayer(deatheye* this, PlayState* play){
    Player* player = GET_PLAYER(play);
    s16 roty = this->dyna.actor.world.rot.y = Math_Vec3f_Yaw(&this->dyna.actor.world.pos, &player->actor.world.pos);
    s16 rotx = this->dyna.actor.world.rot.x = Math_Vec3f_Pitch(&this->dyna.actor.world.pos, &player->actor.world.pos);
 
    this->dyna.actor.shape.rot.y = roty;
    this->dyna.actor.shape.rot.x = rotx;
    
}


void deatheye_Draw(Actor* thisx, PlayState* play){
    deatheye* this = (deatheye*)thisx;
    //OPEN_DISPS(play->state.gfxCtx, "../z_deatheye.c", 1046);
    //gSPDisplayList(POLY_OPA_DISP++, gDeatheyeDL);
    Gfx_DrawDListOpa(play, gDeatheyeDL);
    this->dyna.actor.scale.x = .1;
    this->dyna.actor.scale.y = .1;
    this->dyna.actor.scale.z = .1;
    //CLOSE_DISPS(play->state.gfxCtx, "../z_deatheye.c", 1101);
}

