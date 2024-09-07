/*
 * File: z_meat_elevator.c
 * Overlay: ovl_Meat_Elevator
 * Description: Switch controlled elevator with climbable sides that moves upward 40 units when triggered.
 */

#include "z_meat_elevator.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#define FLAGS (ACTOR_FLAG_4 | ACTOR_FLAG_5)

void MeatElevator_Init(Actor* thisx, PlayState* play);
void MeatElevator_Destroy(Actor* thisx, PlayState* play);
void MeatElevator_Update(Actor* thisx, PlayState* play);
void MeatElevator_Draw(Actor* thisx, PlayState* play);

ActorInit Meat_Elevator_InitVars = {
    ACTOR_MEAT_ELEVATOR,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(MeatElevator),
    (ActorFunc)MeatElevator_Init,
    (ActorFunc)MeatElevator_Destroy,
    (ActorFunc)MeatElevator_Update,
    (ActorFunc)MeatElevator_Draw,
};

void MeatElevator_Init(Actor* thisx, PlayState* play){

}
void MeatElevator_Destroy(Actor* thisx, PlayState* play){

}
void MeatElevator_Update(Actor* thisx, PlayState* play){

}
void MeatElevator_Draw(Actor* thisx, PlayState* play){
    Gfx_DrawDListOpa(play, gBombchuDL);
}