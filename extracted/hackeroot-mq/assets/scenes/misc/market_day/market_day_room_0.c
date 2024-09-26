#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "market_day_room_0.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "market_day_scene.h"

SceneCmd market_day_room_0Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(5),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x04, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&market_day_room_0RoomShapeNormal_0002D0),
    SCENE_CMD_OBJECT_LIST(15, market_day_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(39, market_day_room_0ActorEntry_000060),
    SCENE_CMD_END(),
};

s16 market_day_room_0ObjectList_000040[] = {
    OBJECT_OS_ANIME,
    OBJECT_AOB,
    OBJECT_AHG,
    OBJECT_CNE,
    OBJECT_BBA,
    OBJECT_BJI,
    OBJECT_BOJ,
    OBJECT_NIW,
    OBJECT_WOOD02,
    OBJECT_MA1,
    OBJECT_DOG,
    OBJECT_KIBAKO2,
    OBJECT_GR,
    OBJECT_MU,
    OBJECT_COB,
};

ActorEntry market_day_room_0ActorEntry_000060[] = {
    { ACTOR_EN_HY,          {    289,      0,    488 }, {      0, 0X4000,      0 }, 0x0003 },
    { ACTOR_EN_HY,          {   -338,      2,     51 }, {      0, 0X5B06,      0 }, 0x0788 },
    { ACTOR_EN_HY,          {   -155,      0,   -287 }, {      0, 0X5A50,      0 }, 0x078B },
    { ACTOR_EN_TG,          {    132,      0,      0 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_HY,          {   -387,      0,   -228 }, {      0, 0X4000,      0 }, 0x0785 },
    { ACTOR_EN_HY,          {   -344,      0,      9 }, {      0, 0X3777,      0 }, 0x0087 },
    { ACTOR_EN_HY,          {   -160,      0,   -133 }, {      0, 0X25B0,      0 }, 0x0786 },
    { ACTOR_EN_HY,          {    393,      0,    264 }, {      0, 0XAB61,      0 }, 0x0782 },
    { ACTOR_EN_HY,          {   -343,    160,    241 }, {      0, 0X5555,      0 }, 0x078C },
    { ACTOR_EN_MU,          {    250,      2,    400 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_MU,          {   -400,      2,    185 }, {      0, 0XC000,      0 }, 0x0001 },
    { ACTOR_EN_NIW_GIRL,    {    115,      0,   -495 }, {      0, 0XC000,      0 }, 0x0200 },
    { ACTOR_EN_HY,          {    258,      0,   -246 }, {      0, 0XE222,      0 }, 0x0780 },
    { ACTOR_EN_MA1,         {     -3,      0,   -181 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_WOOD02,      {   -100,      0,    240 }, {      0, 0X1555,      0 }, 0xFF02 },
    { ACTOR_EN_WONDER_ITEM, {   -523,    180,   -340 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {   -523,    180,   -224 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {   -521,    180,   -113 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {   -521,    180,     -2 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {   -516,    180,    117 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_HY,          {    -85,      0,    204 }, {      0, 0X1777,      0 }, 0x078A },
    { ACTOR_EN_HY,          {    480,      0,   -202 }, {      0, 0XCC17,      0 }, 0x0781 },
    { ACTOR_EN_HY,          {    -72,      0,    245 }, {      0, 0X9555,      0 }, 0x0789 },
    { ACTOR_EN_KUSA,        {     76,     20,   -190 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,        {     75,     20,   -310 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,        {     73,     20,   -428 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,        {    432,      0,   -548 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,        {    465,      0,   -548 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,        {    504,      0,   -546 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,        {   -131,      0,    225 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,        {   -106,      0,    277 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_OBJ_MURE,       {     77,     49,   -204 }, {      0,      0,      0 }, 0x3324 },
    { ACTOR_EN_DOG,         {    206,      0,   -193 }, {      0, 0X999A,      0 }, 0x0030 },
    { ACTOR_OBJ_KIBAKO2,    {    -90,      0,   -576 }, { 0XFFFF,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,    {   -150,      0,   -576 }, { 0XFFFF,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,    {    490,      0,    132 }, { 0XFFFF,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,    {    490,      0,    338 }, { 0XFFFF,      0,      0 }, 0xFFFF },
    { ACTOR_EN_HY,          {   -110,      0,   -336 }, {      0, 0XF8E4,      0 }, 0x0784 },
    { ACTOR_EN_RIVER_SOUND, {     22,      0,     33 }, {      0,      0,      0 }, 0x000A },
};

RoomShapeNormal market_day_room_0RoomShapeNormal_0002D0 = { 
    0, 1,
    market_day_room_0RoomShapeDListsEntry_0002DC,
    market_day_room_0RoomShapeDListsEntry_0002DC + ARRAY_COUNTU(market_day_room_0RoomShapeDListsEntry_0002DC)
};

RoomShapeDListsEntry market_day_room_0RoomShapeDListsEntry_0002DC[1] = {
    { market_day_room_0DL_0057D8, NULL },
};

s32 market_day_room_0_terminatorMaybe_0002E4 = { 0x01000000 };

u8 market_day_room_0_possiblePadding_0002E8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx market_day_room_0Vtx_0002F0[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_0002F0.vtx.inc"
};

Gfx market_day_room_0DL_0003B0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_0002F0[4], 8, 0),
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
    gsSPVertex(market_day_room_0Vtx_0002F0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_000430[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_000430.vtx.inc"
};

Gfx market_day_room_0DL_0005B0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_000430[16], 8, 0),
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
    gsSPVertex(market_day_room_0Vtx_000430, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_000648[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_000648.vtx.inc"
};

Gfx market_day_room_0DL_0007C8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_000648[16], 8, 0),
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
    gsSPVertex(market_day_room_0Vtx_000648, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_000860[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_000860.vtx.inc"
};

Gfx market_day_room_0DL_0009E0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_000860[16], 8, 0),
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
    gsSPVertex(market_day_room_0Vtx_000860, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_000A78[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_000A78.vtx.inc"
};

Gfx market_day_room_0DL_000C78[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_000A78[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 0, 255, 255),
    gsSPVertex(market_day_room_0Vtx_000A78, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 0, 161, 0, 255),
    gsSPVertex(&market_day_room_0Vtx_000A78[8], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(3, 2, 15, 0, 3, 15, 14, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_000D60[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_000D60.vtx.inc"
};

Gfx market_day_room_0DL_0019E0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_000D60[192], 8, 0),
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
    gsSPVertex(market_day_room_0Vtx_000D60, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_000D60[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_000D60[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_000D60[96], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_000D60[128], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_000D60[160], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_001C00[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_001C00.vtx.inc"
};

Gfx market_day_room_0DL_0020B0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_001C00[67], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 0, 0, 255),
    gsSPVertex(market_day_room_0Vtx_001C00, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 12, 17, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 16, 18, 0, 19, 18, 20, 0),
    gsSP2Triangles(21, 19, 20, 0, 21, 20, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 23, 26, 0, 27, 26, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_001C00[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 10, 6, 11, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 10, 12, 0),
    gsSP2Triangles(13, 12, 14, 0, 15, 13, 14, 0),
    gsSP2Triangles(15, 14, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 17, 20, 0),
    gsSP2Triangles(21, 20, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 23, 28, 0),
    gsSP2Triangles(27, 28, 8, 0, 29, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_001C00[64], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_0021E0[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_0021E0.vtx.inc"
};

Gfx market_day_room_0DL_002690[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_0021E0[67], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 0, 0, 255),
    gsSPVertex(market_day_room_0Vtx_0021E0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 11, 14, 0, 15, 14, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 17, 20, 0, 21, 20, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSP1Triangle(31, 27, 30, 0),
    gsSPVertex(&market_day_room_0Vtx_0021E0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 7, 10, 0),
    gsSP2Triangles(11, 10, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 13, 16, 0),
    gsSP2Triangles(17, 16, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 23, 26, 0),
    gsSP2Triangles(27, 26, 28, 0, 8, 29, 30, 0),
    gsSP1Triangle(8, 30, 9, 0),
    gsSPVertex(&market_day_room_0Vtx_0021E0[63], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_0027C0[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_0027C0.vtx.inc"
};

Gfx market_day_room_0DL_003140[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_0027C0[144], 8, 0),
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
    gsSPVertex(market_day_room_0Vtx_0027C0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_0027C0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_0027C0[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_0027C0[96], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_0027C0[128], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_0032F8[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_0032F8.vtx.inc"
};

Gfx market_day_room_0DL_0033D8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_0032F8[6], 8, 0),
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
    gsSPVertex(market_day_room_0Vtx_0032F8, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_003460[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_003460.vtx.inc"
};

Gfx market_day_room_0DL_003620[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_003460[20], 8, 0),
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
    gsSPVertex(market_day_room_0Vtx_003460, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_0036C0[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_0036C0.vtx.inc"
};

Gfx market_day_room_0DL_003B00[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_0036C0[60], 8, 0),
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
    gsSPVertex(market_day_room_0Vtx_0036C0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_0036C0[32], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_003BF8[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_003BF8.vtx.inc"
};

Gfx market_day_room_0DL_003D98[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_003BF8[18], 8, 0),
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
    gsSPVertex(market_day_room_0Vtx_003BF8, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(0, 6, 7, 0, 0, 7, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 13, 0),
    gsSP2Triangles(8, 14, 15, 0, 8, 15, 9, 0),
    gsSP2Triangles(12, 16, 17, 0, 12, 17, 13, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_003E48[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_003E48.vtx.inc"
};

Gfx market_day_room_0DL_004048[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_003E48[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 127, 0, 255, 255),
    gsSPVertex(market_day_room_0Vtx_003E48, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 2, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 8, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 14, 12, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 16, 0),
    gsSP2Triangles(19, 21, 22, 0, 19, 22, 23, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_004100[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_004100.vtx.inc"
};

Gfx market_day_room_0DL_004200[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_004100[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 127, 255),
    gsSPVertex(market_day_room_0Vtx_004100, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_004288[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_004288.vtx.inc"
};

Gfx market_day_room_0DL_005388[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_004288[264], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 127, 255),
    gsSPVertex(market_day_room_0Vtx_004288, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_004288[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_004288[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_004288[96], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_004288[128], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_004288[160], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_004288[192], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_004288[224], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&market_day_room_0Vtx_004288[256], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx market_day_room_0Vtx_005650[] = {
#include "assets/scenes/misc/market_day/market_day_room_0Vtx_005650.vtx.inc"
};

Gfx market_day_room_0DL_005750[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&market_day_room_0Vtx_005650[8], 8, 0),
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
    gsSPVertex(market_day_room_0Vtx_005650, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx market_day_room_0DL_0057D8[] = {
    gsSPDisplayList(market_day_room_0DL_0003B0),
    gsSPDisplayList(market_day_room_0DL_0005B0),
    gsSPDisplayList(market_day_room_0DL_0007C8),
    gsSPDisplayList(market_day_room_0DL_0009E0),
    gsSPDisplayList(market_day_room_0DL_000C78),
    gsSPDisplayList(market_day_room_0DL_0019E0),
    gsSPDisplayList(market_day_room_0DL_0020B0),
    gsSPDisplayList(market_day_room_0DL_002690),
    gsSPDisplayList(market_day_room_0DL_003140),
    gsSPDisplayList(market_day_room_0DL_0033D8),
    gsSPDisplayList(market_day_room_0DL_003620),
    gsSPDisplayList(market_day_room_0DL_003B00),
    gsSPDisplayList(market_day_room_0DL_003D98),
    gsSPDisplayList(market_day_room_0DL_004048),
    gsSPDisplayList(market_day_room_0DL_004200),
    gsSPDisplayList(market_day_room_0DL_005388),
    gsSPDisplayList(market_day_room_0DL_005750),
    gsSPEndDisplayList(),
};

