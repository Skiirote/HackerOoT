#include "z_distcheck.h"
#include "terminal.h"

#define FLAGS ACTOR_FLAG_4

void distcheck_Init(Actor* thisx, PlayState* play);
void distcheck_Destroy(Actor* thisx, PlayState* play);
void distcheck_Update(Actor* thisx, PlayState* play);
void distcheck_Draw(Actor*, PlayState* play);

void distcheck_SetupWithinXZDistance(distcheck* thisx, PlayState* play);
void distcheck_WithinXZDistance(distcheck* thisx, PlayState* play);
void distcheck_SetupSpotPlayer(distcheck* this, PlayState* play);
void distcheck_SpotPlayer(distcheck* this, PlayState* play);
void distcheck_SetupKickPlayer(distcheck* this, PlayState* play);
void distcheck_KickPlayer(distcheck* this, PlayState* play);


ActorInit distcheck_InitVars = {
    /**/ ACTOR_DISTCHECK,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(distcheck),
    /**/ (ActorFunc)distcheck_Init,
    /**/ (ActorFunc)distcheck_Destroy,
    /**/ (ActorFunc)distcheck_Update,
    /**/ (ActorFunc)distcheck_Draw,
};

/*static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 1000, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneForward, 1000, ICHAIN_STOP),
};*/

/**
 * Checks a scene flag - if flag is set, the actor is killed and function returns 1. Otherwise returns 0.
 * Can also set a switch flag from params while killing.
 */

void distcheck_Init(Actor* thisx, PlayState* play) {
    distcheck* this = (distcheck*)thisx;
    this->actionFunc = distcheck_SetupWithinXZDistance;

}

void distcheck_Destroy(Actor* thisx, PlayState* play) {
}

void distcheck_Update(Actor* thisx, PlayState* play) {
    distcheck* this = (distcheck*)thisx;
    this->actionFunc(this, play);

}

void distcheck_KickPlayer(distcheck* this, PlayState* play) {

    if (this->timer > 0) {
        this->timer--;
    } else {
        play->nextEntranceIndex = ENTR_RIVER_1;

        play->transitionType = TRANS_TYPE_CIRCLE(TCA_STARBURST, TCC_BLACK, TCS_FAST);
        play->transitionTrigger = TRANS_TRIGGER_START;
    }
}

void distcheck_SetupKickPlayer(distcheck* this, PlayState* play) {
    this->actionFunc = distcheck_KickPlayer;;
}

void distcheck_SpotPlayer(distcheck* this, PlayState* play){

    this->timer = 30;
    distcheck_SetupKickPlayer(this, play);
    Player_SetCsActionWithHaltedActors(play, &this->actor, PLAYER_CSACTION_95);
    //Sfx_PlaySfxCentered(NA_SE_SY_FOUND);
    Message_StartTextbox(play, 0x506A, &this->actor);
}

void distcheck_SetupSpotPlayer(distcheck* this, PlayState* play){

    this->actionFunc = distcheck_SpotPlayer;
}

void distcheck_WithinXZDistance(distcheck* thisx, PlayState* play) {
    distcheck* this = (distcheck*)thisx;
    if (CUR_EQUIP_VALUE(EQUIP_TYPE_SWORD) != EQUIP_VALUE_SWORD_KOKIRI && this->actor.xzDistToPlayer > 1900.0f){
         distcheck_SetupSpotPlayer(this, play);
         SET_EVENTCHKINF(EVENTCHKINF_02);
    }
}

void distcheck_SetupWithinXZDistance(distcheck* thisx, PlayState* play) {
    distcheck* this = (distcheck*)thisx;
    this->actionFunc = distcheck_WithinXZDistance;
}

void distcheck_Draw(Actor* thisx, PlayState* play){

}
