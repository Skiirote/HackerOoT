#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "entra_room_0.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "entra_scene.h"

SceneCmd entra_room_0Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(5),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x04, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&entra_room_0RoomShapeImageSingle_000070),
    SCENE_CMD_OBJECT_LIST(2, entra_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(2, entra_room_0ActorEntry_000044),
    SCENE_CMD_END(),
};

s16 entra_room_0ObjectList_000040[] = {
    OBJECT_SD,
    OBJECT_DOG,
};

ActorEntry entra_room_0ActorEntry_000044[] = {
    { ACTOR_EN_RIVER_SOUND, {     14,      0,   2482 }, {      0,      0,      0 }, 0x000B },
    { ACTOR_EN_HEISHI4,     {    117,      0,   2824 }, {      0, 0XC000,      0 }, 0xFF08 },
};

u8 entra_room_0_possiblePadding_000064[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

RoomShapeImageSingle entra_room_0RoomShapeImageSingle_000070 = { 
    { 1, 1, &entra_room_0RoomShapeDListsEntry_000090, }, 
    entra_room_0Background_000370, 
    0x00000000, 0x00000000, 
    320, 240, 
    0, 2, 
    0x0000, 0x0000, 
};

RoomShapeDListsEntry entra_room_0RoomShapeDListsEntry_000090 = { 
    entra_room_0DL_000348, NULL
};

u8 entra_room_0_possiblePadding_000098[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx entra_room_0Vtx_0000A0[] = {
#include "assets/scenes/misc/entra/entra_room_0Vtx_0000A0.vtx.inc"
};

Gfx entra_room_0DL_0002A0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&entra_room_0Vtx_0000A0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 161, 0, 255),
    gsSPVertex(entra_room_0Vtx_0000A0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx entra_room_0DL_000348[] = {
    gsSPDisplayList(entra_room_0DL_0002A0),
    gsSPEndDisplayList(),
};

u8 entra_room_0_unaccounted_000358[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x48, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 entra_room_0Background_000370[SCREEN_WIDTH * SCREEN_HEIGHT / 4] = {
#include "assets/scenes/misc/entra/entra_room_0Background_000370.jpg.inc.c"
};

