/*
 * File: z_meatplat.c
 * Overlay: ovl_meatplat
 * Description: Switch controlled Platform with climbable sides that moves upward 1600 units when triggered.
 */

#include "z_meatplat.h"
#include "assets/objects/object_meatplat/gMeatPlatDL.h"
#include "assets/objects/object_meatplat/gMeatPlatDL_collision.h"

#define FLAGS (ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define SWITCH_FLAG(this) (this->dyna.actor.params & 0x3F)

void meatplat_Init(Actor* thisx, PlayState* play);
void meatplat_Destroy(Actor* thisx, PlayState* play);
void meatplat_Update(Actor* thisx, PlayState* play);
void meatplat_Draw(Actor* thisx, PlayState* play);

void meatplat_SetupWaitForSwitch(meatplat* this, PlayState* play);
void meatplat_WaitForSwitch(meatplat* this, PlayState* play);
void meatplat_SetupMoveToPos(meatplat* this, PlayState* play);
void meatplat_MoveToPos(meatplat* this, PlayState* play);
void meatplat_SetupDoNothing(meatplat* this, PlayState* play);
void meatplat_DoNothing(meatplat* this, PlayState* play);


//Wait for switch
//Raise 40 units

ActorInit meatplat_InitVars = {
    ACTOR_MEATPLAT,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_MEATPLAT,
    sizeof(meatplat),
    (ActorFunc)meatplat_Init,
    (ActorFunc)meatplat_Destroy,
    (ActorFunc)meatplat_Update,
    (ActorFunc)meatplat_Draw,
};

void meatplat_Init(Actor* thisx, PlayState* play){
    
    
    meatplat* this = (meatplat*)thisx;
    CollisionHeader* colHeader = NULL;
    CollisionHeader_GetVirtual(&gMeatPlatDL_collisionHeader, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
   
    meatplat_SetupWaitForSwitch(this, play);
}

void meatplat_Destroy(Actor* thisx, PlayState* play){
    meatplat* this = (meatplat*)thisx;
    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void meatplat_Update(Actor* thisx, PlayState* play){
    meatplat* this = (meatplat*)thisx;

    this->actionFunc(this, play);
}

void meatplat_Draw(Actor* thisx, PlayState* play){
    meatplat* this = (meatplat*)thisx;
    Gfx_DrawDListOpa(play, gMeatPlatDL);
    this->dyna.actor.scale.x = .05;
    this->dyna.actor.scale.y = .05;
    this->dyna.actor.scale.z = .05;
}

void meatplat_SetupWaitForSwitch(meatplat* this, PlayState* play){
    this->actionFunc = meatplat_WaitForSwitch;
}

void meatplat_WaitForSwitch(meatplat* this, PlayState* play){

    if(Flags_GetSwitch(play, SWITCH_FLAG(this))) {
        meatplat_SetupMoveToPos(this, play);
    } 

}

void meatplat_SetupMoveToPos(meatplat* this, PlayState* play){
    this->timer = 38;
    this->actionFunc = meatplat_MoveToPos;
    //Flags_UnsetSwitch(play, SWITCH_FLAG(this));
}

void meatplat_MoveToPos(meatplat* this, PlayState* play){
    if (DECR(this->timer) == 0) {
        meatplat_SetupDoNothing(this, play);
    } else {
        this->dyna.actor.world.pos.y += 1;
        Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_ELEVATOR_MOVE3 - SFX_FLAG);
    }
    //Debug_Print(1, "In raise");
}

void meatplat_SetupDoNothing(meatplat* this, PlayState* play){
    this->actionFunc = meatplat_DoNothing;
    Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_BLOCK_BOUND);
}

void meatplat_DoNothing(meatplat* this, PlayState* play){
    //Debug_Print(1, "Doing nothing...");2
}