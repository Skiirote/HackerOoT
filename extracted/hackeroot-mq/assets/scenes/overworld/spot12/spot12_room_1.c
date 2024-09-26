#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "spot12_room_1.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "spot12_scene.h"
#include "spot12_room_0.h"

SceneCmd spot12_room_1Commands[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(spot12_room_1AlternateHeaders0x000048),
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x02, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot12_room_1RoomShapeCullable_000150),
    SCENE_CMD_OBJECT_LIST(8, spot12_room_1ObjectList_000060),
    SCENE_CMD_ACTOR_LIST(14, spot12_room_1ActorEntry_000070),
    SCENE_CMD_END(),
};

SceneCmd* spot12_room_1AlternateHeaders0x000048[] = {
    NULL,
    spot12_room_1Set_000200,
    spot12_room_1Set_0003B0,
    spot12_room_1Set_000500,
    spot12_room_1Set_000720,
    spot12_room_1Set_0007F0,
};

s16 spot12_room_1ObjectList_000060[] = {
    OBJECT_SPOT12_OBJ,
    OBJECT_BOX,
    OBJECT_HATA,
    OBJECT_HORSE,
    OBJECT_HNI,
    OBJECT_KIBAKO2,
    OBJECT_GLA,
    OBJECT_GE1,
};

ActorEntry spot12_room_1ActorEntry_000070[] = {
    { ACTOR_OBJ_KIBAKO2, {   3303,   1441,  -5018 }, {      0, 0XFDDE,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3330,   1441,    406 }, {      0,  0XB61,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3406,   1441,    414 }, {      0,  0X9F5,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3443,   1489,  -4876 }, {      0, 0XFF4A,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3446,   1441,  -4875 }, {      0, 0X2666,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3727,   1413,   -243 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3667,   1413,   -243 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   4090,   1413,  -2980 }, {      0, 0XEAAB,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   4090,   1413,  -2740 }, {      0,  0XE39,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   4090,   1413,  -2500 }, {      0, 0X438E,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   4090,   1413,  -2260 }, {      0, 0XE16C,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   4090,   1413,  -2020 }, {      0, 0X13E9,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   4090,   1413,  -1780 }, {      0, 0XEB61,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   4090,   1413,  -1540 }, {      0, 0XDD28,      0 }, 0xFFFF },
};

RoomShapeCullable spot12_room_1RoomShapeCullable_000150 = { 
    2, 10,
    spot12_room_1RoomShapeCullableEntry_00015C,
    spot12_room_1RoomShapeCullableEntry_00015C + ARRAY_COUNTU(spot12_room_1RoomShapeCullableEntry_00015C)
};

RoomShapeCullableEntry spot12_room_1RoomShapeCullableEntry_00015C[10] = {
    { {  -2180,    896,  -1162 },   4792, spot12_room_1DL_0050A0, NULL },
    { {   3369,   1765,  -2072 },   2923, spot12_room_1DL_0026A8, NULL },
    { {   3724,   1474,   -513 },    137, spot12_room_1DL_002DB0, NULL },
    { {   3299,   1953,  -5335 },   2392, spot12_room_1DL_001180, NULL },
    { {   4515,   1640,  -2298 },    292, spot12_room_1DL_0034E8, NULL },
    { {   4499,   1602,  -2815 },    245, spot12_room_1DL_004798, NULL },
    { {   4499,   1602,  -1780 },    245, spot12_room_1DL_003E40, NULL },
    { {   3573,   1413,  -2270 },   1751, NULL, spot12_room_1DL_00AF80 },
    { {   3301,   1941,   1014 },   2452, spot12_room_1DL_001E58, NULL },
    { {   3731,   1443,  -2278 },   1155, spot12_room_1DL_002A60, NULL },
};

s32 spot12_room_1_terminatorMaybe_0001FC = { 0x01000000 };

SceneCmd spot12_room_1Set_000200[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x02, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_WIND_SETTINGS(0, 4, 10, 80),
    SCENE_CMD_ROOM_SHAPE(&spot12_room_1RoomShapeCullable_000150),
    SCENE_CMD_OBJECT_LIST(10, spot12_room_1ObjectList_000248),
    SCENE_CMD_ACTOR_LIST(21, spot12_room_1ActorEntry_00025C),
    SCENE_CMD_END(),
};

s16 spot12_room_1ObjectList_000248[] = {
    OBJECT_GE1,
    OBJECT_KIBAKO2,
    OBJECT_HORSE,
    OBJECT_HNI,
    OBJECT_SPOT12_OBJ,
    OBJECT_BOX,
    OBJECT_HATA,
    OBJECT_GLA,
    OBJECT_KANBAN,
    OBJECT_KA,
};

ActorEntry spot12_room_1ActorEntry_00025C[] = {
    { ACTOR_EN_GE1,           {   3719,   1413,   -507 }, {      0, 0XC000,      0 }, 0x0045 },
    { ACTOR_EN_YABUSAME_MARK, {   3360,   1734,    485 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_YABUSAME_MARK, {   3380,   1734,  -4935 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_YABUSAME_MARK, {   4490,   1670,  -2815 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_YABUSAME_MARK, {   4490,   1670,  -1785 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_YABUSAME_MARK, {   4490,   1720,  -2295 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_EN_HORSE,         {   3705,   1413,   -665 }, {      0, 0XC000,      0 }, 0xFFFF },
    { ACTOR_EN_KANBAN,        {   3635,   1413,   -360 }, {      0, 0XC000,      0 }, 0x031A },
    { ACTOR_OBJ_KIBAKO2,      {   3303,   1441,  -5018 }, { 0XFFFF, 0XFDDE,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,      {   3330,   1441,    406 }, { 0XFFFF,  0XB61,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,      {   3406,   1441,    414 }, { 0XFFFF,  0X9F5,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,      {   3446,   1441,  -4875 }, { 0XFFFF, 0X2666,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,      {   3667,   1413,   -243 }, { 0XFFFF,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,      {   3727,   1413,   -243 }, { 0XFFFF,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,      {   4090,   1413,  -2980 }, { 0XFFFF, 0XEAAB,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,      {   4090,   1413,  -2740 }, { 0XFFFF,  0XE39,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,      {   4090,   1413,  -2500 }, { 0XFFFF, 0X438E,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,      {   4090,   1413,  -2260 }, { 0XFFFF, 0XE16C,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,      {   4090,   1413,  -2020 }, { 0XFFFF, 0X13E9,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,      {   4090,   1413,  -1780 }, { 0XFFFF, 0XEB61,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,      {   4090,   1413,  -1540 }, { 0XFFFF, 0XDD28,      0 }, 0xFFFF },
};

u8 spot12_room_1_possiblePadding_0003AC[] = {
    0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot12_room_1Set_0003B0[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x02, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_WIND_SETTINGS(0, 0, 50, 200),
    SCENE_CMD_ROOM_SHAPE(&spot12_room_1RoomShapeCullable_000150),
    SCENE_CMD_OBJECT_LIST(10, spot12_room_1ObjectList_0003F8),
    SCENE_CMD_ACTOR_LIST(15, spot12_room_1ActorEntry_00040C),
    SCENE_CMD_END(),
};

s16 spot12_room_1ObjectList_0003F8[] = {
    OBJECT_GE1,
    OBJECT_KIBAKO2,
    OBJECT_HORSE,
    OBJECT_SPOT12_OBJ,
    OBJECT_BOX,
    OBJECT_HATA,
    OBJECT_GLA,
    OBJECT_KANBAN,
    OBJECT_KA,
    OBJECT_ST,
};

ActorEntry spot12_room_1ActorEntry_00040C[] = {
    { ACTOR_EN_KANBAN,   {   3635,   1413,   -360 }, {      0, 0XC000,      0 }, 0x031A },
    { ACTOR_OBJ_KIBAKO2, {   3303,   1441,  -5018 }, { 0XFFFF, 0XFDDE,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3330,   1441,    406 }, { 0XFFFF,  0XB61,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3406,   1441,    414 }, { 0XFFFF,  0X9F5,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3446,   1441,  -4875 }, { 0XFFFF, 0X2666,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3667,   1413,   -243 }, { 0XFFFF,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3727,   1413,   -243 }, { 0XFFFF,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   4090,   1413,  -2980 }, { 0XFFFF, 0XEAAB,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   4090,   1413,  -2740 }, { 0XFFFF,  0XE39,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   4090,   1413,  -2500 }, { 0XFFFF, 0X438E,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   4090,   1413,  -2260 }, { 0XFFFF, 0XE16C,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   4090,   1413,  -2020 }, { 0XFFFF, 0X13E9,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   4090,   1413,  -1780 }, { 0XFFFF, 0XEB61,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   4090,   1413,  -1540 }, { 0XFFFF, 0XDD28,      0 }, 0xFFFF },
    { ACTOR_EN_SW,       {   3377,   1734,  -4935 }, { 0X4000,      0,      0 }, 0xB501 },
};

u8 spot12_room_1_possiblePadding_0004FC[] = {
    0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot12_room_1Set_000500[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x02, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot12_room_1RoomShapeCullable_000150),
    SCENE_CMD_OBJECT_LIST(12, spot12_room_1ObjectList_000540),
    SCENE_CMD_ACTOR_LIST(28, spot12_room_1ActorEntry_000558),
    SCENE_CMD_END(),
};

s16 spot12_room_1ObjectList_000540[] = {
    OBJECT_BOX,
    OBJECT_O_ANIME,
    OBJECT_OE_ANIME,
    OBJECT_HATA,
    OBJECT_HORSE,
    OBJECT_GI_HEARTS,
    OBJECT_HORSE_NORMAL,
    OBJECT_HNI,
    OBJECT_YABUSAME_POINT,
    OBJECT_KIBAKO2,
    OBJECT_GE1,
    OBJECT_TSUBO,
};

ActorEntry spot12_room_1ActorEntry_000558[] = {
    { ACTOR_EN_G_SWITCH,         {   4090,   1450,  -2980 }, {      0,      0,      0 }, 0x2FFF },
    { ACTOR_EN_G_SWITCH,         {   4090,   1450,  -2740 }, {      0,      0,      0 }, 0x2FFF },
    { ACTOR_EN_G_SWITCH,         {   4090,   1450,  -2500 }, {      0,      0,      0 }, 0x2FFF },
    { ACTOR_EN_G_SWITCH,         {   4090,   1450,  -2260 }, {      0,      0,      0 }, 0x2FFF },
    { ACTOR_EN_G_SWITCH,         {   4090,   1450,  -2020 }, {      0,      0,      0 }, 0x2FFF },
    { ACTOR_EN_G_SWITCH,         {   4090,   1450,  -1780 }, {      0,      0,      0 }, 0x2FFF },
    { ACTOR_EN_G_SWITCH,         {   4090,   1450,  -1540 }, {      0,      0,      0 }, 0x2FFF },
    { ACTOR_EN_YABUSAME_MARK,    {   3380,   1734,  -4935 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_YABUSAME_MARK,    {   3360,   1734,    485 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_YABUSAME_MARK,    {   4490,   1670,  -2815 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_YABUSAME_MARK,    {   4490,   1670,  -1785 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_YABUSAME_MARK,    {   4490,   1720,  -2295 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_EN_HORSE_GAME_CHECK, {   3256,   1413,  -2571 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_EN_HORSE,            {   3705,   1413,   -665 }, {      0, 0XC000,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,         {   3303,   1441,  -5018 }, {      0, 0XFDDE,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,         {   3330,   1441,    406 }, { 0XFF4A,  0XB61,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,         {   3406,   1441,    414 }, {      0,  0X9F5,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,         {   3446,   1441,  -4875 }, {      0, 0X2666,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,         {   3727,   1413,   -243 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,         {   3667,   1413,   -243 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,         {   4090,   1413,  -2980 }, {      0, 0XEAAB,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,         {   4090,   1413,  -2740 }, {      0,  0XE39,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,         {   4090,   1413,  -2500 }, {      0, 0X438E,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,         {   4090,   1413,  -2260 }, {      0, 0XE16C,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,         {   4090,   1413,  -2020 }, {      0, 0X13E9,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,         {   4090,   1413,  -1780 }, {      0, 0XEB61,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,         {   4090,   1413,  -1540 }, {      0, 0XDD28,      0 }, 0xFFFF },
    { ACTOR_EN_KANBAN,           {   3635,   1413,   -360 }, {      0, 0XC000,      0 }, 0x031A },
};

u8 spot12_room_1_possiblePadding_000718[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot12_room_1Set_000720[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x02, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot12_room_1RoomShapeCullable_000150),
    SCENE_CMD_OBJECT_LIST(9, spot12_room_1ObjectList_000760),
    SCENE_CMD_ACTOR_LIST(7, spot12_room_1ActorEntry_000774),
    SCENE_CMD_END(),
};

s16 spot12_room_1ObjectList_000760[] = {
    OBJECT_BOX,
    OBJECT_O_ANIME,
    OBJECT_OE_ANIME,
    OBJECT_HATA,
    OBJECT_HORSE,
    OBJECT_GI_HEARTS,
    OBJECT_HORSE_NORMAL,
    OBJECT_HNI,
    OBJECT_YABUSAME_POINT,
};

ActorEntry spot12_room_1ActorEntry_000774[] = {
    { ACTOR_EN_YABUSAME_MARK,    {   3380,   1734,  -4935 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_YABUSAME_MARK,    {   3360,   1734,    485 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_YABUSAME_MARK,    {   4490,   1670,  -2815 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_YABUSAME_MARK,    {   4490,   1670,  -1785 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_YABUSAME_MARK,    {   4490,   1720,  -2295 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_EN_HORSE_GAME_CHECK, {   3256,   1413,  -2571 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_EN_HORSE_NORMAL,     {   3578,   1413,  -2605 }, {      0,      0,      0 }, 0x0001 },
};

u8 spot12_room_1_possiblePadding_0007E4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot12_room_1Set_0007F0[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x02, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot12_room_1RoomShapeCullable_000150),
    SCENE_CMD_OBJECT_LIST(8, spot12_room_1ObjectList_000830),
    SCENE_CMD_ACTOR_LIST(6, spot12_room_1ActorEntry_000840),
    SCENE_CMD_END(),
};

s16 spot12_room_1ObjectList_000830[] = {
    OBJECT_BOX,
    OBJECT_HATA,
    OBJECT_HORSE,
    OBJECT_HORSE_NORMAL,
    OBJECT_NIW,
    OBJECT_UMAJUMP,
    OBJECT_GE1,
    OBJECT_TSUBO,
};

ActorEntry spot12_room_1ActorEntry_000840[] = {
    { ACTOR_OBJ_KIBAKO2, {   3330,   1441,    406 }, { 0XFF4A,  0XB61,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3406,   1441,    414 }, {      0,  0X9F5,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3381,   1489,    403 }, { 0XFF4A,  0XB61,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3446,   1441,  -4875 }, {      0, 0X2666,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3443,   1489,  -4876 }, { 0XFF4A, 0XFF4A,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   3303,   1441,  -5018 }, {      0, 0XFDDE,      0 }, 0xFFFF },
};

Vtx spot12_room_1Vtx_0008A0[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Vtx_0008A0.vtx.inc"
};

Gfx spot12_room_1DL_001180[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot12_room_1Vtx_0008A0[134], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot12_room_1Tex_009E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot12_room_1Vtx_0008A0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 3, 5, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 1, 0, 0),
    gsSPVertex(&spot12_room_1Vtx_0008A0[8], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&spot12_room_1Vtx_0008A0[40], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_008E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&spot12_room_1Vtx_0008A0[48], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 6, 7, 0),
    gsSP2Triangles(5, 8, 0, 0, 0, 9, 10, 0),
    gsSP2Triangles(0, 8, 11, 0, 11, 9, 0, 0),
    gsSP2Triangles(2, 6, 0, 0, 0, 12, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_007638, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&spot12_room_1Vtx_0008A0[61], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_006638, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_0008A0[85], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_sceneTex_00EE78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_0008A0[103], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 1, 5, 3, 0),
    gsSP1Triangle(3, 6, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock_4b(spot12_sceneTex_008E78, G_IM_FMT_CI, 32, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(0, spot12_sceneTLUT_006650),
    gsSPVertex(&spot12_room_1Vtx_0008A0[110], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 0, 3, 0, 5, 4, 3, 0),
    gsSP2Triangles(6, 7, 4, 0, 6, 4, 5, 0),
    gsSP2Triangles(8, 7, 6, 0, 9, 8, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 10, 12, 0),
    gsSP2Triangles(14, 10, 13, 0, 14, 15, 10, 0),
    gsSP2Triangles(16, 13, 17, 0, 13, 12, 17, 0),
    gsSP2Triangles(18, 6, 19, 0, 18, 9, 6, 0),
    gsSP2Triangles(19, 6, 20, 0, 6, 5, 20, 0),
    gsSP2Triangles(20, 3, 21, 0, 20, 5, 3, 0),
    gsSP2Triangles(21, 3, 22, 0, 3, 2, 22, 0),
    gsSP2Triangles(23, 13, 16, 0, 23, 14, 13, 0),
    gsSPEndDisplayList(),
};

Vtx spot12_room_1Vtx_001548[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Vtx_001548.vtx.inc"
};

Gfx spot12_room_1DL_001E58[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot12_room_1Vtx_001548[137], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot12_room_1Tex_009E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot12_room_1Vtx_001548, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 3, 5, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 1, 0, 0),
    gsSPVertex(&spot12_room_1Vtx_001548[8], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&spot12_room_1Vtx_001548[40], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_008E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&spot12_room_1Vtx_001548[48], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 6, 7, 0),
    gsSP2Triangles(5, 8, 0, 0, 0, 9, 10, 0),
    gsSP2Triangles(0, 8, 11, 0, 11, 9, 0, 0),
    gsSP2Triangles(2, 12, 0, 0, 0, 13, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_006638, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&spot12_room_1Vtx_001548[63], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_007638, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_001548[81], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_sceneTex_00EE78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_001548[105], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 0, 0),
    gsSP1Triangle(5, 0, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock_4b(spot12_sceneTex_008E78, G_IM_FMT_CI, 32, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(0, spot12_sceneTLUT_006650),
    gsSPVertex(&spot12_room_1Vtx_001548[112], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 6, 3, 0),
    gsSP2Triangles(8, 7, 3, 0, 9, 7, 8, 0),
    gsSP2Triangles(10, 9, 8, 0, 11, 12, 9, 0),
    gsSP2Triangles(11, 9, 10, 0, 13, 14, 12, 0),
    gsSP2Triangles(13, 12, 11, 0, 2, 1, 15, 0),
    gsSP2Triangles(16, 0, 17, 0, 0, 2, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 11, 20, 0),
    gsSP2Triangles(13, 11, 19, 0, 20, 11, 21, 0),
    gsSP2Triangles(11, 10, 21, 0, 21, 8, 22, 0),
    gsSP2Triangles(21, 10, 8, 0, 22, 8, 23, 0),
    gsSP2Triangles(8, 3, 23, 0, 23, 5, 24, 0),
    gsSP1Triangle(23, 3, 5, 0),
    gsSPEndDisplayList(),
};

Vtx spot12_room_1Vtx_002228[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Vtx_002228.vtx.inc"
};

Gfx spot12_room_1DL_0026A8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot12_room_1Vtx_002228[64], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(spot12_sceneTex_008E78, G_IM_FMT_CI, 32, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(0, spot12_sceneTLUT_006650),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot12_room_1Vtx_002228, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(spot12_sceneTex_00EE78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_002228[3], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock_4b(spot12_sceneTex_008E78, G_IM_FMT_CI, 32, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(0, spot12_sceneTLUT_006650),
    gsSPVertex(&spot12_room_1Vtx_002228[9], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 2, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 0, 2, 0, 9, 10, 6, 0),
    gsSP2Triangles(9, 11, 12, 0, 9, 6, 11, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 13, 20, 0, 13, 15, 20, 0),
    gsSP2Triangles(21, 18, 22, 0, 21, 16, 18, 0),
    gsSP2Triangles(18, 23, 22, 0, 13, 19, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP2Triangles(29, 26, 25, 0, 30, 29, 25, 0),
    gsSPVertex(&spot12_room_1Vtx_002228[40], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 5, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 6, 8, 0),
    gsSP2Triangles(6, 10, 11, 0, 6, 11, 7, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(spot12_sceneTex_00EE78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_002228[55], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 0, 0, 6, 7, 3, 0),
    gsSP2Triangles(6, 3, 8, 0, 3, 0, 2, 0),
    gsSP1Triangle(3, 2, 8, 0),
    gsSPEndDisplayList(),
};

Vtx spot12_room_1Vtx_002960[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Vtx_002960.vtx.inc"
};

Gfx spot12_room_1DL_002A60[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot12_room_1Vtx_002960[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot12_room_1Tex_005638, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot12_room_1Vtx_002960, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx spot12_room_1Vtx_002B20[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Vtx_002B20.vtx.inc"
};

Gfx spot12_room_1DL_002DB0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot12_room_1Vtx_002B20[33], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot12_room_1Tex_009E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot12_room_1Vtx_002B20, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 6, 3, 0),
    gsSP2Triangles(1, 6, 7, 0, 2, 1, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 9, 10, 7, 0),
    gsSP2Triangles(7, 10, 3, 0, 10, 11, 3, 0),
    gsSP2Triangles(3, 11, 12, 0, 13, 9, 8, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 20, 15, 0, 21, 15, 14, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 24, 22, 0),
    gsSP2Triangles(19, 24, 21, 0, 19, 25, 24, 0),
    gsSP2Triangles(26, 25, 19, 0, 23, 22, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot12_room_1Tex_00A638, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 173, 170, 154, 255),
    gsSPVertex(&spot12_room_1Vtx_002B20[28], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(1, 4, 3, 0),
    gsSPEndDisplayList(),
};

Vtx spot12_room_1Vtx_002F38[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Vtx_002F38.vtx.inc"
};

Gfx spot12_room_1DL_0034E8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot12_room_1Vtx_002F38[83], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot12_room_1Tex_007E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot12_room_1Vtx_002F38, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_009E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_002F38[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&spot12_room_1Vtx_002F38[35], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_008E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_002F38[43], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_007E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_002F38[48], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_008E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_002F38[53], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_007E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_002F38[58], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_008E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_002F38[61], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_007E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_002F38[64], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_009E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_002F38[67], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 5, 0, 5, 4, 6, 0),
    gsSP2Triangles(7, 1, 0, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 13, 12, 14, 0),
    gsSP2Triangles(15, 14, 9, 0, 15, 9, 8, 0),
    gsSPEndDisplayList(),
};

Vtx spot12_room_1Vtx_003890[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Vtx_003890.vtx.inc"
};

Gfx spot12_room_1DL_003E40[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot12_room_1Vtx_003890[83], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot12_room_1Tex_009E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot12_room_1Vtx_003890, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 6, 5, 4, 0),
    gsSP2Triangles(2, 1, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 12, 11, 0),
    gsSP2Triangles(9, 14, 15, 0, 10, 9, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_007E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_003890[16], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_009E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_003890[19], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&spot12_room_1Vtx_003890[51], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_008E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_003890[59], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_007E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_003890[64], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_008E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_003890[69], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_007E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_003890[74], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_008E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_003890[77], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_007E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_003890[80], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx spot12_room_1Vtx_0041E8[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Vtx_0041E8.vtx.inc"
};

Gfx spot12_room_1DL_004798[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot12_room_1Vtx_0041E8[83], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot12_room_1Tex_009E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot12_room_1Vtx_0041E8, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 6, 5, 4, 0),
    gsSP2Triangles(2, 1, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 12, 11, 0),
    gsSP2Triangles(9, 14, 15, 0, 10, 9, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_007E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_0041E8[16], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_009E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_0041E8[19], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&spot12_room_1Vtx_0041E8[51], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_008E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_0041E8[59], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_007E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_0041E8[64], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_008E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_0041E8[69], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_007E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_0041E8[74], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_008E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_0041E8[77], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_007E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_0041E8[80], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx spot12_room_1Vtx_004B40[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Vtx_004B40.vtx.inc"
};

Gfx spot12_room_1DL_0050A0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot12_room_1Vtx_004B40[78], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot12_sceneTex_00D678, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock(spot12_sceneTex_008678, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot12_room_1Vtx_004B40, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_sceneTex_00CE78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPVertex(&spot12_room_1Vtx_004B40[4], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock_4b(spot12_sceneTex_008E78, G_IM_FMT_CI, 32, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(0, spot12_sceneTLUT_006650),
    gsSPVertex(&spot12_room_1Vtx_004B40[7], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 2, 3, 0, 5, 1, 6, 0),
    gsSP2Triangles(5, 3, 1, 0, 5, 7, 3, 0),
    gsSP2Triangles(3, 7, 4, 0, 5, 8, 7, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 12, 14, 0, 16, 10, 14, 0),
    gsSP2Triangles(16, 17, 10, 0, 9, 15, 18, 0),
    gsSP2Triangles(15, 14, 18, 0, 14, 10, 18, 0),
    gsSP2Triangles(10, 9, 18, 0, 7, 19, 20, 0),
    gsSP2Triangles(21, 19, 8, 0, 8, 19, 7, 0),
    gsSP2Triangles(22, 23, 11, 0, 9, 11, 23, 0),
    gsSP1Triangle(4, 7, 20, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(spot12_sceneTex_00A678, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 210, 200, 175, 255),
    gsSPVertex(&spot12_room_1Vtx_004B40[31], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_sceneTex_00C678, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetPrimColor(0, 0, 192, 154, 123, 255),
    gsSPVertex(&spot12_room_1Vtx_004B40[35], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_sceneTex_007678, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&spot12_room_1Vtx_004B40[43], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_sceneTex_006678, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_004B40[46], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_sceneTex_007678, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_004B40[50], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_sceneTex_00EE78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&spot12_room_1Vtx_004B40[53], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(0, 8, 1, 0, 8, 3, 1, 0),
    gsSP2Triangles(8, 0, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 8, 10, 0, 12, 5, 4, 0),
    gsSP2Triangles(3, 5, 12, 0, 2, 3, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_sceneTex_00B678, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 192, 154, 123, 255),
    gsSPVertex(&spot12_room_1Vtx_004B40[66], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_sceneTex_00BE78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_004B40[70], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

u8 spot12_room_1_unaccounted_0055E8[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x11, 0x80, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1E, 0x58, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x26, 0xA8, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x2A, 0x60, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x2D, 0xB0, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x34, 0xE8, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x3E, 0x40, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x47, 0x98, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x50, 0xA0, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 spot12_room_1Tex_005638[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Tex_005638.rgba16.inc.c"
};

u64 spot12_room_1Tex_006638[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Tex_006638.rgba16.inc.c"
};

u64 spot12_room_1Tex_007638[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Tex_007638.rgba16.inc.c"
};

u64 spot12_room_1Tex_007E38[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Tex_007E38.rgba16.inc.c"
};

u64 spot12_room_1Tex_008E38[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Tex_008E38.rgba16.inc.c"
};

u64 spot12_room_1Tex_009E38[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Tex_009E38.rgba16.inc.c"
};

u64 spot12_room_1Tex_00A638[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Tex_00A638.i4.inc.c"
};

u8 spot12_room_1_possiblePadding_00AE38[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx spot12_room_1Vtx_00AE40[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Vtx_00AE40.vtx.inc"
};

Gfx spot12_room_1DL_00AF80[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot12_room_1Vtx_00AE40[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot12_room_1Tex_00B8A0, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 215, 185, 125, 252),
    gsSPVertex(spot12_room_1Vtx_00AE40, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot12_room_1Tex_00B0A0, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot12_room_1Vtx_00AE40[4], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

u8 spot12_room_1_unaccounted_00B090[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0xAF, 0x80, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 spot12_room_1Tex_00B0A0[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Tex_00B0A0.i8.inc.c"
};

u64 spot12_room_1Tex_00B8A0[] = {
#include "assets/scenes/overworld/spot12/spot12_room_1Tex_00B8A0.i8.inc.c"
};

