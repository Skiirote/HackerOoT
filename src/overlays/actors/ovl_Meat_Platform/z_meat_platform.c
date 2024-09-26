/*
 * File: z_meat_Platform.c
 * Overlay: ovl_Meat_Platform
 * Description: Switch controlled Platform with climbable sides that moves upward 1600 units when triggered.
 */

#include "z_meat_platform.h"
#include "assets/objects/object_meat_platform/gMeatPlatformDL.h"
#include "assets/objects/object_meat_platform/gMeatPlatformDL_collision.h"

#define FLAGS (ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define SWITCH_FLAG(this) (this->dyna.actor.params & 0x3F)
#define PLATDIST(this) ((this->dyna.actor.params >> 8) & 0x3f)

void MeatPlatform_Init(Actor* thisx, PlayState* play);
void MeatPlatform_Destroy(Actor* thisx, PlayState* play);
void MeatPlatform_Update(Actor* thisx, PlayState* play);
void MeatPlatform_Draw(Actor* thisx, PlayState* play);

void MeatPlatform_SetupWaitForSwitch(MeatPlatform* this, PlayState* play);
void MeatPlatform_WaitForSwitch(MeatPlatform* this, PlayState* play);
void MeatPlatform_SetupMoveToPos(MeatPlatform* this, PlayState* play);
void MeatPlatform_MoveToPos(MeatPlatform* this, PlayState* play);
void MeatPlatform_SetupDoNothing(MeatPlatform* this, PlayState* play);
void MeatPlatform_DoNothing(MeatPlatform* this, PlayState* play);


//Wait for switch
//Raise 40 units

ActorInit Meat_Platform_InitVars = {
    ACTOR_MEAT_PLATFORM,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_MEAT_PLATFORM,
    sizeof(MeatPlatform),
    (ActorFunc)MeatPlatform_Init,
    (ActorFunc)MeatPlatform_Destroy,
    (ActorFunc)MeatPlatform_Update,
    (ActorFunc)MeatPlatform_Draw,
};

void MeatPlatform_Init(Actor* thisx, PlayState* play){
    
    
    MeatPlatform* this = (MeatPlatform*)thisx;
    CollisionHeader* colHeader = NULL;
    CollisionHeader_GetVirtual(&gMeatPlatformDL_collisionHeader, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
    this->moveDist = (thisx->params >> 8) * 1.8f;
   
    MeatPlatform_SetupWaitForSwitch(this, play);
}

void MeatPlatform_Destroy(Actor* thisx, PlayState* play){
    MeatPlatform* this = (MeatPlatform*)thisx;
    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void MeatPlatform_Update(Actor* thisx, PlayState* play){
    MeatPlatform* this = (MeatPlatform*)thisx;

    this->actionFunc(this, play);
}

void MeatPlatform_Draw(Actor* thisx, PlayState* play){
    MeatPlatform* this = (MeatPlatform*)thisx;
    Gfx_DrawDListOpa(play, gMeatPlatformDL);
    this->dyna.actor.scale.x = .2;
    this->dyna.actor.scale.y = .2;
    this->dyna.actor.scale.z = .2;
}

void MeatPlatform_SetupWaitForSwitch(MeatPlatform* this, PlayState* play){
    this->actionFunc = MeatPlatform_WaitForSwitch;
}

void MeatPlatform_WaitForSwitch(MeatPlatform* this, PlayState* play){

    if(Flags_GetSwitch(play, SWITCH_FLAG(this))) {
        MeatPlatform_SetupMoveToPos(this, play);
    } 

}

void MeatPlatform_SetupMoveToPos(MeatPlatform* this, PlayState* play){
    this->timer = 57;
    this->delayTimer = 57;
    this->actionFunc = MeatPlatform_MoveToPos;
    //Flags_UnsetSwitch(play, SWITCH_FLAG(this));
}

void MeatPlatform_MoveToPos(MeatPlatform* this, PlayState* play){
    if (DECR(this->timer) == 0) {
        MeatPlatform_SetupDoNothing(this, play);
    } else {
        this->dyna.actor.world.pos.x -= this->moveDist;
        Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_ELEVATOR_MOVE3 - SFX_FLAG);
    }
    //Debug_Print(1, "In raise");
}

void MeatPlatform_SetupDoNothing(MeatPlatform* this, PlayState* play){
    this->actionFunc = MeatPlatform_DoNothing;
    Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_BLOCK_BOUND);
}

void MeatPlatform_DoNothing(MeatPlatform* this, PlayState* play){
    //Debug_Print(1, "Doing nothing...");
}