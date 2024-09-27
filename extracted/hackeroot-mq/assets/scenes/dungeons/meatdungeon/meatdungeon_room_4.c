#include "meatdungeon_scene.h"


/**
 * Header Child Day (Default)
*/
SceneCmd meatdungeon_room_4_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&meatdungeon_room_4_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_END(),
};

RoomShapeNormal meatdungeon_room_4_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(meatdungeon_room_4_shapeDListsEntry),
    meatdungeon_room_4_shapeDListsEntry,
    meatdungeon_room_4_shapeDListsEntry + ARRAY_COUNT(meatdungeon_room_4_shapeDListsEntry)
};

RoomShapeDListsEntry meatdungeon_room_4_shapeDListsEntry[1] = {
    { meatdungeon_room_4_shapeHeader_entry_0_opaque, NULL }
};

Gfx meatdungeon_room_4_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-1495, -125, 213}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1495, 175, 213}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1495, 175, -212}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1495, -125, -212}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1319, -125, 213}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1319, 175, 213}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1319, 175, -212}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1319, -125, -212}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_0[10] = {
	{{ {-1495, -125, -89}, 0, {-247, 3318}, {113, 87, 117, 255} }},
	{{ {-1349, -125, -212}, 0, {-240, 4407}, {29, 21, 27, 255} }},
	{{ {-1437, -125, -212}, 0, {79, 4022}, {61, 45, 58, 255} }},
	{{ {-1495, -125, 90}, 0, {-1027, 2671}, {113, 87, 117, 255} }},
	{{ {-1349, -125, -29}, 0, {-1019, 3761}, {75, 55, 70, 255} }},
	{{ {-1349, -125, 31}, 0, {-1320, 3512}, {75, 55, 70, 255} }},
	{{ {-1349, -125, 213}, 0, {-2099, 2867}, {17, 13, 16, 255} }},
	{{ {-1437, -125, 213}, 0, {-1780, 2482}, {61, 45, 58, 255} }},
	{{ {-1319, -125, -29}, 0, {-1128, 3893}, {0, 0, 0, 255} }},
	{{ {-1319, -125, 31}, 0, {-1429, 3644}, {0, 0, 0, 255} }},
};

Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_0 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 1, 3, 0, 3, 5, 4, 0),
	gsSP2Triangles(3, 6, 5, 0, 3, 7, 6, 0),
	gsSP2Triangles(5, 8, 4, 0, 5, 9, 8, 0),
	gsSPEndDisplayList(),
};

Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_1[27] = {
	{{ {-1349, -125, -212}, 0, {1475, 2020}, {29, 21, 27, 255} }},
	{{ {-1437, 75, -212}, 0, {1068, 1025}, {61, 45, 58, 255} }},
	{{ {-1437, -125, -212}, 0, {1068, 2020}, {61, 45, 58, 255} }},
	{{ {-1349, 75, -212}, 0, {1475, 1025}, {17, 13, 16, 255} }},
	{{ {-1437, -125, 213}, 0, {3003, 2020}, {61, 45, 58, 255} }},
	{{ {-1349, 75, 213}, 0, {2597, 1025}, {17, 13, 16, 255} }},
	{{ {-1349, -125, 213}, 0, {2597, 2020}, {17, 13, 16, 255} }},
	{{ {-1437, 75, 213}, 0, {3003, 1025}, {61, 45, 58, 255} }},
	{{ {-1349, 75, -212}, 0, {1068, 1420}, {17, 13, 16, 255} }},
	{{ {-1349, 134, 1}, 0, {2036, 888}, {17, 13, 16, 255} }},
	{{ {-1427, 175, -1}, 0, {2029, 603}, {61, 45, 58, 255} }},
	{{ {-1349, 75, 213}, 0, {3003, 1422}, {17, 13, 16, 255} }},
	{{ {-1349, -125, -29}, 0, {1761, 2029}, {75, 55, 70, 255} }},
	{{ {-1319, -125, -29}, 0, {1992, 2029}, {0, 0, 0, 255} }},
	{{ {-1319, -25, -29}, 0, {1992, 1258}, {0, 0, 0, 255} }},
	{{ {-1349, -25, -29}, 0, {1761, 1258}, {75, 55, 70, 255} }},
	{{ {-1349, -125, -212}, 0, {355, 2029}, {29, 21, 27, 255} }},
	{{ {-1349, 75, -212}, 0, {355, 486}, {17, 13, 16, 255} }},
	{{ {-1349, 134, 1}, 0, {1992, 35}, {17, 13, 16, 255} }},
	{{ {-1349, -25, 31}, 0, {2224, 1258}, {75, 55, 70, 255} }},
	{{ {-1319, -25, 31}, 0, {2224, 1489}, {0, 0, 0, 255} }},
	{{ {-1319, -25, -29}, 0, {1761, 1489}, {0, 0, 0, 255} }},
	{{ {-1349, 75, 213}, 0, {3629, 486}, {17, 13, 16, 255} }},
	{{ {-1349, -125, 213}, 0, {3629, 2029}, {17, 13, 16, 255} }},
	{{ {-1349, -125, 31}, 0, {2224, 2029}, {75, 55, 70, 255} }},
	{{ {-1319, -125, 31}, 0, {1992, 2029}, {0, 0, 0, 255} }},
	{{ {-1319, -25, 31}, 0, {1992, 1258}, {0, 0, 0, 255} }},
};

Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_1 + 0, 27, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(1, 8, 9, 0, 1, 9, 10, 0),
	gsSP2Triangles(9, 7, 10, 0, 9, 11, 7, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 12, 15, 0, 16, 15, 17, 0),
	gsSP2Triangles(15, 18, 17, 0, 15, 19, 18, 0),
	gsSP2Triangles(15, 20, 19, 0, 15, 21, 20, 0),
	gsSP2Triangles(18, 19, 22, 0, 19, 23, 22, 0),
	gsSP2Triangles(19, 24, 23, 0, 19, 25, 24, 0),
	gsSP1Triangle(19, 26, 25, 0),
	gsSPEndDisplayList(),
};

Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_meatdungeon_room_0_dl_floor_mat_layerOpaque),
	gsSPDisplayList(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_meatdungeon_room_0_dl_Wall_layerOpaque),
	gsSPDisplayList(meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_1),
	gsSPEndDisplayList(),
};

