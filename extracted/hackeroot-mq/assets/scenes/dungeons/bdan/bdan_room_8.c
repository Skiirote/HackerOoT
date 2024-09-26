#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "bdan_room_8.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "bdan_scene.h"
#include "bdan_room_0.h"
#include "bdan_room_1.h"
#include "bdan_room_2.h"
#include "bdan_room_3.h"
#include "bdan_room_4.h"
#include "bdan_room_5.h"
#include "bdan_room_6.h"
#include "bdan_room_7.h"
#include "bdan_room_9.h"
#include "bdan_room_10.h"
#include "bdan_room_11.h"
#include "bdan_room_12.h"
#include "bdan_room_13.h"
#include "bdan_room_14.h"
#include "bdan_room_15.h"

SceneCmd bdan_room_8Commands[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(bdan_room_8AlternateHeaders0x000048),
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&bdan_room_8RoomShapeNormal_000080),
    SCENE_CMD_OBJECT_LIST(4, bdan_room_8ObjectList_000058),
    SCENE_CMD_ACTOR_LIST(2, bdan_room_8ActorEntry_000060),
    SCENE_CMD_END(),
};

SceneCmd* bdan_room_8AlternateHeaders0x000048[] = {
    NULL,
    NULL,
    NULL,
    bdan_room_8Set_0000A0,
};

s16 bdan_room_8ObjectList_000058[] = {
    OBJECT_BDAN_OBJECTS,
    OBJECT_RU1,
    OBJECT_BXA,
    OBJECT_BOX,
};

ActorEntry bdan_room_8ActorEntry_000060[] = {
    { ACTOR_OBJ_ROOMTIMER, {   -113,   -340,  -5669 }, {      0,      0,      0 }, 0x2FFF },
    { ACTOR_EN_BA,         {      1,     20,  -5801 }, {      0,      0,      0 }, 0x0B00 },
};

RoomShapeNormal bdan_room_8RoomShapeNormal_000080 = { 
    0, 1,
    bdan_room_8RoomShapeDListsEntry_00008C,
    bdan_room_8RoomShapeDListsEntry_00008C + ARRAY_COUNTU(bdan_room_8RoomShapeDListsEntry_00008C)
};

RoomShapeDListsEntry bdan_room_8RoomShapeDListsEntry_00008C[1] = {
    { bdan_room_8DL_0037A8, NULL },
};

s32 bdan_room_8_terminatorMaybe_000094 = { 0x01000000 };

u8 bdan_room_8_possiblePadding_000098[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd bdan_room_8Set_0000A0[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 255),
    SCENE_CMD_ROOM_SHAPE(&bdan_room_8RoomShapeNormal_000080),
    SCENE_CMD_OBJECT_LIST(6, bdan_room_8ObjectList_0000E0),
    SCENE_CMD_ACTOR_LIST(6, bdan_room_8ActorEntry_0000EC),
    SCENE_CMD_END(),
};

s16 bdan_room_8ObjectList_0000E0[] = {
    OBJECT_BDAN_OBJECTS,
    OBJECT_RU1,
    OBJECT_BXA,
    OBJECT_BL,
    OBJECT_BOX,
    OBJECT_EFC_FLASH,
};

ActorEntry bdan_room_8ActorEntry_0000EC[] = {
    { ACTOR_EN_BA,   {      1,     20,  -5801 }, {      0,      0,      0 }, 0x3FFF },
    { ACTOR_EN_BILI, {   -181,   -262,  -5982 }, {      0, 0X2222,      0 }, 0xFFFF },
    { ACTOR_EN_BILI, {   -184,   -271,  -5623 }, {      0, 0X5DDE,      0 }, 0xFFFF },
    { ACTOR_EN_BILI, {    184,   -253,  -5621 }, {      0, 0XA38E,      0 }, 0xFFFF },
    { ACTOR_EN_BILI, {    182,   -275,  -5978 }, {      0, 0XE000,      0 }, 0xFFFF },
    { ACTOR_EN_BOX,  {    -11,   -340,  -6006 }, {      0, 0X8000,      0 }, 0x10C0 },
};

Vtx bdan_room_8Vtx_000150[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_000150.vtx.inc"
};

Gfx bdan_room_8DL_0006B0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_000150[78], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(bdan_room_8Vtx_000150, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 1, 4, 0, 1, 5, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 8, 11, 10, 0),
    gsSP2Triangles(12, 3, 0, 0, 10, 11, 13, 0),
    gsSP2Triangles(11, 14, 15, 0, 14, 11, 8, 0),
    gsSP2Triangles(8, 6, 16, 0, 17, 18, 5, 0),
    gsSP2Triangles(5, 1, 17, 0, 3, 19, 1, 0),
    gsSP2Triangles(3, 20, 19, 0, 6, 18, 16, 0),
    gsSP2Triangles(6, 5, 18, 0, 8, 16, 14, 0),
    gsSP2Triangles(1, 19, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 21, 24, 0),
    gsSP2Triangles(25, 24, 26, 0, 24, 23, 27, 0),
    gsSP2Triangles(24, 27, 28, 0, 26, 24, 28, 0),
    gsSP2Triangles(26, 28, 29, 0, 30, 31, 22, 0),
    gsSP1Triangle(30, 22, 21, 0),
    gsSPVertex(&bdan_room_8Vtx_000150[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 0, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 9, 12, 0, 13, 12, 14, 0),
    gsSP2Triangles(15, 16, 5, 0, 15, 5, 17, 0),
    gsSP2Triangles(18, 15, 17, 0, 18, 17, 8, 0),
    gsSP2Triangles(12, 11, 16, 0, 12, 16, 15, 0),
    gsSP2Triangles(14, 12, 15, 0, 14, 15, 18, 0),
    gsSP2Triangles(19, 20, 10, 0, 19, 10, 9, 0),
    gsSP2Triangles(21, 19, 9, 0, 21, 9, 13, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&bdan_room_8Vtx_000150[64], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 5, 9, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_0008B0[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_0008B0.vtx.inc"
};

Mtx bdan_room_8DL_000C80Mtx_000000 = { 
    65536      , 0          , 1          , 0          , 
    0          , 65536      , -6029652   , -375193599 , 
    0          , 0          , 0          , 0          , 
    0          , 0          , -2147483648, -1073741824, 
};

Gfx bdan_room_8DL_000C80[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_0008B0[49], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_000C80Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_0008B0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 2, 4, 0, 5, 6, 4, 0),
    gsSP2Triangles(7, 8, 1, 0, 8, 9, 1, 0),
    gsSP2Triangles(1, 10, 2, 0, 1, 9, 10, 0),
    gsSP2Triangles(2, 10, 4, 0, 10, 11, 4, 0),
    gsSP2Triangles(12, 4, 11, 0, 12, 5, 4, 0),
    gsSP2Triangles(13, 5, 12, 0, 8, 14, 9, 0),
    gsSP2Triangles(9, 14, 10, 0, 14, 15, 10, 0),
    gsSP2Triangles(10, 16, 11, 0, 10, 15, 16, 0),
    gsSP2Triangles(17, 12, 16, 0, 12, 11, 16, 0),
    gsSP2Triangles(18, 12, 17, 0, 19, 20, 14, 0),
    gsSP2Triangles(14, 21, 15, 0, 14, 20, 21, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 24, 22, 0),
    gsSP2Triangles(15, 21, 16, 0, 21, 23, 16, 0),
    gsSP2Triangles(25, 16, 23, 0, 25, 17, 16, 0),
    gsSP2Triangles(26, 18, 25, 0, 18, 17, 25, 0),
    gsSP2Triangles(25, 23, 27, 0, 23, 22, 27, 0),
    gsSP2Triangles(28, 21, 20, 0, 28, 24, 21, 0),
    gsSP2Triangles(29, 28, 20, 0, 27, 30, 25, 0),
    gsSP2Triangles(6, 5, 13, 0, 12, 18, 13, 0),
    gsSP2Triangles(26, 25, 30, 0, 1, 3, 7, 0),
    gsSP2Triangles(29, 20, 19, 0, 4, 6, 0, 0),
    gsSP1Triangle(14, 8, 19, 0),
    gsSPVertex(&bdan_room_8Vtx_0008B0[31], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 3, 0, 10, 3, 2, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(8, 16, 9, 0, 17, 15, 14, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_000E78[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_000E78.vtx.inc"
};

Mtx bdan_room_8DL_000FF8Mtx_000000 = { 
    -65536     , 0          , -65536     , -65536     , 
    65535      , 0          , 15793956   , -364576767 , 
    1258029056 , -1258029056, 1258029056 , 1258029056 , 
    0          , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_000FF8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_000E78[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_000FF8Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_000E78, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 5, 0, 2, 0),
    gsSP2Triangles(5, 2, 4, 0, 1, 6, 7, 0),
    gsSP2Triangles(6, 1, 0, 0, 3, 1, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 5, 4, 0, 10, 4, 11, 0),
    gsSP2Triangles(6, 0, 8, 0, 0, 5, 10, 0),
    gsSP2Triangles(3, 7, 9, 0, 11, 4, 3, 0),
    gsSP2Triangles(8, 0, 10, 0, 3, 9, 11, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_001138[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_001138.vtx.inc"
};

Mtx bdan_room_8DL_0012F8Mtx_000000 = { 
    0          , 65536      , -65536     , 0          , 
    65535      , 0          , 19726116   , -380305407 , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_0012F8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_001138[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_0012F8Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_001138, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 5, 6, 4, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 3, 0),
    gsSP2Triangles(6, 8, 7, 0, 5, 8, 6, 0),
    gsSP2Triangles(5, 9, 8, 0, 3, 7, 2, 0),
    gsSP2Triangles(2, 7, 10, 0, 5, 4, 11, 0),
    gsSP2Triangles(11, 4, 1, 0, 7, 8, 10, 0),
    gsSP2Triangles(9, 11, 12, 0, 9, 12, 13, 0),
    gsSP2Triangles(14, 0, 10, 0, 14, 10, 15, 0),
    gsSP2Triangles(11, 1, 12, 0, 1, 0, 14, 0),
    gsSP2Triangles(8, 9, 13, 0, 15, 10, 8, 0),
    gsSP2Triangles(12, 1, 14, 0, 15, 8, 13, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_001450[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_001450.vtx.inc"
};

Mtx bdan_room_8DL_0015D0Mtx_000000 = { 
    0          , 0          , -65536     , 0          , 
    65535      , 0          , 15793956   , -396034047 , 
    -1258029056, -1258029056, 1258029056 , -1258029056, 
    0          , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_0015D0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_001450[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_0015D0Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_001450, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 2, 5, 0, 1, 0, 6, 0),
    gsSP2Triangles(0, 3, 7, 0, 0, 7, 6, 0),
    gsSP2Triangles(3, 2, 4, 0, 2, 1, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 4, 5, 0, 10, 5, 11, 0),
    gsSP2Triangles(7, 3, 8, 0, 3, 4, 10, 0),
    gsSP2Triangles(1, 6, 9, 0, 11, 5, 1, 0),
    gsSP2Triangles(8, 3, 10, 0, 11, 1, 9, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_001710[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_001710.vtx.inc"
};

Mtx bdan_room_8DL_0018D0Mtx_000000 = { 
    65536      , 0          , 0          , 65536      , 
    65535      , 0          , 65316      , -399966207 , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_0018D0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_001710[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_0018D0Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_001710, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 3, 5, 1, 0),
    gsSP2Triangles(1, 5, 2, 0, 5, 6, 2, 0),
    gsSP2Triangles(2, 6, 7, 0, 5, 8, 6, 0),
    gsSP2Triangles(6, 8, 7, 0, 8, 9, 7, 0),
    gsSP2Triangles(10, 2, 7, 0, 11, 5, 3, 0),
    gsSP2Triangles(0, 2, 10, 0, 8, 5, 11, 0),
    gsSP2Triangles(11, 4, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 10, 9, 0, 14, 9, 15, 0),
    gsSP2Triangles(4, 0, 12, 0, 0, 10, 14, 0),
    gsSP2Triangles(8, 11, 13, 0, 15, 9, 8, 0),
    gsSP2Triangles(12, 0, 14, 0, 8, 13, 15, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_001A28[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_001A28.vtx.inc"
};

Mtx bdan_room_8DL_001BA8Mtx_000000 = { 
    0          , -65536     , 0          , 0          , 
    65535      , 0          , -15663324  , -396034047 , 
    -1258029056, 1258029056 , -1258029056, -1258029056, 
    0          , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_001BA8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_001A28[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_001BA8Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_001A28, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 0, 2, 0),
    gsSP2Triangles(5, 2, 4, 0, 1, 6, 7, 0),
    gsSP2Triangles(6, 1, 0, 0, 1, 7, 3, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 5, 4, 0, 10, 4, 11, 0),
    gsSP2Triangles(6, 0, 8, 0, 0, 5, 10, 0),
    gsSP2Triangles(3, 7, 9, 0, 11, 4, 3, 0),
    gsSP2Triangles(8, 0, 10, 0, 11, 3, 9, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_001CE8[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_001CE8.vtx.inc"
};

Mtx bdan_room_8DL_001F18Mtx_000000 = { 
    0          , -65536     , 65536      , 0          , 
    65535      , 0          , -19595484  , -380305407 , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_001F18[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_001CE8[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_001F18Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_001CE8, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 3, 5, 2, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 6, 5, 0),
    gsSP2Triangles(7, 6, 4, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 11, 9, 0, 10, 9, 12, 0),
    gsSP2Triangles(5, 13, 2, 0, 7, 4, 14, 0),
    gsSP2Triangles(14, 4, 1, 0, 12, 9, 15, 0),
    gsSP2Triangles(16, 14, 17, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 0, 13, 0, 19, 13, 20, 0),
    gsSP2Triangles(14, 1, 17, 0, 1, 0, 19, 0),
    gsSP2Triangles(9, 11, 21, 0, 22, 15, 9, 0),
    gsSP2Triangles(17, 1, 19, 0, 22, 9, 21, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_002070[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_002070.vtx.inc"
};

Mtx bdan_room_8DL_0021F0Mtx_000000 = { 
    -65536     , -65536     , 0          , -65536     , 
    65535      , 0          , -15663324  , -364576767 , 
    1258029056 , 1258029056 , -1258029056, 1258029056 , 
    0          , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_0021F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_002070[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_0021F0Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_002070, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 0, 2, 0, 4, 3, 6, 0),
    gsSP2Triangles(4, 6, 7, 0, 3, 0, 5, 0),
    gsSP2Triangles(1, 0, 4, 0, 1, 4, 7, 0),
    gsSP2Triangles(8, 7, 6, 0, 8, 6, 9, 0),
    gsSP2Triangles(5, 2, 10, 0, 5, 10, 11, 0),
    gsSP2Triangles(6, 3, 9, 0, 3, 5, 11, 0),
    gsSP2Triangles(1, 7, 8, 0, 10, 2, 1, 0),
    gsSP2Triangles(9, 3, 11, 0, 1, 8, 10, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_002330[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_002330.vtx.inc"
};

Mtx bdan_room_8DL_002440Mtx_000000 = { 
    0          , 0          , -1         , 0          , 
    65535      , -65536     , 12189676   , -391774207 , 
    -1258029056, -1258029056, -2083306052, 2083323904 , 
    -2085203869, 2085224448 , 0          , 0          , 
};

Gfx bdan_room_8DL_002440[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_002330[5], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_002440Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_002330, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(3, 0, 2, 0, 0, 4, 1, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_002548[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_002548.vtx.inc"
};

Mtx bdan_room_8DL_002688Mtx_000000 = { 
    65536      , 0          , 65535      , 0          , 
    65535      , -65536     , 1048556    , -395051007 , 
    0          , 0          , 20714      , -1161691136, 
    17726      , 1357512704 , 0          , 0          , 
};

Gfx bdan_room_8DL_002688[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_002548[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_002688Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_002548, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 1, 3, 0, 5, 3, 0, 0),
    gsSP2Triangles(3, 6, 4, 0, 4, 7, 1, 0),
    gsSP2Triangles(1, 7, 2, 0, 6, 3, 5, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_0027A0[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_0027A0.vtx.inc"
};

Mtx bdan_room_8DL_0028B0Mtx_000000 = { 
    0          , -65536     , 65535      , 0          , 
    -1         , -65536     , -11403284  , -392429567 , 
    -1258029056, 1258029056 , 2083341756 , 2083323904 , 
    2085245027 , 2085224448 , 0          , 0          , 
};

Gfx bdan_room_8DL_0028B0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_0027A0[5], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_0028B0Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_0027A0, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(2, 1, 4, 0, 3, 1, 0, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_0029B8[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_0029B8.vtx.inc"
};

Mtx bdan_room_8DL_002AF8Mtx_000000 = { 
    0          , -65536     , 65535      , 0          , 
    -1         , 0          , -14680084  , -381288447 , 
    0          , 0          , -1161670422, 0          , 
    1357530430 , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_002AF8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_0029B8[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_002AF8Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_0029B8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 5, 1, 0),
    gsSP2Triangles(1, 5, 6, 0, 1, 6, 2, 0),
    gsSP2Triangles(7, 5, 4, 0, 7, 4, 3, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_002C10[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_002C10.vtx.inc"
};

Mtx bdan_room_8DL_002D20Mtx_000000 = { 
    -65536     , -65536     , 65535      , -65536     , 
    -1         , 0          , -12058644  , -368836607 , 
    1258029056 , 1258029056 , 2083341756 , -2083323904, 
    2085245027 , -2085224448, 0          , 0          , 
};

Gfx bdan_room_8DL_002D20[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_002C10[5], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_002D20Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_002C10, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(1, 3, 2, 0, 4, 1, 0, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_002E28[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_002E28.vtx.inc"
};

Mtx bdan_room_8DL_002F68Mtx_000000 = { 
    -65536     , 0          , 65535      , -65536     , 
    65535      , 0          , -917524    , -365559807 , 
    0          , 0          , 20714      , 1161691136 , 
    17726      , -1357512704, 0          , 0          , 
};

Gfx bdan_room_8DL_002F68[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_002E28[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_002F68Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_002E28, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 2, 3, 0, 3, 1, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 1, 0, 7, 0),
    gsSP2Triangles(1, 7, 5, 0, 6, 2, 4, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_003080[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_003080.vtx.inc"
};

Mtx bdan_room_8DL_003190Mtx_000000 = { 
    -65536     , 0          , -1         , -65536     , 
    65535      , 0          , 11534316   , -368181247 , 
    1258029056 , -1258029056, -2083306052, -2083323904, 
    -2085203869, -2085224448, 0          , 0          , 
};

Gfx bdan_room_8DL_003190[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_003080[5], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_003190Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_003080, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(1, 0, 4, 0, 1, 3, 2, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_003298[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_003298.vtx.inc"
};

Mtx bdan_room_8DL_0033D8Mtx_000000 = { 
    0          , 65536      , -1         , 0          , 
    65535      , 0          , 14811116   , -379322367 , 
    0          , 0          , 1161711850 , 0          , 
    -1357494978, 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_0033D8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_003298[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_0033D8Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_003298, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 1, 0, 0, 0, 2, 5, 0),
    gsSP2Triangles(6, 2, 3, 0, 5, 2, 6, 0),
    gsSP2Triangles(3, 1, 7, 0, 7, 1, 4, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_0034F0[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_0034F0.vtx.inc"
};

Mtx bdan_room_8DL_003680Mtx_000000 = { 
    65536      , 0          , 65535      , 0          , 
    0          , -65536     , -262084    , -380108799 , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 1073741824 , 536870912  , 
};

Gfx bdan_room_8DL_003680[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_0034F0[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPMatrix(&bdan_room_8DL_003680Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_0034F0, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(5, 6, 2, 0, 7, 8, 2, 0),
    gsSP2Triangles(8, 9, 2, 0, 9, 10, 2, 0),
    gsSP2Triangles(6, 11, 2, 0, 11, 12, 2, 0),
    gsSP2Triangles(12, 7, 2, 0, 0, 2, 10, 0),
    gsSPMatrix(&gMtxClear, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx bdan_room_8DL_0037A8[] = {
    gsSPDisplayList(bdan_room_8DL_0006B0),
    gsSPDisplayList(bdan_room_8DL_000C80),
    gsSPDisplayList(bdan_room_8DL_000FF8),
    gsSPDisplayList(bdan_room_8DL_0012F8),
    gsSPDisplayList(bdan_room_8DL_0015D0),
    gsSPDisplayList(bdan_room_8DL_0018D0),
    gsSPDisplayList(bdan_room_8DL_001BA8),
    gsSPDisplayList(bdan_room_8DL_001F18),
    gsSPDisplayList(bdan_room_8DL_0021F0),
    gsSPDisplayList(bdan_room_8DL_002440),
    gsSPDisplayList(bdan_room_8DL_002688),
    gsSPDisplayList(bdan_room_8DL_0028B0),
    gsSPDisplayList(bdan_room_8DL_002AF8),
    gsSPDisplayList(bdan_room_8DL_002D20),
    gsSPDisplayList(bdan_room_8DL_002F68),
    gsSPDisplayList(bdan_room_8DL_003190),
    gsSPDisplayList(bdan_room_8DL_0033D8),
    gsSPDisplayList(bdan_room_8DL_003680),
    gsSPEndDisplayList(),
};

