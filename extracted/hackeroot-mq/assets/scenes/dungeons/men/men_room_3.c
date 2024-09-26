#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "men_room_3.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "men_scene.h"
#include "men_room_0.h"
#include "men_room_1.h"
#include "men_room_2.h"
#include "men_room_4.h"
#include "men_room_5.h"
#include "men_room_6.h"
#include "men_room_7.h"
#include "men_room_8.h"
#include "men_room_9.h"
#include "men_room_10.h"

SceneCmd men_room_3Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, true, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&men_room_3RoomShapeCullable_000160),
    SCENE_CMD_OBJECT_LIST(9, men_room_3ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(16, men_room_3ActorEntry_000054),
    SCENE_CMD_END(),
};

s16 men_room_3ObjectList_000040[] = {
    OBJECT_MENKURI_OBJECTS,
    OBJECT_BOX,
    OBJECT_EFC_FLASH,
    OBJECT_TIMEBLOCK,
    OBJECT_EFC_TW,
    OBJECT_SYOKUDAI,
    OBJECT_SK2,
    OBJECT_ST,
    OBJECT_ICE_OBJECTS,
};

ActorEntry men_room_3ActorEntry_000054[] = {
    { ACTOR_BG_MENKURI_NISEKABE, {  -1157,    279,  -2747 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_EN_ICE_HONO,         {  -1694,    180,  -2860 }, {      0, 0X4000,      0 }, 0xFFFF },
    { ACTOR_OBJ_SYOKUDAI,        {  -1694,    119,  -2860 }, {      0,      0,      0 }, 0x03FF },
    { ACTOR_OBJ_TIMEBLOCK,       {  -1207,    159,  -2744 }, {      0, 0X4000,    0X6 }, 0x38FF },
    { ACTOR_EN_TEST,             {  -1396,    159,  -2611 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_EN_TEST,             {  -1505,    159,  -2788 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_EN_ST,               {  -1604,    449,  -2483 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_ST,               {  -1231,    449,  -2737 }, {      0, 0XC000,      0 }, 0x0001 },
    { ACTOR_EN_ST,               {  -1562,    449,  -2735 }, {      0,  0XD83,      0 }, 0x0001 },
    { ACTOR_OBJ_ROOMTIMER,       {  -1533,    279,  -2572 }, {      0,      0,      0 }, 0x0C3C },
    { ACTOR_EN_WONDER_TALK2,     {  -1576,    231,  -2307 }, {      0,      0,    0XB }, 0x4C83 },
    { ACTOR_OBJ_BLOCKSTOP,       {  -1577,    -41,  -3257 }, {      0,      0,      0 }, 0x000B },
    { ACTOR_OBJ_OSHIHIKI,        {  -1577,    -41,  -3257 }, {      0,      0,      0 }, 0x0BC7 },
    { ACTOR_OBJ_OSHIHIKI,        {  -1577,    159,  -3057 }, {      0,      0,      0 }, 0x0BC3 },
    { ACTOR_BG_ICE_SHELTER,      {   -864,    239,  -2745 }, {      0, 0XC000,      0 }, 0x030F },
    { ACTOR_EN_BOX,              {  -1331,    159,  -2858 }, {      0, 0X8000,      0 }, 0x7951 },
};

u8 men_room_3_possiblePadding_000154[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

RoomShapeCullable men_room_3RoomShapeCullable_000160 = { 
    2, 3,
    men_room_3RoomShapeCullableEntry_00016C,
    men_room_3RoomShapeCullableEntry_00016C + ARRAY_COUNTU(men_room_3RoomShapeCullableEntry_00016C)
};

RoomShapeCullableEntry men_room_3RoomShapeCullableEntry_00016C[3] = {
    { {  -1267,    324,  -2562 },    632, men_room_3DL_001740, NULL },
    { {  -1567,    294,  -2627 },    365, men_room_3DL_002768, NULL },
    { {  -1577,    159,  -3212 },    353, men_room_3DL_0031B8, NULL },
};

s32 men_room_3_terminatorMaybe_00019C = { 0x01000000 };

Vtx men_room_3Vtx_0001A0[] = {
#include "assets/scenes/dungeons/men/men_room_3Vtx_0001A0.vtx.inc"
};

Gfx men_room_3DL_001740[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_3Vtx_0001A0[338], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_room_3Tex_004050, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(men_sceneTLUT_00F6C0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_3Vtx_0001A0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[4], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_003850, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[20], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[26], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 1, 0, 6, 3, 1, 0),
    gsSP2Triangles(6, 7, 3, 0, 7, 8, 3, 0),
    gsSP2Triangles(8, 9, 3, 0, 9, 4, 3, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 24, 23, 0),
    gsSP2Triangles(25, 23, 26, 0, 27, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_007450, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[54], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_005050, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[58], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_003850, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[62], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 5, 1, 0),
    gsSP2Triangles(1, 6, 3, 0, 1, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_0108C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[70], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 3, 7, 6, 0),
    gsSP2Triangles(7, 8, 6, 0, 8, 9, 6, 0),
    gsSP2Triangles(9, 10, 6, 0, 9, 11, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[82], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 12, 0),
    gsSP2Triangles(8, 10, 12, 0, 10, 9, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_007450, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[95], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_005050, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[99], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[107], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 4, 2, 0, 1, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_005050, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[112], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[116], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 1, 0, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_007450, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[121], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[129], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_005C50, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[141], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 5, 1, 0),
    gsSP2Triangles(1, 6, 7, 0, 1, 8, 9, 0),
    gsSP1Triangle(1, 5, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(men_room_3Tex_006450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[151], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(men_sceneTLUT_00F6C0),
    gsSPVertex(&men_room_3Vtx_0001A0[171], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 5, 6, 0),
    gsSP2Triangles(4, 6, 1, 0, 5, 7, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 20, 23, 0, 24, 23, 25, 0),
    gsSP2Triangles(19, 18, 26, 0, 19, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_007450, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[199], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_005050, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[203], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[207], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 13, 12, 0),
    gsSP2Triangles(15, 12, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 22, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(30, 26, 29, 0, 30, 29, 31, 0),
    gsSPVertex(&men_room_3Vtx_0001A0[239], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_007450, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[243], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_005050, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[247], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[251], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 4, 6, 0),
    gsSP2Triangles(4, 3, 6, 0, 0, 2, 7, 0),
    gsSP2Triangles(2, 8, 7, 0, 6, 9, 5, 0),
    gsSP1Triangle(9, 10, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_005850, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[262], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 5, 0, 4, 2, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_0108C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[268], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(4, 1, 0, 0, 2, 5, 6, 0),
    gsSP2Triangles(5, 7, 6, 0, 2, 6, 0, 0),
    gsSP1Triangle(6, 3, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_003850, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[276], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
    gsSP2Triangles(2, 6, 5, 0, 2, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_004850, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[284], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[304], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 11, 0, 14, 11, 10, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(3, 2, 22, 0, 3, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 28, 0),
    gsSP2Triangles(25, 28, 26, 0, 27, 29, 28, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_0108C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_0001A0[334], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Vtx men_room_3Vtx_002428[] = {
#include "assets/scenes/dungeons/men/men_room_3Vtx_002428.vtx.inc"
};

Gfx men_room_3DL_002768[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_3Vtx_002428[44], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_room_3Tex_006450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_3Vtx_002428, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&men_room_3Vtx_002428[32], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx men_room_3Vtx_002878[] = {
#include "assets/scenes/dungeons/men/men_room_3Vtx_002878.vtx.inc"
};

Gfx men_room_3DL_0031B8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_3Vtx_002878[140], 8, 0),
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
    gsSPVertex(men_room_3Vtx_002878, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_0108C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_002878[8], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_003850, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_002878[12], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(2, 1, 4, 0, 2, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_002878[18], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 0, 5, 1, 0),
    gsSP1Triangle(5, 6, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_004850, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_002878[25], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_002878[37], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_004850, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_002878[40], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_002878[60], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_004850, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_002878[72], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 4, 7, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 3, 2, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_3Tex_003850, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_002878[94], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 3, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_0108C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_002878[100], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_002878[104], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(3, 2, 10, 0, 3, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_0108C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_002878[116], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_3Vtx_002878[120], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&men_room_3Vtx_002878[132], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_sceneTex_010CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(men_sceneTLUT_00F6C0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPVertex(&men_room_3Vtx_002878[136], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

u8 men_room_3_unaccounted_003830[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x17, 0x40, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x27, 0x68, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x31, 0xB8, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 men_room_3Tex_003850[] = {
#include "assets/scenes/dungeons/men/men_room_3Tex_003850.ci8.inc.c"
};

u64 men_room_3Tex_004050[] = {
#include "assets/scenes/dungeons/men/men_room_3Tex_004050.ci8.inc.c"
};

u64 men_room_3Tex_004850[] = {
#include "assets/scenes/dungeons/men/men_room_3Tex_004850.ci8.inc.c"
};

u64 men_room_3Tex_005050[] = {
#include "assets/scenes/dungeons/men/men_room_3Tex_005050.ci8.inc.c"
};

u64 men_room_3Tex_005850[] = {
#include "assets/scenes/dungeons/men/men_room_3Tex_005850.ci8.inc.c"
};

u64 men_room_3Tex_005C50[] = {
#include "assets/scenes/dungeons/men/men_room_3Tex_005C50.ci8.inc.c"
};

u64 men_room_3Tex_006450[] = {
#include "assets/scenes/dungeons/men/men_room_3Tex_006450.rgba16.inc.c"
};

u64 men_room_3Tex_007450[] = {
#include "assets/scenes/dungeons/men/men_room_3Tex_007450.ci8.inc.c"
};

