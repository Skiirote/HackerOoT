#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "hut_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "hut_room_0.h"

SceneCmd hut_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(5, 19, 28),
    SCENE_CMD_ROOM_LIST(1, hut_sceneRoomList0x000080),
    SCENE_CMD_TRANSITION_ACTOR_LIST(1, hut_sceneTransitionActorList_000070),
    SCENE_CMD_MISC_SETTINGS(0x30, 0x00000002),
    SCENE_CMD_COL_HEADER(&hut_sceneCollisionHeader_0004DC),
    SCENE_CMD_ENTRANCE_LIST(hut_sceneEntranceList0x000088),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_NONE, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SPAWN_LIST(1, hut_sceneStartPositionList0x000060),
    SCENE_CMD_SKYBOX_SETTINGS(2, 0, true),
    SCENE_CMD_EXIT_LIST(hut_sceneExitList_00008C),
    SCENE_CMD_ENV_LIGHT_SETTINGS(1, hut_sceneLightSettings0x000090),
    SCENE_CMD_END(),
};

ActorEntry hut_sceneStartPositionList0x000060[] = {
    { ACTOR_PLAYER,     {     48,      0,     15 }, {      0, 0XA000,      0 }, 0x0D00 },
};

TransitionActorEntry hut_sceneTransitionActorList_000070[] = {
    { 0, 255, 0, 255, ACTOR_EN_DOOR, 60, 0, 62, 0, 0x01BF },
};

RomFile hut_sceneRoomList0x000080[] = {
    { (uintptr_t)_hut_room_0SegmentRomStart, (uintptr_t)_hut_room_0SegmentRomEnd },
};

Spawn hut_sceneEntranceList0x000088[] = {
    { 0x00, 0x00 },
    { 0x00, 0x00 },
};

u16 hut_sceneExitList_00008C[] = {
    ENTR_GRAVEYARD_2,
    ENTR_DEKU_TREE_0,
};

EnvLightSettings hut_sceneLightSettings0x000090[] = {
    { 0x46, 0x28, 0x28, 0x86, 0x00, 0x21, 0xB4, 0xAA, 0xA0, 0xE8, 0xBC, 0x98, 0x3C, 0x46, 0x50, 0x0A, 0x0A, 0x0A,
    0x07E0, 0x07D0 },
};

u8 hut_scene_possiblePadding_0000A8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vec3s hut_sceneCollisionHeader_0004DCCamPosData[] = {
    {   -156,     56,     16 },
    {    910,  16748,      0 },
    {   5000,     -1,     -1 },
};

BgCamInfo hut_sceneCollisionHeader_0004DCCamDataList[] = {
    { 0x0019, 3, &hut_sceneCollisionHeader_0004DCCamPosData[0] },
    { 0x0000, 0, NULL },
};

SurfaceType hut_sceneCollisionHeader_0004DCSurfaceType[] = {
    {0x00000101, 0x00000800},   {0x00000001, 0x00000800},   {0x00000001, 0x00000FC0},
};

CollisionPoly hut_sceneCollisionHeader_0004DCPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x8001, 0x0000, 0x0000, 0xFFFD},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x8001, 0x0000, 0x0000, 0xFFFD},
    {0x0001, 0x0004, 0x0005, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFFFD},
    {0x0001, 0x0004, 0x0006, 0x0007, 0x7FFF, 0x0000, 0x0000, 0xFFFD},
    {0x0001, 0x0008, 0x0009, 0x000A, 0x0000, 0x0000, 0x7FFF, 0x0035},
    {0x0001, 0x0008, 0x000A, 0x000B, 0x0000, 0x0000, 0x7FFF, 0x0035},
    {0x0001, 0x000C, 0x000D, 0x000A, 0x8001, 0x0000, 0x0000, 0xFFFD},
    {0x0001, 0x000C, 0x000A, 0x0009, 0x8001, 0x0000, 0x0000, 0xFFFD},
    {0x0001, 0x000B, 0x000E, 0x000F, 0x7FFF, 0x0000, 0x0000, 0xFFFD},
    {0x0001, 0x000B, 0x000F, 0x0008, 0x7FFF, 0x0000, 0x0000, 0xFFFD},
    {0x0001, 0x0010, 0x0011, 0x0012, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0010, 0x0012, 0x0013, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0013, 0x0014, 0x0015, 0x0000, 0x0000, 0x7FFF, 0x0038},
    {0x0001, 0x0013, 0x0015, 0x0010, 0x0000, 0x0000, 0x7FFF, 0x0038},
    {0x0001, 0x0016, 0x0014, 0x0013, 0x8001, 0x0000, 0x0000, 0x0074},
    {0x0001, 0x0016, 0x0013, 0x0017, 0x8001, 0x0000, 0x0000, 0x0074},
    {0x0001, 0x0018, 0x0019, 0x001A, 0x0000, 0x0000, 0x7FFF, 0x0000},
    {0x0001, 0x0018, 0x001A, 0x001B, 0x0000, 0x0000, 0x7FFF, 0x0000},
    {0x0001, 0x001B, 0x001C, 0x001D, 0x7FFF, 0x0000, 0x0000, 0x0012},
    {0x0001, 0x001B, 0x001D, 0x0018, 0x7FFF, 0x0000, 0x0000, 0x0012},
    {0x0001, 0x801E, 0x001F, 0x0020, 0x7FFF, 0x0000, 0x0000, 0x0053},
    {0x0001, 0x801E, 0x0020, 0x0021, 0x7FFF, 0x0000, 0x0000, 0x0053},
    {0x0001, 0x8022, 0x0023, 0x0024, 0x407E, 0x0000, 0x9171, 0x0040},
    {0x0001, 0x8022, 0x0024, 0x0025, 0x407E, 0x0000, 0x9171, 0x0040},
    {0x0001, 0x8026, 0x0025, 0x0024, 0x6EC5, 0x0000, 0x4021, 0x0021},
    {0x0001, 0x8026, 0x0024, 0x0027, 0x6EC5, 0x0000, 0x4021, 0x0021},
    {0x0001, 0x0001, 0x0000, 0x0006, 0x0000, 0x0000, 0x8001, 0x0035},
    {0x0001, 0x0001, 0x0006, 0x0005, 0x0000, 0x0000, 0x8001, 0x0035},
    {0x0001, 0x0016, 0x0028, 0x0029, 0x0000, 0x0000, 0x8001, 0x0038},
    {0x0001, 0x0016, 0x0029, 0x002A, 0x0000, 0x0000, 0x8001, 0x0038},
    {0x0001, 0x0029, 0x002B, 0x002C, 0x0000, 0x0000, 0x8001, 0x0038},
    {0x0001, 0x0029, 0x002C, 0x002A, 0x0000, 0x0000, 0x8001, 0x0038},
    {0x0001, 0x0016, 0x0017, 0x002D, 0x0000, 0x0000, 0x8001, 0x0038},
    {0x0001, 0x0016, 0x002D, 0x0028, 0x0000, 0x0000, 0x8001, 0x0038},
    {0x0000, 0x002E, 0x002F, 0x0030, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
    {0x0000, 0x002E, 0x0030, 0x0031, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
    {0x0002, 0x0032, 0x0029, 0x0028, 0x0000, 0x0000, 0x8001, 0x0038},
    {0x0002, 0x0032, 0x0028, 0x0033, 0x0000, 0x0000, 0x8001, 0x0038},
    {0x0002, 0x0032, 0x0029, 0x0034, 0x7FFF, 0x0000, 0x0000, 0xFFE2},
    {0x0002, 0x0032, 0x0034, 0x0035, 0x7FFF, 0x0000, 0x0000, 0xFFE2},
    {0x0002, 0x0036, 0x0037, 0x0028, 0x8001, 0x0000, 0x0000, 0x005A},
    {0x0002, 0x0036, 0x0028, 0x0033, 0x8001, 0x0000, 0x0000, 0x005A},
};

Vec3s hut_sceneCollisionHeader_0004DCVertices[] = {
    {     -3,    120,     53 },
    {     -3,      0,     53 },
    {     -3,      0,     59 },
    {     -3,    120,     59 },
    {      3,      0,     59 },
    {      3,      0,     53 },
    {      3,    120,     53 },
    {      3,    120,     59 },
    {      3,    120,    -53 },
    {     -3,    120,    -53 },
    {     -3,      0,    -53 },
    {      3,      0,    -53 },
    {     -3,    120,    -59 },
    {     -3,      0,    -59 },
    {      3,      0,    -59 },
    {      3,    120,    -59 },
    {   -116,      0,    -56 },
    {   -116,      0,    160 },
    {    116,      0,    160 },
    {    116,      0,    -56 },
    {    116,    120,    -56 },
    {   -116,    120,    -56 },
    {    116,    120,     56 },
    {    116,      0,     56 },
    {    -18,    120,      0 },
    {   -114,    120,      0 },
    {   -114,      0,      0 },
    {    -18,      0,      0 },
    {    -18,      0,    -56 },
    {    -18,    120,    -56 },
    {    -83,      0,     59 },
    {    -83,      0,     -1 },
    {    -83,    120,     -1 },
    {    -83,    120,     59 },
    {    -85,      0,     25 },
    {    -85,    120,     25 },
    {    -61,    120,     39 },
    {    -61,      0,     39 },
    {    -72,      0,     58 },
    {    -72,    120,     58 },
    {     90,    100,     56 },
    {     30,    100,     56 },
    {   -116,    120,     56 },
    {     30,      0,     56 },
    {   -116,      0,     56 },
    {     90,      0,     56 },
    {     90,      1,     62 },
    {     30,      1,     62 },
    {     30,      1,    160 },
    {     90,      1,    160 },
    {     30,      1,     56 },
    {     90,      1,     56 },
    {     30,    100,     80 },
    {     30,      1,     80 },
    {     90,      1,     80 },
    {     90,    100,     80 },
};

CollisionHeader hut_sceneCollisionHeader_0004DC = { 
    { -120, 0, -60 },
    { 120, 140, 182 },
    ARRAY_COUNT(hut_sceneCollisionHeader_0004DCVertices), hut_sceneCollisionHeader_0004DCVertices,
    ARRAY_COUNT(hut_sceneCollisionHeader_0004DCPolygons), hut_sceneCollisionHeader_0004DCPolygons,
    hut_sceneCollisionHeader_0004DCSurfaceType,
    hut_sceneCollisionHeader_0004DCCamDataList,
    0, NULL
};

