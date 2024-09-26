#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "hakaana_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "hakaana_room_0.h"

SceneCmd hakaana_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(3, 19, 24),
    SCENE_CMD_ROOM_LIST(1, hakaana_sceneRoomList0x000068),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00000002),
    SCENE_CMD_COL_HEADER(&hakaana_sceneCollisionHeader_000A60),
    SCENE_CMD_ENTRANCE_LIST(hakaana_sceneEntranceList0x000070),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_OVERWORLD, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SPAWN_LIST(1, hakaana_sceneStartPositionList0x000058),
    SCENE_CMD_SKYBOX_SETTINGS(0, 0, true),
    SCENE_CMD_EXIT_LIST(hakaana_sceneExitList_000074),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, hakaana_sceneLightSettings0x000078),
    SCENE_CMD_END(),
};

ActorEntry hakaana_sceneStartPositionList0x000058[] = {
    { ACTOR_PLAYER,     {      0,     32,    277 }, {      0, 0X8000,      0 }, 0x0DFF },
};

RomFile hakaana_sceneRoomList0x000068[] = {
    { (uintptr_t)_hakaana_room_0SegmentRomStart, (uintptr_t)_hakaana_room_0SegmentRomEnd },
};

Spawn hakaana_sceneEntranceList0x000070[] = {
    { 0x00, 0x00 },
    { 0x00, 0x00 },
};

u16 hakaana_sceneExitList_000074[] = {
    ENTR_GRAVEYARD_5,
    ENTR_DEKU_TREE_0,
};

EnvLightSettings hakaana_sceneLightSettings0x000078[] = {
    { 0x28, 0x3C, 0x5A, 0x00, 0x52, 0x60, 0x6E, 0x6E, 0xFA, 0x00, 0xAE, 0xA0, 0x32, 0x32, 0xC8, 0x00, 0x00, 0x00,
    0x07C0, 0x3200 },
    { 0x69, 0x5A, 0x5A, 0x49, 0x49, 0x49, 0xFF, 0xFF, 0xF0, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x5A, 0x64, 0x64, 0x78,
    0x07E4, 0x3200 },
    { 0x78, 0x5A, 0x00, 0x49, 0x49, 0x49, 0xFA, 0x87, 0x32, 0xB7, 0xB7, 0xB7, 0x1E, 0x1E, 0x3C, 0x1C, 0x14, 0x00,
    0x07E1, 0x3200 },
    { 0x28, 0x28, 0x46, 0x49, 0x49, 0x49, 0x14, 0x14, 0x23, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x64, 0x00, 0x00, 0x1E,
    0x07E0, 0x3200 },
};

BgCamInfo hakaana_sceneCollisionHeader_000A60CamDataList[] = {
    { 0x0000, 0, NULL },
    { 0x0003, 0, NULL },
};

SurfaceType hakaana_sceneCollisionHeader_000A60SurfaceType[] = {
    {0x00000000, 0x000037C2},   {0x00000001, 0x00003002},   {0x00016101, 0x00003002},   {0x00000000, 0x00003002},
};

CollisionPoly hakaana_sceneCollisionHeader_000A60Polygons[] = {
    {0x0000, 0x0032, 0x0033, 0x0034, 0x0000, 0x0000, 0x8001, 0x012C},
    {0x0000, 0x0032, 0x0034, 0x0035, 0x0000, 0x0000, 0x8001, 0x012C},
    {0x0000, 0x0036, 0x0037, 0x0033, 0x8001, 0x0000, 0x0000, 0xFFD8},
    {0x0000, 0x0036, 0x0033, 0x0032, 0x8001, 0x0000, 0x0000, 0xFFD8},
    {0x0000, 0x0038, 0x0039, 0x0037, 0x0000, 0x0000, 0x7FFF, 0xFE84},
    {0x0000, 0x0038, 0x0037, 0x0036, 0x0000, 0x0000, 0x7FFF, 0xFE84},
    {0x0000, 0x0035, 0x0034, 0x0039, 0x7FFF, 0x0000, 0x0000, 0xFFD8},
    {0x0000, 0x0035, 0x0039, 0x0038, 0x7FFF, 0x0000, 0x0000, 0xFFD8},
    {0x0000, 0x003A, 0x003B, 0x003C, 0x0000, 0x7FFF, 0x0000, 0x0014},
    {0x0000, 0x003A, 0x003C, 0x003D, 0x0000, 0x7FFF, 0x0000, 0x0014},
    {0x0000, 0x003E, 0x003F, 0x0040, 0x0000, 0x7FFF, 0x0000, 0x0021},
    {0x0000, 0x003E, 0x0040, 0x0041, 0x0000, 0x7FFF, 0x0000, 0x0021},
    {0x0000, 0x0042, 0x0040, 0x003F, 0x0000, 0x0000, 0x7FFF, 0x00B4},
    {0x0000, 0x0042, 0x003F, 0x0043, 0x0000, 0x0000, 0x7FFF, 0x00B4},
    {0x0000, 0x0041, 0x0044, 0x0045, 0x0000, 0x0000, 0x7FFF, 0x00C8},
    {0x0000, 0x0041, 0x0045, 0x003E, 0x0000, 0x0000, 0x7FFF, 0x00C8},
    {0x0000, 0x0046, 0x0045, 0x0044, 0x0000, 0x7FFF, 0x0000, 0x001B},
    {0x0000, 0x0046, 0x0044, 0x0047, 0x0000, 0x7FFF, 0x0000, 0x001B},
    {0x0000, 0x0048, 0x003D, 0x003C, 0x0000, 0x7FFF, 0x0000, 0x0014},
    {0x0000, 0x0048, 0x003C, 0x0049, 0x0000, 0x7FFF, 0x0000, 0x0014},
    {0x0000, 0x004A, 0x0049, 0x003C, 0x8001, 0x0000, 0x0000, 0x0028},
    {0x0000, 0x004A, 0x003C, 0x004B, 0x8001, 0x0000, 0x0000, 0x0028},
    {0x0000, 0x004C, 0x0048, 0x0049, 0x0000, 0x0000, 0x7FFF, 0x00A4},
    {0x0000, 0x004C, 0x0049, 0x004A, 0x0000, 0x0000, 0x7FFF, 0x00A4},
    {0x0000, 0x004D, 0x003D, 0x0048, 0x7FFF, 0x0000, 0x0000, 0xFFB0},
    {0x0000, 0x004D, 0x0048, 0x004C, 0x7FFF, 0x0000, 0x0000, 0xFFB0},
    {0x0000, 0x004E, 0x003B, 0x003A, 0x0000, 0x7FFF, 0x0000, 0x0014},
    {0x0000, 0x004E, 0x003A, 0x004F, 0x0000, 0x7FFF, 0x0000, 0x0014},
    {0x0000, 0x0050, 0x003B, 0x004E, 0x7FFF, 0x0000, 0x0000, 0x0028},
    {0x0000, 0x0050, 0x004E, 0x0051, 0x7FFF, 0x0000, 0x0000, 0x0028},
    {0x0000, 0x0051, 0x004E, 0x004F, 0x0000, 0x0000, 0x7FFF, 0x00A4},
    {0x0000, 0x0051, 0x004F, 0x0052, 0x0000, 0x0000, 0x7FFF, 0x00A4},
    {0x0000, 0x003A, 0x0053, 0x0052, 0x8001, 0x0000, 0x0000, 0xFFB0},
    {0x0000, 0x003A, 0x0052, 0x004F, 0x8001, 0x0000, 0x0000, 0xFFB0},
    {0x0000, 0x003B, 0x0046, 0x0047, 0x0000, 0x0000, 0x7FFF, 0x00DC},
    {0x0000, 0x003B, 0x0047, 0x003C, 0x0000, 0x0000, 0x7FFF, 0x00DC},
    {0x0001, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x8001, 0xFFC4},
    {0x0001, 0x0000, 0x0002, 0x0003, 0x0000, 0x0000, 0x8001, 0xFFC4},
    {0x0001, 0x0004, 0x0005, 0x0006, 0x0000, 0x0000, 0x8001, 0xFFD8},
    {0x0001, 0x0004, 0x0006, 0x0007, 0x0000, 0x0000, 0x8001, 0xFFD8},
    {0x0001, 0x0008, 0x0009, 0x000A, 0x0000, 0x0000, 0x8001, 0xFFEC},
    {0x0001, 0x0008, 0x000A, 0x000B, 0x0000, 0x0000, 0x8001, 0xFFEC},
    {0x0001, 0x000C, 0x000D, 0x000E, 0x0000, 0x0000, 0x8001, 0x0000},
    {0x0001, 0x000C, 0x000E, 0x000F, 0x0000, 0x0000, 0x8001, 0x0000},
    {0x0001, 0x0010, 0x0011, 0x0012, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0010, 0x0012, 0x0013, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0014, 0x0010, 0x0013, 0x0000, 0x7C2D, 0xE0F5, 0x0013},
    {0x0001, 0x0014, 0x0013, 0x0015, 0x0000, 0x7C2D, 0xE0F5, 0x0013},
    {0x0001, 0x0016, 0x0014, 0x0015, 0x0000, 0x7FFF, 0x0000, 0xFFEC},
    {0x0001, 0x0016, 0x0015, 0x0017, 0x0000, 0x7FFF, 0x0000, 0xFFEC},
    {0x0001, 0x0018, 0x0016, 0x0017, 0x0000, 0x796E, 0xD786, 0x0039},
    {0x0001, 0x0018, 0x0017, 0x0019, 0x0000, 0x796E, 0xD786, 0x0039},
    {0x0001, 0x001A, 0x0018, 0x0019, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x001A, 0x0019, 0x001B, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x0003, 0x001C, 0x001D, 0x0000, 0x7FFF, 0x0000, 0x0028},
    {0x0001, 0x0003, 0x001D, 0x0000, 0x0000, 0x7FFF, 0x0000, 0x0028},
    {0x0001, 0x000F, 0x000A, 0x0009, 0x0000, 0x7FFF, 0x0000, 0x000A},
    {0x0001, 0x000F, 0x0009, 0x000C, 0x0000, 0x7FFF, 0x0000, 0x000A},
    {0x0001, 0x000B, 0x0006, 0x0005, 0x0000, 0x7FFF, 0x0000, 0x0014},
    {0x0001, 0x000B, 0x0005, 0x0008, 0x0000, 0x7FFF, 0x0000, 0x0014},
    {0x0001, 0x0007, 0x0002, 0x0001, 0x0000, 0x7FFF, 0x0000, 0x001E},
    {0x0001, 0x0007, 0x0001, 0x0004, 0x0000, 0x7FFF, 0x0000, 0x001E},
    {0x0002, 0x0033, 0x0037, 0x0039, 0x0000, 0x7FFF, 0x0000, 0xFFCE},
    {0x0002, 0x0033, 0x0039, 0x0034, 0x0000, 0x7FFF, 0x0000, 0xFFCE},
    {0x0003, 0x0054, 0x0055, 0x0056, 0x0000, 0x0000, 0x7FFF, 0x0190},
    {0x0003, 0x0054, 0x0056, 0x0057, 0x0000, 0x0000, 0x7FFF, 0x0190},
    {0x0003, 0x0055, 0x0058, 0x0059, 0x0000, 0x0000, 0x7FFF, 0x0190},
    {0x0003, 0x0055, 0x0059, 0x0056, 0x0000, 0x0000, 0x7FFF, 0x0190},
    {0x0003, 0x005A, 0x005B, 0x0055, 0x57D0, 0xF2EC, 0x5C34, 0x00D5},
    {0x0003, 0x005A, 0x0055, 0x0054, 0x6375, 0xF34E, 0x4F90, 0x00A1},
    {0x0003, 0x005B, 0x005C, 0x0058, 0x5846, 0x0000, 0x5CB0, 0x00C2},
    {0x0003, 0x005B, 0x0058, 0x0055, 0x5846, 0x0000, 0x5CB0, 0x00C2},
    {0x0003, 0x0057, 0x0056, 0x005D, 0xA811, 0xF4C6, 0x5C54, 0x00D3},
    {0x0003, 0x0057, 0x005D, 0x005E, 0x9CB9, 0xF137, 0x4F6C, 0x00A0},
    {0x0003, 0x0056, 0x0059, 0x005F, 0xA7BA, 0x0000, 0x5CB0, 0x00C2},
    {0x0003, 0x0056, 0x005F, 0x005D, 0xA7BA, 0x0000, 0x5CB0, 0x00C2},
    {0x0003, 0x001E, 0x001F, 0x0020, 0x1F0B, 0x83D3, 0x0000, 0x014A},
    {0x0003, 0x001E, 0x0020, 0x0021, 0x49EF, 0x9951, 0x134E, 0x00F3},
    {0x0003, 0x0022, 0x0023, 0x0024, 0xE0F5, 0x83D3, 0x0000, 0x014A},
    {0x0003, 0x0022, 0x0024, 0x0025, 0xB611, 0x9951, 0x134E, 0x00F3},
    {0x0003, 0x0021, 0x0025, 0x0024, 0x0000, 0x885A, 0x2D77, 0x00CA},
    {0x0003, 0x0021, 0x0024, 0x001E, 0x0000, 0x885A, 0x2D77, 0x00CA},
    {0x0003, 0x001F, 0x0023, 0x0022, 0x0000, 0x8D84, 0xC6C2, 0x01D1},
    {0x0003, 0x001F, 0x0022, 0x0020, 0x0000, 0x8D84, 0xC6C2, 0x01D1},
    {0x0003, 0x001C, 0x0026, 0x0027, 0x0000, 0x0000, 0x7FFF, 0x01A4},
    {0x0003, 0x001C, 0x0027, 0x001D, 0x0000, 0x0000, 0x7FFF, 0x01A4},
    {0x0003, 0x0028, 0x0026, 0x001C, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0003, 0x0028, 0x001C, 0x0003, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0003, 0x001D, 0x0027, 0x0029, 0x7FFF, 0x0000, 0x0000, 0x00C8},
    {0x0003, 0x001D, 0x0029, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x00C8},
    {0x0003, 0x001B, 0x0020, 0x0022, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0003, 0x001B, 0x0022, 0x001A, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0003, 0x0029, 0x0027, 0x0026, 0x0000, 0x8001, 0x0000, 0x00C8},
    {0x0003, 0x0029, 0x0026, 0x0028, 0x0000, 0x8001, 0x0000, 0x00C8},
    {0x0003, 0x0021, 0x002A, 0x0000, 0x4CCC, 0x0000, 0x999A, 0x0048},
    {0x0003, 0x0021, 0x0000, 0x0029, 0x4CCC, 0x0000, 0x999A, 0x0048},
    {0x0003, 0x0020, 0x002B, 0x002A, 0x7F5C, 0x0000, 0xF344, 0x0077},
    {0x0003, 0x0020, 0x002A, 0x0021, 0x7F5C, 0x0000, 0xF344, 0x0077},
    {0x0003, 0x0028, 0x0003, 0x002C, 0xB334, 0x0000, 0x999A, 0x0048},
    {0x0003, 0x0028, 0x002C, 0x0025, 0xB334, 0x0000, 0x999A, 0x0048},
    {0x0003, 0x002D, 0x0022, 0x0025, 0x80A4, 0x0000, 0xF344, 0x0077},
    {0x0003, 0x002D, 0x0025, 0x002C, 0x80A4, 0x0000, 0xF344, 0x0077},
    {0x0003, 0x0029, 0x0028, 0x0025, 0x0000, 0x8453, 0x20FB, 0x00D1},
    {0x0003, 0x0029, 0x0025, 0x0021, 0x0000, 0x8453, 0x20FB, 0x00D1},
    {0x0003, 0x001E, 0x002E, 0x002F, 0x7FFF, 0x0000, 0x0000, 0x0028},
    {0x0003, 0x001E, 0x002F, 0x001F, 0x7FFF, 0x0000, 0x0000, 0x0028},
    {0x0003, 0x001F, 0x002F, 0x0030, 0x0000, 0x0000, 0x8001, 0x017C},
    {0x0003, 0x001F, 0x0030, 0x0023, 0x0000, 0x0000, 0x8001, 0x017C},
    {0x0003, 0x0023, 0x0030, 0x0031, 0x8001, 0x0000, 0x0000, 0x0028},
    {0x0003, 0x0023, 0x0031, 0x0024, 0x8001, 0x0000, 0x0000, 0x0028},
    {0x0003, 0x0024, 0x0031, 0x002E, 0x0000, 0x0000, 0x7FFF, 0xFED4},
    {0x0003, 0x0024, 0x002E, 0x001E, 0x0000, 0x0000, 0x7FFF, 0xFED4},
    {0x0003, 0x002E, 0x0031, 0x0030, 0x0000, 0x8001, 0x0000, 0x01C2},
    {0x0003, 0x002E, 0x0030, 0x002F, 0x0000, 0x8001, 0x0000, 0x01C2},
};

Vec3s hakaana_sceneCollisionHeader_000A60Vertices[] = {
    {   -200,    -40,    -60 },
    {   -200,    -30,    -60 },
    {    200,    -30,    -60 },
    {    200,    -40,    -60 },
    {   -200,    -30,    -40 },
    {   -200,    -20,    -40 },
    {    200,    -20,    -40 },
    {    200,    -30,    -40 },
    {   -200,    -20,    -20 },
    {   -200,    -10,    -20 },
    {    200,    -10,    -20 },
    {    200,    -20,    -20 },
    {   -200,    -10,      0 },
    {   -200,      0,      0 },
    {    200,      0,      0 },
    {    200,    -10,      0 },
    {    112,      0,     80 },
    {    120,      0,      0 },
    {   -120,      0,      0 },
    {   -112,      0,     80 },
    {    104,     20,    160 },
    {   -104,     20,    160 },
    {     96,     20,    240 },
    {    -96,     20,    240 },
    {     90,     40,    300 },
    {    -90,     40,    300 },
    {     80,     40,    400 },
    {    -80,     40,    400 },
    {    200,    -40,   -420 },
    {   -200,    -40,   -420 },
    {    -40,    330,    300 },
    {    -40,    330,    380 },
    {    -80,    320,    400 },
    {   -120,    216,      0 },
    {     80,    320,    400 },
    {     40,    330,    380 },
    {     40,    330,    300 },
    {    120,    216,      0 },
    {    200,    200,   -420 },
    {   -200,    200,   -420 },
    {    200,    200,    -60 },
    {   -200,    200,    -60 },
    {   -120,    -40,      0 },
    {    -80,    -40,    400 },
    {    120,    -40,      0 },
    {     80,    -40,    400 },
    {    -40,    450,    300 },
    {    -40,    450,    380 },
    {     40,    450,    380 },
    {     40,    450,    300 },
    {    -40,     40,    300 },
    {    -40,     50,    300 },
    {     40,     50,    300 },
    {     40,     40,    300 },
    {    -40,     40,    380 },
    {    -40,     50,    380 },
    {     40,     40,    380 },
    {     40,     50,    380 },
    {    -80,    -20,   -400 },
    {    -40,    -20,   -220 },
    {     40,    -20,   -220 },
    {     80,    -20,   -400 },
    {    -40,    -33,   -200 },
    {    -40,    -33,   -180 },
    {     40,    -33,   -180 },
    {     40,    -33,   -200 },
    {     40,    -40,   -180 },
    {    -40,    -40,   -180 },
    {     40,    -27,   -200 },
    {    -40,    -27,   -200 },
    {    -40,    -27,   -220 },
    {     40,    -27,   -220 },
    {     80,    -20,   -164 },
    {     40,    -20,   -164 },
    {     40,    -40,   -164 },
    {     40,    -40,   -220 },
    {     80,    -40,   -164 },
    {     80,    -40,   -400 },
    {    -40,    -20,   -164 },
    {    -80,    -20,   -164 },
    {    -40,    -40,   -220 },
    {    -40,    -40,   -164 },
    {    -80,    -40,   -164 },
    {    -80,    -40,   -400 },
    {    108,    -40,   -400 },
    {    138,    195,   -400 },
    {   -138,    195,   -400 },
    {   -108,    -40,   -400 },
    {    138,    228,   -400 },
    {   -138,    228,   -400 },
    {    124,    -40,   -420 },
    {    159,    195,   -420 },
    {    159,    228,   -420 },
    {   -159,    195,   -420 },
    {   -124,    -40,   -420 },
    {   -159,    228,   -420 },
};

CollisionHeader hakaana_sceneCollisionHeader_000A60 = { 
    { -200, -48, -420 },
    { 200, 450, 400 },
    ARRAY_COUNT(hakaana_sceneCollisionHeader_000A60Vertices), hakaana_sceneCollisionHeader_000A60Vertices,
    ARRAY_COUNT(hakaana_sceneCollisionHeader_000A60Polygons), hakaana_sceneCollisionHeader_000A60Polygons,
    hakaana_sceneCollisionHeader_000A60SurfaceType,
    hakaana_sceneCollisionHeader_000A60CamDataList,
    0, NULL
};

