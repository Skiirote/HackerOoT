/*
 * File: z_meat_elevator.c
 * Overlay: ovl_Meat_Elevator
 * Description: Switch controlled elevator with climbable sides that moves upward 1600 units when triggered.
 */

#include "z_meat_elevator.h"
#include "assets/objects/object_meat_elevator/gMeatElevatorDL.h"
#include "assets/objects/object_meat_elevator/gMeatElevatorDL_collision.h"

#define FLAGS (ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define SWITCH_FLAG(this) (this->dyna.actor.params & 0x3F)

void MeatElevator_Init(Actor* thisx, PlayState* play);
void MeatElevator_Destroy(Actor* thisx, PlayState* play);
void MeatElevator_Update(Actor* thisx, PlayState* play);
void MeatElevator_Draw(Actor* thisx, PlayState* play);

void MeatElevator_SetupWaitForSwitch(MeatElevator* this, PlayState* play);
void MeatElevator_WaitForSwitch(MeatElevator* this, PlayState* play);
void MeatElevator_SetupRaise(MeatElevator* this, PlayState* play);
void MeatElevator_Raise(MeatElevator* this, PlayState* play);
void MeatElevator_SetupDoNothing(MeatElevator* this, PlayState* play);
void MeatElevator_DoNothing(MeatElevator* this, PlayState* play);


//Wait for switch
//Raise 40 units

ActorInit Meat_Elevator_InitVars = {
    ACTOR_MEAT_ELEVATOR,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_MEAT_ELEVATOR,
    sizeof(MeatElevator),
    (ActorFunc)MeatElevator_Init,
    (ActorFunc)MeatElevator_Destroy,
    (ActorFunc)MeatElevator_Update,
    (ActorFunc)MeatElevator_Draw,
};

void MeatElevator_Init(Actor* thisx, PlayState* play){
    
    
    MeatElevator* this = (MeatElevator*)thisx;
    CollisionHeader* colHeader = NULL;
    CollisionHeader_GetVirtual(&gMeatElevatorDL_collisionHeader, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
   
    MeatElevator_SetupWaitForSwitch(this, play);
}

void MeatElevator_Destroy(Actor* thisx, PlayState* play){
    MeatElevator* this = (MeatElevator*)thisx;
    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void MeatElevator_Update(Actor* thisx, PlayState* play){
    MeatElevator* this = (MeatElevator*)thisx;

    this->actionFunc(this, play);
}

void MeatElevator_Draw(Actor* thisx, PlayState* play){
    MeatElevator* this = (MeatElevator*)thisx;
    Gfx_DrawDListOpa(play, gMeatElevatorDL);
    this->dyna.actor.scale.x = .2;
    this->dyna.actor.scale.y = .2;
    this->dyna.actor.scale.z = .2;
}

void MeatElevator_SetupWaitForSwitch(MeatElevator* this, PlayState* play){
    this->actionFunc = MeatElevator_WaitForSwitch;
}

void MeatElevator_WaitForSwitch(MeatElevator* this, PlayState* play){

    if(Flags_GetSwitch(play, SWITCH_FLAG(this))) {
        MeatElevator_SetupRaise(this, play);
    } 

}

void MeatElevator_SetupRaise(MeatElevator* this, PlayState* play){
    this->timer = 133;
    this->actionFunc = MeatElevator_Raise;
    //Flags_UnsetSwitch(play, SWITCH_FLAG(this));
}

void MeatElevator_Raise(MeatElevator* this, PlayState* play){
    if (DECR(this->timer) == 0) {
        MeatElevator_SetupDoNothing(this, play);
    } else {
        this->dyna.actor.world.pos.y += 9.00f;
        Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_ELEVATOR_MOVE3 - SFX_FLAG);
    }
    //Debug_Print(1, "In raise");
}

void MeatElevator_SetupDoNothing(MeatElevator* this, PlayState* play){
    this->actionFunc = MeatElevator_DoNothing;
    Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_BLOCK_BOUND);
}

void MeatElevator_DoNothing(MeatElevator* this, PlayState* play){
    //Debug_Print(1, "Doing nothing...");
}