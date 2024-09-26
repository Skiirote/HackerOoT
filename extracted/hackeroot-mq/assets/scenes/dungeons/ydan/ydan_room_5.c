#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "ydan_room_5.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "ydan_scene.h"
#include "ydan_room_0.h"
#include "ydan_room_1.h"
#include "ydan_room_2.h"
#include "ydan_room_3.h"
#include "ydan_room_4.h"
#include "ydan_room_6.h"
#include "ydan_room_7.h"
#include "ydan_room_8.h"
#include "ydan_room_9.h"
#include "ydan_room_10.h"
#include "ydan_room_11.h"

SceneCmd ydan_room_5Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ydan_room_5RoomShapeCullable_000180),
    SCENE_CMD_OBJECT_LIST(14, ydan_room_5ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(18, ydan_room_5ActorEntry_00005C),
    SCENE_CMD_END(),
};

s16 ydan_room_5ObjectList_000040[] = {
    OBJECT_YDAN_OBJECTS,
    OBJECT_GOL,
    OBJECT_ST,
    OBJECT_DEKUBABA,
    OBJECT_DEKUNUTS,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_KUSA,
    OBJECT_GI_HEART,
    OBJECT_FIREFLY,
    OBJECT_KIBAKO2,
    OBJECT_TIMEBLOCK,
    OBJECT_EFC_TW,
    OBJECT_HAKA,
};

ActorEntry ydan_room_5ActorEntry_00005C[] = {
    { ACTOR_EN_KAREBABA,    {  -1250,   -880,    898 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_ST,          {  -1347,   -806,   1079 }, {      0, 0X4000,      0 }, 0x0000 },
    { ACTOR_EN_KUSA,        {  -1309,   -870,    838 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,        {  -1360,   -870,    838 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,        {   -538,   -880,    907 }, {      0,      0,      0 }, 0xFF02 },
    { ACTOR_EN_KUSA,        {   -495,   -880,    906 }, {      0,      0,      0 }, 0xFF02 },
    { ACTOR_EN_KUSA,        {   -466,   -880,    865 }, {      0,      0,      0 }, 0xFF02 },
    { ACTOR_EN_GOMA,        {   -917,   -542,   1064 }, {      0,      0,      0 }, 0x0009 },
    { ACTOR_OBJ_TIMEBLOCK,  {  -1365,   -880,   1070 }, {      0,      0,      0 }, 0xB9FF },
    { ACTOR_OBJ_SYOKUDAI,   {   -528,   -880,    984 }, {      0,      0,      0 }, 0x03FE },
    { ACTOR_OBJ_SYOKUDAI,   {  -1161,   -880,   1147 }, {      0,      0,      0 }, 0x1089 },
    { ACTOR_OBJ_SYOKUDAI,   {  -1160,   -880,    993 }, {      0,      0,      0 }, 0x1089 },
    { ACTOR_OBJ_SWITCH,     {   -527,   -880,   1114 }, {      0,      0,      0 }, 0x3E20 },
    { ACTOR_EN_BOX,         {  -1376,   -880,   1078 }, {      0, 0XC000,      0 }, 0x5AA0 },
    { ACTOR_EN_BOX,         {   -380,   -880,   1029 }, {      0, 0X4000,      0 }, 0x5905 },
    { ACTOR_BG_YDAN_HASI,   {   -835,   -905,   1050 }, {      0, 0X4000,      0 }, 0xFF00 },
    { ACTOR_BG_YDAN_MARUTA, {   -835,   -860,   1050 }, {      0, 0X4000,      0 }, 0x00FF },
    { ACTOR_BG_YDAN_HASI,   {   -835,   -915,   1050 }, {      0,      0,      0 }, 0xFF01 },
};

u8 ydan_room_5_possiblePadding_00017C[] = {
    0x00, 0x00, 0x00, 0x00, 
};

RoomShapeCullable ydan_room_5RoomShapeCullable_000180 = { 
    2, 2,
    ydan_room_5RoomShapeCullableEntry_00018C,
    ydan_room_5RoomShapeCullableEntry_00018C + ARRAY_COUNTU(ydan_room_5RoomShapeCullableEntry_00018C)
};

RoomShapeCullableEntry ydan_room_5RoomShapeCullableEntry_00018C[2] = {
    { {   -935,   -750,   1050 },    630, ydan_room_5DL_003C98, NULL },
    { {   -935,   -760,   1050 },    628, ydan_room_5DL_0022F0, NULL },
};

s32 ydan_room_5_terminatorMaybe_0001AC = { 0x01000000 };

Vtx ydan_room_5Vtx_0001B0[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_5Vtx_0001B0.vtx.inc"
};

Gfx ydan_room_5DL_0022F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ydan_room_5Vtx_0001B0[524], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ydan_room_5Tex_003F88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(ydan_sceneTLUT_00B810),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(ydan_room_5Vtx_0001B0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 0, 0, 6, 0, 4, 0),
    gsSP2Triangles(7, 8, 1, 0, 9, 10, 7, 0),
    gsSP2Triangles(9, 7, 6, 0, 7, 10, 8, 0),
    gsSP2Triangles(11, 12, 1, 0, 11, 1, 8, 0),
    gsSP2Triangles(7, 1, 0, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 16, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(23, 25, 24, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 29, 0, 28, 27, 30, 0),
    gsSP1Triangle(31, 25, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_006B88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 5, 0, 4, 3, 11, 0),
    gsSP2Triangles(4, 11, 12, 0, 13, 14, 15, 0),
    gsSP1Triangle(13, 15, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_004F88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[48], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 6, 3, 7, 0),
    gsSP2Triangles(8, 6, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 8, 9, 0, 11, 10, 9, 0),
    gsSP2Triangles(12, 11, 9, 0, 1, 13, 14, 0),
    gsSP2Triangles(1, 15, 13, 0, 16, 1, 0, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 19, 18, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 22, 21, 0),
    gsSP2Triangles(25, 26, 27, 0, 26, 28, 29, 0),
    gsSPVertex(&ydan_room_5Vtx_0001B0[78], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 4, 0),
    gsSP2Triangles(7, 4, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 11, 13, 14, 0),
    gsSP2Triangles(11, 15, 13, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 16, 18, 0, 19, 18, 20, 0),
    gsSP2Triangles(8, 19, 20, 0, 8, 20, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_007B88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[99], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_004788, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[103], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 6, 1, 0, 7, 1, 0, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 10, 0, 14, 15, 16, 0),
    gsSP2Triangles(15, 17, 16, 0, 18, 16, 19, 0),
    gsSP2Triangles(10, 20, 21, 0, 10, 21, 8, 0),
    gsSP2Triangles(22, 23, 20, 0, 22, 20, 10, 0),
    gsSP2Triangles(17, 24, 23, 0, 17, 23, 22, 0),
    gsSP2Triangles(12, 10, 11, 0, 14, 16, 18, 0),
    gsSP2Triangles(10, 13, 19, 0, 10, 19, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_005788, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[128], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_004788, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[152], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 4, 2, 0),
    gsSP2Triangles(5, 2, 6, 0, 6, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 7, 6, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_005B88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[162], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP1Triangle(11, 13, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_007388, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[177], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(1, 6, 2, 0, 6, 7, 2, 0),
    gsSP2Triangles(7, 8, 2, 0, 8, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_006F88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[186], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&ydan_room_5Vtx_0001B0[218], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&ydan_room_5Vtx_0001B0[250], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&ydan_room_5Vtx_0001B0[282], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&ydan_room_5Vtx_0001B0[314], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_005B88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[338], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(3, 6, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_004F88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[345], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_006388, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[357], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_004F88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[365], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_006388, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[385], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_004F88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[391], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_006388, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[411], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_004F88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[419], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_005B88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[431], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_005788, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[436], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_007388, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[440], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(0, 4, 6, 0, 0, 2, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_005B88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[448], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_007388, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[453], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 4, 0, 3, 6, 5, 0),
    gsSP2Triangles(1, 0, 3, 0, 7, 8, 3, 0),
    gsSP1Triangle(8, 6, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_004F88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[462], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_006B88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[470], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 11, 12, 7, 0),
    gsSP2Triangles(11, 7, 6, 0, 0, 13, 14, 0),
    gsSP1Triangle(0, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_007388, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[486], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_003F88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[491], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_007388, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[495], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_003F88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[498], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_005B88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[502], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_007788, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[506], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_007388, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[510], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_005B88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[513], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_5Tex_007388, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_5Vtx_0001B0[517], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 0, 0, 3, 5, 4, 0),
    gsSP1Triangle(5, 6, 4, 0),
    gsSPEndDisplayList(),
};

Vtx ydan_room_5Vtx_003228[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_5Vtx_003228.vtx.inc"
};

Gfx ydan_room_5DL_003C98[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ydan_room_5Vtx_003228[159], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ydan_room_5Tex_003F88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(ydan_sceneTLUT_00B810),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(ydan_room_5Vtx_003228, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 7, 0, 0, 7, 8, 0),
    gsSP2Triangles(5, 9, 10, 0, 11, 5, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP2Triangles(14, 16, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 5, 23, 9, 0),
    gsSP2Triangles(15, 24, 12, 0, 25, 26, 27, 0),
    gsSP2Triangles(26, 28, 27, 0, 29, 30, 31, 0),
    gsSPVertex(&ydan_room_5Vtx_003228[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 7, 0, 0, 8, 6, 0),
    gsSP2Triangles(0, 2, 9, 0, 0, 9, 8, 0),
    gsSP2Triangles(2, 10, 9, 0, 2, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 13, 20, 0),
    gsSP2Triangles(21, 20, 13, 0, 22, 23, 18, 0),
    gsSP2Triangles(22, 18, 15, 0, 21, 24, 25, 0),
    gsSP2Triangles(21, 25, 20, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 5, 0, 28, 27, 29, 0),
    gsSP2Triangles(26, 5, 14, 0, 16, 29, 17, 0),
    gsSP2Triangles(29, 30, 17, 0, 29, 27, 30, 0),
    gsSP2Triangles(31, 30, 27, 0, 31, 27, 26, 0),
    gsSP2Triangles(13, 19, 14, 0, 5, 4, 14, 0),
    gsSP2Triangles(4, 12, 14, 0, 14, 31, 26, 0),
    gsSP1Triangle(14, 19, 31, 0),
    gsSPVertex(&ydan_room_5Vtx_003228[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(3, 12, 4, 0, 1, 0, 12, 0),
    gsSP2Triangles(0, 13, 12, 0, 12, 13, 4, 0),
    gsSP2Triangles(13, 11, 14, 0, 7, 6, 14, 0),
    gsSP2Triangles(10, 14, 11, 0, 14, 6, 13, 0),
    gsSP2Triangles(5, 4, 15, 0, 4, 16, 15, 0),
    gsSP2Triangles(4, 17, 16, 0, 9, 11, 18, 0),
    gsSP2Triangles(11, 19, 20, 0, 15, 16, 21, 0),
    gsSP2Triangles(15, 21, 22, 0, 23, 20, 19, 0),
    gsSP2Triangles(23, 19, 24, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 28, 0),
    gsSP2Triangles(30, 31, 26, 0, 31, 27, 26, 0),
    gsSPVertex(&ydan_room_5Vtx_003228[96], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 2, 1, 7, 0),
    gsSP2Triangles(5, 2, 7, 0, 5, 4, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 9, 0),
    gsSP2Triangles(11, 9, 8, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 14, 13, 0, 15, 13, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 27, 26, 28, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 31, 23, 0),
    gsSP1Triangle(30, 23, 22, 0),
    gsSPVertex(&ydan_room_5Vtx_003228[128], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 0, 0, 7, 4, 3, 0),
    gsSP2Triangles(1, 8, 9, 0, 1, 10, 8, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 16, 0, 19, 16, 15, 0),
    gsSP2Triangles(21, 22, 12, 0, 21, 12, 11, 0),
    gsSP2Triangles(12, 23, 13, 0, 24, 11, 14, 0),
    gsSP2Triangles(16, 24, 17, 0, 23, 12, 22, 0),
    gsSP2Triangles(24, 21, 11, 0, 20, 24, 16, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 29, 30, 0),
    gsSPEndDisplayList(),
};

u8 ydan_room_5_unaccounted_003F70[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x22, 0xF0, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x3C, 0x98, 
    0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 ydan_room_5Tex_003F88[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_5Tex_003F88.ci8.inc.c"
};

u64 ydan_room_5Tex_004788[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_5Tex_004788.ci8.inc.c"
};

u64 ydan_room_5Tex_004F88[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_5Tex_004F88.ci8.inc.c"
};

u64 ydan_room_5Tex_005788[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_5Tex_005788.ci8.inc.c"
};

u64 ydan_room_5Tex_005B88[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_5Tex_005B88.ci8.inc.c"
};

u64 ydan_room_5Tex_006388[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_5Tex_006388.ci8.inc.c"
};

u64 ydan_room_5Tex_006B88[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_5Tex_006B88.ci8.inc.c"
};

u64 ydan_room_5Tex_006F88[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_5Tex_006F88.ci8.inc.c"
};

u64 ydan_room_5Tex_007388[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_5Tex_007388.ci8.inc.c"
};

u64 ydan_room_5Tex_007788[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_5Tex_007788.ci8.inc.c"
};

u64 ydan_room_5Tex_007B88[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_5Tex_007B88.ci8.inc.c"
};

