#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "men_room_2.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "men_scene.h"
#include "men_room_0.h"
#include "men_room_1.h"
#include "men_room_3.h"
#include "men_room_4.h"
#include "men_room_5.h"
#include "men_room_6.h"
#include "men_room_7.h"
#include "men_room_8.h"
#include "men_room_9.h"
#include "men_room_10.h"

SceneCmd men_room_2Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&men_room_2RoomShapeCullable_000250),
    SCENE_CMD_OBJECT_LIST(10, men_room_2ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(31, men_room_2ActorEntry_000054),
    SCENE_CMD_END(),
};

s16 men_room_2ObjectList_000040[] = {
    OBJECT_MENKURI_OBJECTS,
    OBJECT_HIDAN_OBJECTS,
    OBJECT_GOROIWA,
    OBJECT_BOX,
    OBJECT_EFC_FLASH,
    OBJECT_DOOR_KILLER,
    OBJECT_D_HSBLOCK,
    OBJECT_WALLMASTER,
    OBJECT_ICE_OBJECTS,
    OBJECT_FZ,
};

ActorEntry men_room_2ActorEntry_000054[] = {
    { ACTOR_EN_FZ,             {  -1883,    -80,   -963 }, {      0, 0X8000,      0 }, 0x0000 },
    { ACTOR_BG_ICE_TURARA,     {  -1216,    320,  -2029 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_BG_ICE_TURARA,     {  -1263,    320,  -2028 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_BG_ICE_TURARA,     {  -1168,    320,  -2028 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_BG_ICE_TURARA,     {  -1255,    273,  -1273 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_BG_ICE_TURARA,     {  -1182,    216,  -1181 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_BG_ICE_TURARA,     {  -1247,    160,  -1096 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_BG_ICE_TURARA,     {  -1884,    120,  -1024 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_BG_ICE_TURARA,     {  -1261,    102,  -1001 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_BG_ICE_TURARA,     {  -1183,    160,  -2132 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_ICE_TURARA,     {  -1205,    160,  -2080 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_ICE_TURARA,     {  -1170,    160,  -2080 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_ICE_TURARA,     {  -1265,    160,  -2067 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_ICE_TURARA,     {  -1235,    160,  -2054 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_BG_HIDAN_FIREWALL, {  -1575,    160,  -1785 }, {      0,      0,      0 }, 0x00FF },
    { ACTOR_BG_HIDAN_FIREWALL, {  -1763,     98,  -1601 }, {      0, 0XC000,      0 }, 0x00FF },
    { ACTOR_BG_HIDAN_FIREWALL, {  -1400,    -80,   -999 }, {      0, 0XC000,      0 }, 0x00FF },
    { ACTOR_EN_WALLMAS,        {  -1589,    -80,  -1329 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_OBJ_HSBLOCK,       {  -1578,    358,  -1641 }, { 0X4000,      0,      0 }, 0xFFC2 },
    { ACTOR_OBJ_HSBLOCK,       {  -1218,    360,  -1636 }, { 0X4000,      0,      0 }, 0xFFC2 },
    { ACTOR_OBJ_HSBLOCK,       {  -1580,    358,  -1006 }, { 0X4000,      0,      0 }, 0xFFC2 },
    { ACTOR_EN_WALLMAS,        {  -1579,    193,  -1547 }, {      0, 0X4000,      0 }, 0x1102 },
    { ACTOR_OBJ_ROOMTIMER,     {  -1550,    -80,   -849 }, {      0,      0,      0 }, 0x705A },
    { ACTOR_EN_WONDER_TALK2,   {  -1557,    -40,  -1268 }, {      0,      0,   0X45 }, 0x4E5C },
    { ACTOR_EN_G_SWITCH,       {  -1580,    -80,   -804 }, {      0, 0X8000,      0 }, 0x015C },
    { ACTOR_EN_G_SWITCH,       {  -1245,    160,  -2112 }, {      0,      0,      0 }, 0x1FDC },
    { ACTOR_EN_G_SWITCH,       {  -1542,     53,  -1467 }, {      0,      0,      0 }, 0x1FDC },
    { ACTOR_EN_G_SWITCH,       {  -1480,    200,  -1000 }, {      0,      0,      0 }, 0x1FDC },
    { ACTOR_EN_G_SWITCH,       {  -1886,    -80,   -956 }, {      0,      0,      0 }, 0x1FDC },
    { ACTOR_EN_G_SWITCH,       {  -1261,   -112,   -923 }, {      0,      0,      0 }, 0x1FDC },
    { ACTOR_OBJ_HSBLOCK,       {  -1519,    160,  -1900 }, {      0,      0,      0 }, 0x1CC1 },
};

u8 men_room_2_possiblePadding_000244[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

RoomShapeCullable men_room_2RoomShapeCullable_000250 = { 
    2, 8,
    men_room_2RoomShapeCullableEntry_00025C,
    men_room_2RoomShapeCullableEntry_00025C + ARRAY_COUNTU(men_room_2RoomShapeCullableEntry_00025C)
};

RoomShapeCullableEntry men_room_2RoomShapeCullableEntry_00025C[8] = {
    { {  -1579,     20,   -880 },    289, men_room_2DL_000580, NULL },
    { {  -1579,     80,  -1460 },    918, men_room_2DL_001300, NULL },
    { {  -1579,    240,  -2074 },    137, men_room_2DL_000940, NULL },
    { {  -1499,    140,  -1510 },    684, men_room_2DL_001C30, NULL },
    { {  -1579,    140,  -1455 },    765, men_room_2DL_0026E0, NULL },
    { {  -1579,    240,  -1380 },    769, men_room_2DL_002C30, NULL },
    { {  -1579,    240,  -2157 },    100, men_room_2DL_002FA0, NULL },
    { {  -1579,     40,  -1390 },    894, men_room_2DL_003928, NULL },
};

s32 men_room_2_terminatorMaybe_0002DC = { 0x01000000 };

Vtx men_room_2Vtx_0002E0[] = {
#include "assets/scenes/dungeons/men/men_room_2Vtx_0002E0.vtx.inc"
};

Gfx men_room_2DL_000580[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_2Vtx_0002E0[34], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(men_sceneTLUT_00F6C0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_2Vtx_0002E0, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_2Tex_004448, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_2Vtx_0002E0[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_2Vtx_0002E0[16], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 6, 3, 0, 6, 4, 3, 0),
    gsSP2Triangles(0, 7, 1, 0, 7, 6, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(11, 12, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(14, 16, 15, 0, 14, 17, 16, 0),
    gsSPEndDisplayList(),
};

Vtx men_room_2Vtx_000740[] = {
#include "assets/scenes/dungeons/men/men_room_2Vtx_000740.vtx.inc"
};

Gfx men_room_2DL_000940[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_2Vtx_000740[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(men_sceneTLUT_00F6C0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_2Vtx_000740, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 3, 6, 0),
    gsSP2Triangles(7, 6, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 12, 15, 0, 16, 15, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_2Tex_004C48, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_2Vtx_000740[18], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 5, 4, 0, 0),
    gsSPEndDisplayList(),
};

Vtx men_room_2Vtx_000AA0[] = {
#include "assets/scenes/dungeons/men/men_room_2Vtx_000AA0.vtx.inc"
};

Gfx men_room_2DL_001300[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_2Vtx_000AA0[126], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_2Vtx_000AA0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_sceneTex_0108C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(men_sceneTLUT_00F6C0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPVertex(&men_room_2Vtx_000AA0[4], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&men_room_2Vtx_000AA0[8], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_sceneTex_0108C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(men_sceneTLUT_00F6C0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPVertex(&men_room_2Vtx_000AA0[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_2Tex_004448, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_2Vtx_000AA0[16], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_2Vtx_000AA0[22], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(5, 8, 7, 0, 9, 8, 5, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(17, 18, 15, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&men_room_2Vtx_000AA0[54], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsSP2Triangles(3, 8, 4, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 15, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 20, 21, 19, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 28, 0),
    gsSPVertex(&men_room_2Vtx_000AA0[84], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 5, 1, 0),
    gsSP2Triangles(5, 2, 1, 0, 4, 6, 5, 0),
    gsSP2Triangles(7, 8, 9, 0, 8, 10, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 15, 13, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 23, 21, 0, 24, 25, 26, 0),
    gsSP2Triangles(25, 27, 26, 0, 15, 28, 13, 0),
    gsSP1Triangle(28, 29, 13, 0),
    gsSPVertex(&men_room_2Vtx_000AA0[114], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSPEndDisplayList(),
};

Vtx men_room_2Vtx_001680[] = {
#include "assets/scenes/dungeons/men/men_room_2Vtx_001680.vtx.inc"
};

Gfx men_room_2DL_001C30[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_2Vtx_001680[83], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(men_sceneTLUT_00F6C0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_2Vtx_001680, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(13, 16, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(21, 24, 25, 0, 21, 25, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(27, 30, 31, 0, 27, 31, 28, 0),
    gsSPVertex(&men_room_2Vtx_001680[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 16, 19, 20, 0),
    gsSP2Triangles(16, 20, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 22, 25, 26, 0),
    gsSP2Triangles(22, 26, 23, 0, 27, 28, 29, 0),
    gsSP1Triangle(30, 28, 31, 0),
    gsSPVertex(&men_room_2Vtx_001680[64], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 4, 5, 6, 0),
    gsSP2Triangles(4, 6, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 0, 18, 0),
    gsSPEndDisplayList(),
};

Vtx men_room_2Vtx_001DF0[] = {
#include "assets/scenes/dungeons/men/men_room_2Vtx_001DF0.vtx.inc"
};

Gfx men_room_2DL_0026E0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_2Vtx_001DF0[135], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(men_sceneTLUT_00F6C0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_2Vtx_001DF0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 2, 5, 0, 0),
    gsSP2Triangles(4, 6, 2, 0, 6, 7, 2, 0),
    gsSP2Triangles(7, 5, 2, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 9, 0),
    gsSP2Triangles(13, 14, 10, 0, 13, 10, 9, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 17, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 26, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 30, 28, 0),
    gsSPVertex(&men_room_2Vtx_001DF0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 18, 0, 21, 19, 18, 0),
    gsSP2Triangles(20, 22, 21, 0, 20, 23, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(25, 28, 29, 0, 25, 29, 26, 0),
    gsSPVertex(&men_room_2Vtx_001DF0[61], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 1, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 13, 14, 9, 0),
    gsSP2Triangles(14, 10, 9, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 17, 16, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 20, 23, 24, 0),
    gsSP2Triangles(20, 24, 21, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 26, 29, 30, 0),
    gsSP1Triangle(26, 30, 27, 0),
    gsSPVertex(&men_room_2Vtx_001DF0[92], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 4, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 28, 0),
    gsSP2Triangles(30, 31, 28, 0, 31, 26, 28, 0),
    gsSPVertex(&men_room_2Vtx_001DF0[124], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP1Triangle(7, 10, 9, 0),
    gsSPEndDisplayList(),
};

Vtx men_room_2Vtx_002940[] = {
#include "assets/scenes/dungeons/men/men_room_2Vtx_002940.vtx.inc"
};

Gfx men_room_2DL_002C30[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_2Vtx_002940[39], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_sceneTex_0108C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(men_sceneTLUT_00F6C0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_2Vtx_002940, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 5, 2, 6, 0),
    gsSP2Triangles(5, 0, 2, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 8, 11, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 11, 13, 12, 0),
    gsSP2Triangles(11, 0, 13, 0, 11, 1, 0, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 14, 0),
    gsSP2Triangles(16, 18, 17, 0, 18, 9, 17, 0),
    gsSP2Triangles(9, 10, 17, 0, 18, 19, 9, 0),
    gsSP2Triangles(18, 20, 19, 0, 20, 21, 19, 0),
    gsSP2Triangles(20, 22, 21, 0, 20, 23, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 27, 3, 0, 28, 24, 3, 0),
    gsSP2Triangles(4, 28, 3, 0, 7, 29, 28, 0),
    gsSP2Triangles(29, 30, 28, 0, 26, 30, 29, 0),
    gsSP2Triangles(26, 29, 21, 0, 26, 25, 30, 0),
    gsSP2Triangles(29, 19, 21, 0, 28, 4, 7, 0),
    gsSP1Triangle(4, 8, 7, 0),
    gsSPVertex(&men_room_2Vtx_002940[31], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx men_room_2Vtx_002DC0[] = {
#include "assets/scenes/dungeons/men/men_room_2Vtx_002DC0.vtx.inc"
};

Gfx men_room_2DL_002FA0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_2Vtx_002DC0[22], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(men_sceneTLUT_00F6C0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_2Vtx_002DC0, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(13, 18, 15, 0, 18, 16, 15, 0),
    gsSP2Triangles(12, 19, 13, 0, 19, 20, 13, 0),
    gsSP2Triangles(20, 21, 13, 0, 21, 18, 13, 0),
    gsSPEndDisplayList(),
};

Vtx men_room_2Vtx_0030B8[] = {
#include "assets/scenes/dungeons/men/men_room_2Vtx_0030B8.vtx.inc"
};

Gfx men_room_2DL_003928[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_2Vtx_0030B8[127], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_room_2Tex_003C48, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(men_sceneTLUT_00F6C0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_2Vtx_0030B8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(10, 6, 11, 0, 10, 12, 6, 0),
    gsSP2Triangles(10, 13, 12, 0, 12, 7, 6, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(15, 17, 7, 0, 15, 7, 16, 0),
    gsSP2Triangles(14, 18, 19, 0, 14, 19, 20, 0),
    gsSP2Triangles(19, 21, 20, 0, 21, 17, 20, 0),
    gsSP2Triangles(19, 22, 21, 0, 18, 23, 24, 0),
    gsSP2Triangles(18, 24, 19, 0, 24, 25, 22, 0),
    gsSP2Triangles(24, 22, 19, 0, 26, 27, 28, 0),
    gsSP2Triangles(27, 29, 28, 0, 29, 30, 28, 0),
    gsSP1Triangle(30, 31, 28, 0),
    gsSPVertex(&men_room_2Vtx_0030B8[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 0, 7, 0, 6, 7, 8, 0),
    gsSP2Triangles(7, 9, 8, 0, 9, 10, 8, 0),
    gsSP2Triangles(7, 5, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 5, 0, 12, 14, 10, 0),
    gsSP2Triangles(12, 10, 13, 0, 14, 12, 15, 0),
    gsSP2Triangles(12, 16, 15, 0, 12, 11, 16, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 15, 0),
    gsSP2Triangles(19, 14, 15, 0, 15, 18, 20, 0),
    gsSP2Triangles(11, 21, 22, 0, 11, 22, 16, 0),
    gsSP2Triangles(22, 23, 17, 0, 22, 17, 16, 0),
    gsSP2Triangles(21, 24, 22, 0, 24, 25, 22, 0),
    gsSP2Triangles(24, 26, 25, 0, 25, 23, 22, 0),
    gsSP2Triangles(27, 28, 25, 0, 27, 25, 26, 0),
    gsSP2Triangles(28, 29, 23, 0, 28, 23, 25, 0),
    gsSP1Triangle(27, 30, 31, 0),
    gsSPVertex(&men_room_2Vtx_0030B8[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 2, 7, 0, 6, 8, 2, 0),
    gsSP2Triangles(2, 4, 9, 0, 2, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(12, 9, 14, 0, 12, 14, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 18, 17, 0),
    gsSP2Triangles(16, 10, 18, 0, 18, 14, 19, 0),
    gsSP2Triangles(18, 19, 17, 0, 20, 15, 21, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 19, 23, 0),
    gsSP2Triangles(21, 23, 22, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 27, 25, 0, 25, 28, 26, 0),
    gsSP2Triangles(27, 29, 25, 0, 29, 30, 25, 0),
    gsSP2Triangles(29, 20, 30, 0, 30, 23, 28, 0),
    gsSP2Triangles(30, 28, 25, 0, 20, 29, 31, 0),
    gsSPVertex(&men_room_2Vtx_0030B8[96], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 1, 0, 6, 1, 7, 0),
    gsSP2Triangles(1, 5, 7, 0, 6, 2, 1, 0),
    gsSP2Triangles(8, 7, 5, 0, 8, 9, 7, 0),
    gsSP2Triangles(9, 10, 7, 0, 10, 11, 7, 0),
    gsSP2Triangles(9, 12, 10, 0, 13, 9, 8, 0),
    gsSP2Triangles(13, 14, 9, 0, 14, 15, 9, 0),
    gsSP2Triangles(15, 12, 9, 0, 16, 17, 18, 0),
    gsSP2Triangles(7, 19, 6, 0, 19, 20, 6, 0),
    gsSP2Triangles(21, 17, 22, 0, 23, 24, 22, 0),
    gsSP2Triangles(23, 22, 25, 0, 24, 26, 21, 0),
    gsSP2Triangles(24, 21, 22, 0, 16, 6, 17, 0),
    gsSP2Triangles(6, 25, 17, 0, 25, 22, 17, 0),
    gsSP2Triangles(27, 28, 29, 0, 28, 30, 29, 0),
    gsSPEndDisplayList(),
};

u8 men_room_2_unaccounted_003C00[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x05, 0x80, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x09, 0x40, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x13, 0x00, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1C, 0x30, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x26, 0xE0, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x2C, 0x30, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x2F, 0xA0, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x39, 0x28, 
    0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 men_room_2Tex_003C48[] = {
#include "assets/scenes/dungeons/men/men_room_2Tex_003C48.ci8.inc.c"
};

u64 men_room_2Tex_004448[] = {
#include "assets/scenes/dungeons/men/men_room_2Tex_004448.ci8.inc.c"
};

u64 men_room_2Tex_004C48[] = {
#include "assets/scenes/dungeons/men/men_room_2Tex_004C48.ci8.inc.c"
};

