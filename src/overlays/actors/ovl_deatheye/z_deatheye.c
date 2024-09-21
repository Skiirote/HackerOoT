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

    deatheye_SetupScan(this);
}

void deatheye_Destroy(Actor* thisx, PlayState* play){
    deatheye* this = (deatheye*)thisx;
    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}


void deatheye_Update(Actor* thisx, PlayState* play){
    deatheye* this = (deatheye*)thisx;
    this->actionFunc(this, play);
    s16 eyerot;
    eyerot = Actor_WorldPitchTowardActor(&this->dyna.actor, &GET_PLAYER(play)->actor); 
    this->dyna.actor.world.rot.x += 9;
    Debug_Print(1, "Eyerot = %d", eyerot);
}

void deatheye_SetupScan(deatheye* this){
    this->actionFunc = deatheye_Scan;
}

void deatheye_Scan(deatheye* this, PlayState* play){
    
    
}


void deatheye_Draw(Actor* thisx, PlayState* play){
    deatheye* this = (deatheye*)thisx;
    Gfx_DrawDListOpa(play, gDeatheyeDL);
    this->dyna.actor.scale.x = .1;
    this->dyna.actor.scale.y = .1;
    this->dyna.actor.scale.z = .1;
}

