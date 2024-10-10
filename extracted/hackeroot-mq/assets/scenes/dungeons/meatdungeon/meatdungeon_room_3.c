#include "meatdungeon_scene.h"


/**
 * Header Child Day (Default)
*/
SceneCmd meatdungeon_room_3_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&meatdungeon_room_3_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(23, 0, 0),
    SCENE_CMD_END(),
};

RoomShapeNormal meatdungeon_room_3_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(meatdungeon_room_3_shapeDListsEntry),
    meatdungeon_room_3_shapeDListsEntry,
    meatdungeon_room_3_shapeDListsEntry + ARRAY_COUNT(meatdungeon_room_3_shapeDListsEntry)
};

RoomShapeDListsEntry meatdungeon_room_3_shapeDListsEntry[1] = {
    { meatdungeon_room_3_shapeHeader_entry_0_opaque, NULL }
};

Gfx meatdungeon_room_3_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-1319, -125, 352}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1319, 98, 352}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1319, 98, -315}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1319, -125, -315}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-631, -125, 352}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-631, 98, 352}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-631, 98, -315}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-631, -125, -315}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_0[124] = {
	{{ {-1167, -81, -99}, 0, {8170, -1339}, {31, 31, 31, 255} }},
	{{ {-1267, -80, -202}, 0, {8328, 1161}, {0, 0, 0, 255} }},
	{{ {-1267, -106, -99}, 0, {9575, -212}, {23, 14, 13, 255} }},
	{{ {-1167, -55, -202}, 0, {6888, 33}, {31, 31, 31, 255} }},
	{{ {-1067, -71, -99}, 0, {6880, -2516}, {30, 30, 30, 255} }},
	{{ {-1067, -45, -202}, 0, {5556, -1200}, {30, 30, 30, 255} }},
	{{ {-967, -56, -202}, 0, {4348, -2543}, {30, 30, 30, 255} }},
	{{ {-967, -82, -99}, 0, {5711, -3822}, {30, 30, 30, 255} }},
	{{ {-867, -73, -202}, 0, {3205, -3910}, {30, 30, 30, 255} }},
	{{ {-867, -99, -99}, 0, {4553, -5183}, {30, 30, 30, 255} }},
	{{ {-767, -80, -202}, 0, {2026, -5190}, {31, 31, 31, 255} }},
	{{ {-767, -106, -99}, 0, {3350, -6469}, {31, 31, 31, 255} }},
	{{ {-667, -85, -202}, 0, {826, -6454}, {0, 0, 0, 255} }},
	{{ {-667, -111, -99}, 0, {2149, -7739}, {16, 17, 20, 255} }},
	{{ {-667, 72, -315}, 0, {-1048, -3786}, {0, 0, 0, 255} }},
	{{ {-1267, 72, -315}, 0, {6485, 4126}, {0, 0, 0, 255} }},
	{{ {-1267, 72, -315}, 0, {6485, 4126}, {0, 0, 0, 255} }},
	{{ {-667, 72, -315}, 0, {-1048, -3786}, {0, 0, 0, 255} }},
	{{ {-667, 72, -315}, 0, {-1048, -3786}, {0, 0, 0, 255} }},
	{{ {-767, -96, 101}, 0, {2116, 4622}, {30, 30, 30, 255} }},
	{{ {-667, -71, 239}, 0, {1628, 7601}, {0, 0, 0, 255} }},
	{{ {-667, -106, 101}, 0, {3391, 5828}, {16, 17, 20, 255} }},
	{{ {-767, -61, 239}, 0, {330, 6398}, {30, 30, 30, 255} }},
	{{ {-867, -63, 239}, 0, {-907, 5128}, {30, 30, 30, 255} }},
	{{ {-868, -97, 101}, 0, {900, 3368}, {30, 30, 30, 255} }},
	{{ {-967, -71, 239}, 0, {-2084, 3826}, {30, 30, 30, 255} }},
	{{ {-967, -106, 101}, 0, {-302, 2087}, {30, 30, 30, 255} }},
	{{ {-1067, -75, 239}, 0, {-3268, 2574}, {30, 30, 30, 255} }},
	{{ {-1067, -110, 101}, 0, {-1519, 827}, {30, 30, 30, 255} }},
	{{ {-1167, -106, 101}, 0, {-2776, -388}, {30, 30, 30, 255} }},
	{{ {-1167, -71, 239}, 0, {-4510, 1386}, {30, 30, 30, 255} }},
	{{ {-1267, -97, 101}, 0, {-4061, -1581}, {23, 14, 13, 255} }},
	{{ {-1267, -97, 101}, 0, {-4061, -1581}, {23, 14, 13, 255} }},
	{{ {-1267, -62, 239}, 0, {-5798, 218}, {0, 0, 0, 255} }},
	{{ {-1167, -71, 239}, 0, {-4510, 1386}, {30, 30, 30, 255} }},
	{{ {-1267, 72, 352}, 0, {-7906, 2122}, {0, 0, 0, 255} }},
	{{ {-1267, 72, 352}, 0, {-7906, 2122}, {0, 0, 0, 255} }},
	{{ {-1067, -75, 239}, 0, {-3268, 2574}, {30, 30, 30, 255} }},
	{{ {-967, -71, 239}, 0, {-2084, 3826}, {30, 30, 30, 255} }},
	{{ {-667, 72, 352}, 0, {-589, 9902}, {0, 0, 0, 255} }},
	{{ {-867, -63, 239}, 0, {-907, 5128}, {30, 30, 30, 255} }},
	{{ {-767, -61, 239}, 0, {330, 6398}, {30, 30, 30, 255} }},
	{{ {-667, 72, 352}, 0, {-589, 9902}, {4, 4, 4, 255} }},
	{{ {-667, -71, 239}, 0, {1628, 7601}, {0, 0, 0, 255} }},
	{{ {-667, 72, 352}, 0, {-589, 9902}, {0, 0, 0, 255} }},
	{{ {-1067, -45, -202}, 0, {5556, -1200}, {30, 30, 30, 255} }},
	{{ {-667, 72, -315}, 0, {-1048, -3786}, {2, 2, 2, 255} }},
	{{ {-1267, 72, -315}, 0, {6485, 4126}, {0, 0, 0, 255} }},
	{{ {-967, -56, -202}, 0, {4348, -2543}, {30, 30, 30, 255} }},
	{{ {-1289, -125, -29}, 0, {1486, 2936}, {29, 17, 16, 255} }},
	{{ {-1319, -125, -29}, 0, {1486, 2697}, {0, 0, 0, 255} }},
	{{ {-1319, -125, 1}, 0, {1007, 2697}, {26, 16, 15, 255} }},
	{{ {-1289, -124, 1}, 0, {1001, 2935}, {26, 16, 15, 255} }},
	{{ {-1319, -125, 31}, 0, {528, 2697}, {0, 0, 0, 255} }},
	{{ {-1289, -124, 31}, 0, {522, 2935}, {23, 14, 13, 255} }},
	{{ {-1268, -124, 34}, 0, {469, 3283}, {23, 14, 13, 255} }},
	{{ {-1267, -125, -33}, 0, {1539, 3285}, {29, 17, 16, 255} }},
	{{ {-1167, -125, -33}, 0, {1539, 4881}, {61, 37, 31, 255} }},
	{{ {-1167, -125, 34}, 0, {475, 4881}, {61, 36, 31, 255} }},
	{{ {-1267, -97, 101}, 0, {-590, 3285}, {23, 14, 13, 255} }},
	{{ {-1167, -106, 101}, 0, {-590, 4881}, {30, 30, 30, 255} }},
	{{ {-1067, -110, 101}, 0, {-590, 6478}, {30, 30, 30, 255} }},
	{{ {-1067, -119, 34}, 0, {475, 6478}, {15, 61, 23, 255} }},
	{{ {-967, -125, 34}, 0, {475, 8075}, {15, 61, 22, 255} }},
	{{ {-967, -106, 101}, 0, {-590, 8075}, {30, 30, 30, 255} }},
	{{ {-967, -125, 34}, 0, {475, 8075}, {15, 61, 22, 255} }},
	{{ {-1067, -110, 101}, 0, {-590, 6478}, {30, 30, 30, 255} }},
	{{ {-867, -120, 34}, 0, {475, 9672}, {42, 50, 61, 255} }},
	{{ {-868, -97, 101}, 0, {-590, 9672}, {30, 30, 30, 255} }},
	{{ {-767, -96, 101}, 0, {-590, 11269}, {30, 30, 30, 255} }},
	{{ {-767, -125, 34}, 0, {475, 11269}, {42, 50, 61, 255} }},
	{{ {-667, -106, 101}, 0, {-590, 12866}, {16, 17, 20, 255} }},
	{{ {-667, -120, 34}, 0, {475, 12866}, {16, 17, 20, 255} }},
	{{ {-667, -120, -33}, 0, {1539, 12866}, {16, 17, 20, 255} }},
	{{ {-631, -120, 31}, 0, {528, 13453}, {0, 0, 0, 255} }},
	{{ {-631, -120, -29}, 0, {1486, 13453}, {0, 0, 0, 255} }},
	{{ {-767, -125, -33}, 0, {1539, 11269}, {33, 57, 48, 255} }},
	{{ {-667, -111, -99}, 0, {2604, 12866}, {16, 17, 20, 255} }},
	{{ {-767, -106, -99}, 0, {2604, 11269}, {31, 31, 31, 255} }},
	{{ {-867, -120, -33}, 0, {1539, 9672}, {16, 61, 23, 255} }},
	{{ {-867, -99, -99}, 0, {2604, 9672}, {30, 30, 30, 255} }},
	{{ {-967, -125, -33}, 0, {1539, 8075}, {15, 61, 22, 255} }},
	{{ {-967, -82, -99}, 0, {2604, 8075}, {30, 30, 30, 255} }},
	{{ {-1067, -119, -33}, 0, {1539, 6478}, {56, 47, 30, 255} }},
	{{ {-1067, -71, -99}, 0, {2604, 6478}, {30, 30, 30, 255} }},
	{{ {-1167, -81, -99}, 0, {2604, 4881}, {31, 31, 31, 255} }},
	{{ {-1167, -125, -33}, 0, {1539, 4881}, {61, 37, 31, 255} }},
	{{ {-1267, -106, -99}, 0, {2604, 3285}, {23, 14, 13, 255} }},
	{{ {-1267, -125, -33}, 0, {1539, 3285}, {29, 17, 16, 255} }},
	{{ {-1167, -125, 34}, 0, {475, 4881}, {61, 36, 31, 255} }},
	{{ {-1067, -119, 34}, 0, {475, 6478}, {15, 61, 23, 255} }},
	{{ {-1289, -125, -29}, 0, {1486, 2936}, {29, 17, 16, 255} }},
	{{ {-1289, -124, 1}, 0, {1001, 2935}, {26, 16, 15, 255} }},
	{{ {-949, 78, -29}, 0, {411, 623}, {29, 42, 32, 255} }},
	{{ {-1041, 98, -58}, 0, {851, 1552}, {0, 0, 0, 255} }},
	{{ {-949, 98, -72}, 0, {899, 583}, {0, 0, 0, 255} }},
	{{ {-949, 78, -29}, 0, {411, 623}, {29, 42, 32, 255} }},
	{{ {-1034, 78, -16}, 0, {363, 1517}, {31, 38, 42, 255} }},
	{{ {-1041, 98, -58}, 0, {851, 1552}, {0, 0, 0, 255} }},
	{{ {-949, 98, 13}, 0, {-77, 663}, {0, 0, 0, 255} }},
	{{ {-854, 78, -20}, 0, {242, -361}, {32, 42, 39, 255} }},
	{{ {-846, 98, -62}, 0, {717, -481}, {0, 0, 0, 255} }},
	{{ {-949, 98, -72}, 0, {899, 583}, {0, 0, 0, 255} }},
	{{ {-746, 78, 37}, 0, {-395, -1465}, {0, 0, 0, 255} }},
	{{ {-862, 98, 22}, 0, {-232, -241}, {0, 0, 0, 255} }},
	{{ {-1156, 98, -17}, 0, {558, 2794}, {0, 0, 0, 255} }},
	{{ {-1141, 78, 23}, 0, {81, 2682}, {25, 15, 16, 255} }},
	{{ {-1027, 98, 25}, 0, {-125, 1483}, {2, 2, 2, 255} }},
	{{ {-1127, 98, 63}, 0, {-395, 2570}, {0, 0, 0, 255} }},
	{{ {-1216, 78, 48}, 0, {-86, 3481}, {3, 3, 3, 255} }},
	{{ {-916, 78, 212}, 0, {1611, 623}, {29, 42, 32, 255} }},
	{{ {-916, 98, 255}, 0, {2099, 583}, {0, 0, 0, 255} }},
	{{ {-1008, 98, 241}, 0, {2051, 1552}, {0, 0, 0, 255} }},
	{{ {-813, 98, 245}, 0, {1917, -481}, {0, 0, 0, 255} }},
	{{ {-820, 78, 203}, 0, {1442, -361}, {32, 42, 39, 255} }},
	{{ {-916, 98, 170}, 0, {1123, 663}, {0, 0, 0, 255} }},
	{{ {-1000, 78, 199}, 0, {1563, 1517}, {31, 38, 42, 255} }},
	{{ {-1122, 98, 200}, 0, {1758, 2794}, {0, 0, 0, 255} }},
	{{ {-1108, 78, 160}, 0, {1281, 2682}, {25, 15, 16, 255} }},
	{{ {-1182, 78, 135}, 0, {1114, 3481}, {3, 3, 3, 255} }},
	{{ {-1094, 98, 120}, 0, {805, 2570}, {0, 0, 0, 255} }},
	{{ {-993, 98, 158}, 0, {1075, 1483}, {2, 2, 2, 255} }},
	{{ {-828, 98, 161}, 0, {968, -241}, {0, 0, 0, 255} }},
	{{ {-713, 78, 146}, 0, {805, -1465}, {0, 0, 0, 255} }},
};

Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
	gsSP2Triangles(7, 8, 6, 0, 7, 9, 8, 0),
	gsSP2Triangles(9, 10, 8, 0, 9, 11, 10, 0),
	gsSP2Triangles(11, 12, 10, 0, 11, 13, 12, 0),
	gsSP2Triangles(10, 12, 14, 0, 3, 15, 1, 0),
	gsSP2Triangles(5, 16, 3, 0, 8, 10, 17, 0),
	gsSP2Triangles(6, 8, 18, 0, 19, 20, 21, 0),
	gsSP2Triangles(19, 22, 20, 0, 19, 23, 22, 0),
	gsSP2Triangles(19, 24, 23, 0, 24, 25, 23, 0),
	gsSP2Triangles(24, 26, 25, 0, 26, 27, 25, 0),
	gsSP2Triangles(26, 28, 27, 0, 29, 27, 28, 0),
	gsSP2Triangles(29, 30, 27, 0, 31, 30, 29, 0),
	gsSPVertex(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(2, 4, 5, 0, 6, 5, 4, 0),
	gsSP2Triangles(6, 4, 7, 0, 8, 6, 7, 0),
	gsSP2Triangles(9, 10, 11, 0, 9, 8, 12, 0),
	gsSP2Triangles(13, 14, 15, 0, 13, 16, 14, 0),
	gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
	gsSP2Triangles(20, 19, 21, 0, 20, 21, 22, 0),
	gsSP2Triangles(22, 23, 20, 0, 23, 24, 20, 0),
	gsSP2Triangles(25, 24, 23, 0, 25, 23, 26, 0),
	gsSP2Triangles(23, 27, 26, 0, 27, 28, 26, 0),
	gsSP2Triangles(26, 28, 29, 0, 30, 26, 29, 0),
	gsSP1Triangle(31, 30, 29, 0),
	gsSPVertex(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_0 + 64, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 0, 4, 0, 5, 3, 4, 0),
	gsSP2Triangles(5, 6, 3, 0, 7, 6, 5, 0),
	gsSP2Triangles(7, 8, 6, 0, 9, 6, 8, 0),
	gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
	gsSP2Triangles(9, 12, 6, 0, 13, 12, 9, 0),
	gsSP2Triangles(13, 14, 12, 0, 14, 15, 12, 0),
	gsSP2Triangles(14, 16, 15, 0, 16, 17, 15, 0),
	gsSP2Triangles(16, 18, 17, 0, 18, 19, 17, 0),
	gsSP2Triangles(18, 20, 19, 0, 19, 20, 21, 0),
	gsSP2Triangles(19, 21, 22, 0, 22, 21, 23, 0),
	gsSP2Triangles(22, 23, 24, 0, 19, 22, 25, 0),
	gsSP2Triangles(19, 25, 26, 0, 17, 19, 26, 0),
	gsSP2Triangles(17, 26, 1, 0, 15, 17, 1, 0),
	gsSP2Triangles(15, 1, 3, 0, 12, 15, 3, 0),
	gsSP2Triangles(12, 3, 6, 0, 24, 27, 28, 0),
	gsSP1Triangle(29, 30, 31, 0),
	gsSPVertex(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_0 + 96, 28, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 3, 0, 0, 5, 4, 0, 0),
	gsSP2Triangles(5, 0, 6, 0, 4, 5, 7, 0),
	gsSP2Triangles(7, 8, 4, 0, 4, 8, 3, 0),
	gsSP2Triangles(1, 9, 2, 0, 1, 10, 9, 0),
	gsSP2Triangles(11, 10, 1, 0, 3, 11, 1, 0),
	gsSP2Triangles(11, 12, 10, 0, 13, 10, 12, 0),
	gsSP2Triangles(13, 9, 10, 0, 14, 15, 16, 0),
	gsSP2Triangles(17, 15, 14, 0, 17, 14, 18, 0),
	gsSP2Triangles(18, 14, 19, 0, 19, 14, 20, 0),
	gsSP2Triangles(14, 16, 20, 0, 20, 16, 21, 0),
	gsSP2Triangles(20, 21, 22, 0, 23, 22, 21, 0),
	gsSP2Triangles(23, 24, 22, 0, 25, 22, 24, 0),
	gsSP2Triangles(25, 20, 22, 0, 19, 20, 25, 0),
	gsSP2Triangles(18, 19, 26, 0, 27, 18, 26, 0),
	gsSP1Triangle(18, 27, 17, 0),
	gsSPEndDisplayList(),
};

Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_1[24] = {
	{{ {-1167, 0, -120}, 0, {1008, 1008}, {62, 30, 32, 255} }},
	{{ {-1267, 55, -99}, 0, {-16, -16}, {0, 0, 0, 255} }},
	{{ {-1267, -25, -120}, 0, {-16, 1008}, {23, 14, 13, 255} }},
	{{ {-1167, 81, -99}, 0, {1008, -16}, {0, 0, 0, 255} }},
	{{ {-767, -15, 121}, 0, {1008, 1008}, {41, 47, 62, 255} }},
	{{ {-667, 55, 101}, 0, {-16, -16}, {0, 0, 0, 255} }},
	{{ {-667, -25, 121}, 0, {-16, 1008}, {29, 29, 30, 255} }},
	{{ {-767, 66, 101}, 0, {1008, -16}, {0, 0, 0, 255} }},
	{{ {-967, 55, 101}, 0, {1008, -16}, {0, 0, 0, 255} }},
	{{ {-868, -16, 121}, 0, {-16, 1008}, {41, 47, 62, 255} }},
	{{ {-968, -25, 121}, 0, {1008, 1008}, {45, 62, 44, 255} }},
	{{ {-867, 64, 101}, 0, {-16, -16}, {0, 0, 0, 255} }},
	{{ {-767, 55, -99}, 0, {1008, -16}, {0, 0, 0, 255} }},
	{{ {-867, -18, -120}, 0, {-16, 1008}, {34, 62, 36, 255} }},
	{{ {-767, -25, -120}, 0, {1008, 1008}, {38, 59, 53, 255} }},
	{{ {-867, 63, -99}, 0, {-16, -16}, {0, 0, 0, 255} }},
	{{ {-1167, -25, 121}, 0, {1008, 1008}, {62, 30, 32, 255} }},
	{{ {-1067, 51, 101}, 0, {-16, -16}, {0, 0, 0, 255} }},
	{{ {-1067, -30, 121}, 0, {-16, 1008}, {34, 62, 36, 255} }},
	{{ {-1167, 55, 101}, 0, {1008, -16}, {0, 0, 0, 255} }},
	{{ {-967, 80, -99}, 0, {1008, -16}, {0, 0, 0, 255} }},
	{{ {-1067, 10, -120}, 0, {-16, 1008}, {62, 49, 39, 255} }},
	{{ {-967, -1, -120}, 0, {1008, 1008}, {30, 30, 30, 255} }},
	{{ {-1067, 91, -99}, 0, {-16, -16}, {0, 0, 0, 255} }},
};

Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_1 + 0, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
	gsSPEndDisplayList(),
};

Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_2[24] = {
	{{ {-1067, 10, -120}, 0, {1008, 1008}, {62, 49, 39, 255} }},
	{{ {-1167, 81, -99}, 0, {-16, -16}, {0, 0, 0, 255} }},
	{{ {-1167, 0, -120}, 0, {-16, 1008}, {62, 30, 32, 255} }},
	{{ {-1067, 91, -99}, 0, {1008, -16}, {0, 0, 0, 255} }},
	{{ {-667, 50, -99}, 0, {1008, -16}, {1, 1, 1, 255} }},
	{{ {-767, -25, -120}, 0, {-16, 1008}, {38, 59, 53, 255} }},
	{{ {-667, -31, -120}, 0, {1008, 1008}, {13, 14, 16, 255} }},
	{{ {-767, 55, -99}, 0, {-16, -16}, {0, 0, 0, 255} }},
	{{ {-867, 64, 101}, 0, {1008, -16}, {0, 0, 0, 255} }},
	{{ {-767, -15, 121}, 0, {-16, 1008}, {41, 47, 62, 255} }},
	{{ {-868, -16, 121}, 0, {1008, 1008}, {41, 47, 62, 255} }},
	{{ {-767, 66, 101}, 0, {-16, -16}, {0, 0, 0, 255} }},
	{{ {-867, 63, -99}, 0, {1008, -16}, {0, 0, 0, 255} }},
	{{ {-967, -1, -120}, 0, {-16, 1008}, {30, 30, 30, 255} }},
	{{ {-867, -18, -120}, 0, {1008, 1008}, {34, 62, 36, 255} }},
	{{ {-967, 80, -99}, 0, {-16, -16}, {0, 0, 0, 255} }},
	{{ {-1267, -16, 121}, 0, {1008, 1008}, {23, 14, 13, 255} }},
	{{ {-1167, 55, 101}, 0, {-16, -16}, {0, 0, 0, 255} }},
	{{ {-1167, -25, 121}, 0, {-16, 1008}, {62, 30, 32, 255} }},
	{{ {-1267, 65, 101}, 0, {1008, -16}, {0, 0, 0, 255} }},
	{{ {-1067, 51, 101}, 0, {1008, -16}, {0, 0, 0, 255} }},
	{{ {-968, -25, 121}, 0, {-16, 1008}, {45, 62, 44, 255} }},
	{{ {-1067, -30, 121}, 0, {1008, 1008}, {34, 62, 36, 255} }},
	{{ {-967, 55, 101}, 0, {-16, -16}, {0, 0, 0, 255} }},
};

Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_2[] = {
	gsSPVertex(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_2 + 0, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
	gsSPEndDisplayList(),
};

Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_3[24] = {
	{{ {-1167, -106, 101}, 0, {1008, 1008}, {30, 30, 30, 255} }},
	{{ {-1067, -30, 121}, 0, {-16, -16}, {34, 62, 36, 255} }},
	{{ {-1067, -110, 101}, 0, {-16, 1008}, {30, 30, 30, 255} }},
	{{ {-1167, -25, 121}, 0, {1008, -16}, {62, 30, 32, 255} }},
	{{ {-968, -25, 121}, 0, {1008, -16}, {45, 62, 44, 255} }},
	{{ {-868, -97, 101}, 0, {-16, 1008}, {30, 30, 30, 255} }},
	{{ {-967, -106, 101}, 0, {1008, 1008}, {30, 30, 30, 255} }},
	{{ {-868, -16, 121}, 0, {-16, -16}, {41, 47, 62, 255} }},
	{{ {-767, -96, 101}, 0, {1008, 1008}, {30, 30, 30, 255} }},
	{{ {-667, -25, 121}, 0, {-16, -16}, {29, 29, 30, 255} }},
	{{ {-667, -106, 101}, 0, {-16, 1008}, {16, 17, 20, 255} }},
	{{ {-767, -15, 121}, 0, {1008, -16}, {41, 47, 62, 255} }},
	{{ {-967, -1, -120}, 0, {1008, -16}, {30, 30, 30, 255} }},
	{{ {-1067, -71, -99}, 0, {-16, 1008}, {30, 30, 30, 255} }},
	{{ {-967, -82, -99}, 0, {1008, 1008}, {30, 30, 30, 255} }},
	{{ {-1067, 10, -120}, 0, {-16, -16}, {62, 49, 39, 255} }},
	{{ {-767, -25, -120}, 0, {1008, -16}, {38, 59, 53, 255} }},
	{{ {-867, -99, -99}, 0, {-16, 1008}, {30, 30, 30, 255} }},
	{{ {-767, -106, -99}, 0, {1008, 1008}, {31, 31, 31, 255} }},
	{{ {-867, -18, -120}, 0, {-16, -16}, {34, 62, 36, 255} }},
	{{ {-1167, -81, -99}, 0, {1008, 1008}, {31, 31, 31, 255} }},
	{{ {-1267, -25, -120}, 0, {-16, -16}, {23, 14, 13, 255} }},
	{{ {-1267, -106, -99}, 0, {-16, 1008}, {23, 14, 13, 255} }},
	{{ {-1167, 0, -120}, 0, {1008, -16}, {62, 30, 32, 255} }},
};

Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_3[] = {
	gsSPVertex(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_3 + 0, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
	gsSPEndDisplayList(),
};

Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_4[24] = {
	{{ {-1067, -30, 121}, 0, {1008, -16}, {34, 62, 36, 255} }},
	{{ {-967, -106, 101}, 0, {-16, 1008}, {30, 30, 30, 255} }},
	{{ {-1067, -110, 101}, 0, {1008, 1008}, {30, 30, 30, 255} }},
	{{ {-968, -25, 121}, 0, {-16, -16}, {45, 62, 44, 255} }},
	{{ {-1267, -97, 101}, 0, {1008, 1008}, {23, 14, 13, 255} }},
	{{ {-1167, -25, 121}, 0, {-16, -16}, {62, 30, 32, 255} }},
	{{ {-1167, -106, 101}, 0, {-16, 1008}, {30, 30, 30, 255} }},
	{{ {-1267, -16, 121}, 0, {1008, -16}, {23, 14, 13, 255} }},
	{{ {-868, -16, 121}, 0, {1008, -16}, {41, 47, 62, 255} }},
	{{ {-767, -96, 101}, 0, {-16, 1008}, {30, 30, 30, 255} }},
	{{ {-868, -97, 101}, 0, {1008, 1008}, {30, 30, 30, 255} }},
	{{ {-767, -15, 121}, 0, {-16, -16}, {41, 47, 62, 255} }},
	{{ {-867, -18, -120}, 0, {1008, -16}, {34, 62, 36, 255} }},
	{{ {-967, -82, -99}, 0, {-16, 1008}, {30, 30, 30, 255} }},
	{{ {-867, -99, -99}, 0, {1008, 1008}, {30, 30, 30, 255} }},
	{{ {-967, -1, -120}, 0, {-16, -16}, {30, 30, 30, 255} }},
	{{ {-667, -31, -120}, 0, {1008, -16}, {13, 14, 16, 255} }},
	{{ {-767, -106, -99}, 0, {-16, 1008}, {31, 31, 31, 255} }},
	{{ {-667, -111, -99}, 0, {1008, 1008}, {16, 17, 20, 255} }},
	{{ {-767, -25, -120}, 0, {-16, -16}, {38, 59, 53, 255} }},
	{{ {-1067, -71, -99}, 0, {1008, 1008}, {30, 30, 30, 255} }},
	{{ {-1167, 0, -120}, 0, {-16, -16}, {62, 30, 32, 255} }},
	{{ {-1167, -81, -99}, 0, {-16, 1008}, {31, 31, 31, 255} }},
	{{ {-1067, 10, -120}, 0, {1008, -16}, {62, 49, 39, 255} }},
};

Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_4[] = {
	gsSPVertex(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_4 + 0, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
	gsSPEndDisplayList(),
};

Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_5[94] = {
	{{ {-967, -111, 79}, 0, {1008, -16}, {26, 43, 28, 255} }},
	{{ {-1067, -109, 99}, 0, {-16, 496}, {30, 30, 30, 255} }},
	{{ {-967, -105, 99}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-1067, -111, 79}, 0, {-16, -16}, {26, 43, 28, 255} }},
	{{ {-1167, -111, 79}, 0, {-16, -16}, {43, 32, 31, 255} }},
	{{ {-1067, -109, 99}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-1067, -111, 79}, 0, {1008, -16}, {26, 43, 28, 255} }},
	{{ {-1167, -105, 99}, 0, {-16, 496}, {30, 30, 30, 255} }},
	{{ {-867, -104, 79}, 0, {1008, -16}, {35, 38, 43, 255} }},
	{{ {-967, -105, 99}, 0, {-16, 496}, {30, 30, 30, 255} }},
	{{ {-867, -97, 99}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-967, -111, 79}, 0, {-16, -16}, {26, 43, 28, 255} }},
	{{ {-667, -105, 99}, 0, {1008, 496}, {16, 17, 20, 255} }},
	{{ {-767, -104, 79}, 0, {-16, -16}, {35, 38, 43, 255} }},
	{{ {-767, -95, 99}, 0, {-16, 496}, {30, 30, 30, 255} }},
	{{ {-667, -109, 79}, 0, {1008, -16}, {16, 17, 20, 255} }},
	{{ {-767, -104, 79}, 0, {1008, -16}, {35, 38, 43, 255} }},
	{{ {-867, -97, 99}, 0, {-16, 496}, {30, 30, 30, 255} }},
	{{ {-767, -95, 99}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-867, -104, 79}, 0, {-16, -16}, {35, 38, 43, 255} }},
	{{ {-1167, -105, 99}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-1267, -105, 79}, 0, {-16, -16}, {23, 14, 13, 255} }},
	{{ {-1267, -96, 99}, 0, {-16, 496}, {23, 14, 13, 255} }},
	{{ {-1167, -111, 79}, 0, {1008, -16}, {43, 32, 31, 255} }},
	{{ {-1067, -90, 104}, 0, {1008, -16}, {31, 41, 32, 255} }},
	{{ {-1067, -109, 99}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-967, -86, 104}, 0, {-16, -16}, {35, 41, 34, 255} }},
	{{ {-1267, -96, 99}, 0, {1008, 496}, {23, 14, 13, 255} }},
	{{ {-1167, -86, 104}, 0, {-16, -16}, {41, 30, 31, 255} }},
	{{ {-1167, -105, 99}, 0, {-16, 496}, {30, 30, 30, 255} }},
	{{ {-1267, -77, 104}, 0, {1008, -16}, {27, 26, 26, 255} }},
	{{ {-1067, -90, 104}, 0, {-16, -16}, {31, 41, 32, 255} }},
	{{ {-1167, -105, 99}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-1167, -86, 104}, 0, {1008, -16}, {41, 30, 31, 255} }},
	{{ {-1067, -90, 104}, 0, {-16, -16}, {31, 41, 32, 255} }},
	{{ {-867, -78, 104}, 0, {1008, -16}, {33, 35, 41, 255} }},
	{{ {-767, -95, 99}, 0, {-16, 496}, {30, 30, 30, 255} }},
	{{ {-867, -97, 99}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-767, -76, 104}, 0, {-16, -16}, {33, 35, 41, 255} }},
	{{ {-967, -86, 104}, 0, {1008, -16}, {35, 41, 34, 255} }},
	{{ {-867, -97, 99}, 0, {-16, 496}, {30, 30, 30, 255} }},
	{{ {-967, -105, 99}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-867, -78, 104}, 0, {-16, -16}, {33, 35, 41, 255} }},
	{{ {-767, -95, 99}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-667, -86, 104}, 0, {-16, -16}, {16, 17, 19, 255} }},
	{{ {-667, -105, 99}, 0, {-16, 496}, {16, 17, 20, 255} }},
	{{ {-767, -76, 104}, 0, {1008, -16}, {33, 35, 41, 255} }},
	{{ {-1067, -86, -78}, 0, {-16, -16}, {41, 37, 30, 255} }},
	{{ {-1167, -81, -97}, 0, {1008, 496}, {31, 31, 31, 255} }},
	{{ {-1167, -95, -78}, 0, {1008, -16}, {43, 33, 31, 255} }},
	{{ {-1067, -71, -97}, 0, {-16, 496}, {30, 30, 30, 255} }},
	{{ {-767, -105, -97}, 0, {-16, 496}, {31, 31, 31, 255} }},
	{{ {-867, -104, -78}, 0, {1008, -16}, {26, 43, 28, 255} }},
	{{ {-767, -111, -78}, 0, {-16, -16}, {31, 42, 37, 255} }},
	{{ {-867, -98, -97}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-1167, -95, -78}, 0, {-16, -16}, {43, 33, 31, 255} }},
	{{ {-1267, -105, -97}, 0, {1008, 496}, {23, 14, 13, 255} }},
	{{ {-1267, -111, -78}, 0, {1008, -16}, {27, 22, 22, 255} }},
	{{ {-1167, -81, -97}, 0, {-16, 496}, {31, 31, 31, 255} }},
	{{ {-967, -82, -97}, 0, {-16, 496}, {30, 30, 30, 255} }},
	{{ {-1067, -86, -78}, 0, {1008, -16}, {41, 37, 30, 255} }},
	{{ {-967, -95, -78}, 0, {-16, -16}, {26, 43, 28, 255} }},
	{{ {-1067, -71, -97}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-667, -110, -97}, 0, {-16, 496}, {16, 17, 20, 255} }},
	{{ {-767, -111, -78}, 0, {1008, -16}, {31, 42, 37, 255} }},
	{{ {-667, -112, -78}, 0, {-16, -16}, {16, 17, 20, 255} }},
	{{ {-767, -105, -97}, 0, {1008, 496}, {31, 31, 31, 255} }},
	{{ {-867, -98, -97}, 0, {-16, 496}, {30, 30, 30, 255} }},
	{{ {-967, -95, -78}, 0, {1008, -16}, {26, 43, 28, 255} }},
	{{ {-867, -104, -78}, 0, {-16, -16}, {26, 43, 28, 255} }},
	{{ {-967, -82, -97}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-1167, -81, -97}, 0, {1008, 496}, {31, 31, 31, 255} }},
	{{ {-1267, -86, -102}, 0, {-16, -16}, {24, 17, 16, 255} }},
	{{ {-1267, -105, -97}, 0, {-16, 496}, {23, 14, 13, 255} }},
	{{ {-1167, -62, -102}, 0, {1008, -16}, {41, 31, 32, 255} }},
	{{ {-1067, -71, -97}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-1167, -62, -102}, 0, {-16, -16}, {41, 31, 32, 255} }},
	{{ {-1167, -81, -97}, 0, {-16, 496}, {31, 31, 31, 255} }},
	{{ {-1067, -52, -102}, 0, {1008, -16}, {41, 36, 33, 255} }},
	{{ {-767, -105, -97}, 0, {1008, 496}, {31, 31, 31, 255} }},
	{{ {-867, -68, -105}, 0, {-16, -16}, {32, 45, 33, 255} }},
	{{ {-767, -59, -108}, 0, {1008, -16}, {35, 48, 43, 255} }},
	{{ {-667, -91, -102}, 0, {1008, -16}, {16, 17, 20, 255} }},
	{{ {-767, -105, -97}, 0, {-16, 496}, {31, 31, 31, 255} }},
	{{ {-667, -110, -97}, 0, {1008, 496}, {16, 17, 20, 255} }},
	{{ {-767, -59, -108}, 0, {-16, -16}, {35, 48, 43, 255} }},
	{{ {-867, -68, -105}, 0, {1008, -16}, {32, 45, 33, 255} }},
	{{ {-967, -82, -97}, 0, {-16, 496}, {30, 30, 30, 255} }},
	{{ {-867, -98, -97}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-967, -63, -102}, 0, {-16, -16}, {30, 30, 30, 255} }},
	{{ {-967, -63, -102}, 0, {1008, -16}, {30, 30, 30, 255} }},
	{{ {-1067, -71, -97}, 0, {-16, 496}, {30, 30, 30, 255} }},
	{{ {-967, -82, -97}, 0, {1008, 496}, {30, 30, 30, 255} }},
	{{ {-1067, -52, -102}, 0, {-16, -16}, {41, 36, 33, 255} }},
};

Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_5[] = {
	gsSPVertex(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_5 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
	gsSP2Triangles(24, 9, 25, 0, 24, 26, 9, 0),
	gsSP2Triangles(27, 28, 29, 0, 27, 30, 28, 0),
	gsSP1Triangle(20, 31, 1, 0),
	gsSPVertex(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_5 + 32, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
	gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
	gsSP2Triangles(15, 18, 16, 0, 19, 20, 21, 0),
	gsSP2Triangles(19, 22, 20, 0, 23, 24, 25, 0),
	gsSP2Triangles(23, 26, 24, 0, 27, 28, 29, 0),
	gsSP1Triangle(27, 30, 28, 0),
	gsSPVertex(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_5 + 63, 31, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSP2Triangles(16, 17, 4, 0, 16, 18, 17, 0),
	gsSP2Triangles(19, 20, 21, 0, 19, 22, 20, 0),
	gsSP2Triangles(23, 24, 25, 0, 23, 26, 24, 0),
	gsSP2Triangles(27, 28, 29, 0, 27, 30, 28, 0),
	gsSPEndDisplayList(),
};

Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_6[50] = {
	{{ {-1267, -80, -202}, 0, {3878, 1335}, {0, 0, 0, 255} }},
	{{ {-1267, 72, -315}, 0, {4693, -8}, {0, 0, 0, 255} }},
	{{ {-1267, 72, -99}, 0, {2734, -8}, {0, 0, 0, 255} }},
	{{ {-1267, -17, -99}, 0, {2857, 925}, {23, 14, 13, 255} }},
	{{ {-1267, 72, -33}, 0, {2121, -8}, {0, 0, 0, 255} }},
	{{ {-1267, -6, -45}, 0, {2312, 831}, {33, 20, 19, 255} }},
	{{ {-1267, 72, 34}, 0, {1545, -8}, {0, 0, 0, 255} }},
	{{ {-1267, -6, 46}, 0, {1384, 832}, {31, 19, 18, 255} }},
	{{ {-1267, -13, 101}, 0, {849, 894}, {23, 14, 13, 255} }},
	{{ {-1267, 72, 101}, 0, {948, -8}, {0, 0, 0, 255} }},
	{{ {-1267, -62, 239}, 0, {-470, 1139}, {0, 0, 0, 255} }},
	{{ {-1267, 72, 352}, 0, {-1302, -8}, {0, 0, 0, 255} }},
	{{ {-1267, -97, 101}, 0, {698, 1639}, {23, 14, 13, 255} }},
	{{ {-1268, -124, 34}, 0, {1478, 2025}, {23, 14, 13, 255} }},
	{{ {-1289, -25, 31}, 0, {1573, 1106}, {31, 19, 18, 255} }},
	{{ {-1289, -124, 31}, 0, {1672, 2025}, {23, 14, 13, 255} }},
	{{ {-1319, -25, 31}, 0, {1662, 1104}, {0, 0, 0, 255} }},
	{{ {-1319, -125, 31}, 0, {1761, 2023}, {0, 0, 0, 255} }},
	{{ {-1289, -25, -29}, 0, {2128, 1092}, {33, 20, 19, 255} }},
	{{ {-1319, -25, -29}, 0, {2142, 1225}, {0, 0, 0, 255} }},
	{{ {-1319, -25, 31}, 0, {1586, 1240}, {0, 0, 0, 255} }},
	{{ {-1267, -125, -33}, 0, {2227, 2025}, {29, 17, 16, 255} }},
	{{ {-1289, -125, -29}, 0, {2033, 2025}, {29, 17, 16, 255} }},
	{{ {-1319, -125, -29}, 0, {1901, 2022}, {0, 0, 0, 255} }},
	{{ {-1319, -25, -29}, 0, {1997, 1088}, {0, 0, 0, 255} }},
	{{ {-1267, -106, -99}, 0, {3022, 1712}, {23, 14, 13, 255} }},
	{{ {-667, -71, 239}, 0, {-470, 1139}, {0, 0, 0, 255} }},
	{{ {-667, 72, 352}, 0, {-1302, -8}, {0, 0, 0, 255} }},
	{{ {-667, 72, 101}, 0, {948, -8}, {0, 0, 0, 255} }},
	{{ {-667, -13, 101}, 0, {849, 894}, {16, 17, 20, 255} }},
	{{ {-667, 72, 34}, 0, {1545, -8}, {0, 0, 0, 255} }},
	{{ {-667, -1, 46}, 0, {1384, 832}, {37, 39, 46, 255} }},
	{{ {-667, -1, -45}, 0, {2312, 831}, {37, 39, 46, 255} }},
	{{ {-667, -1, 46}, 0, {1384, 832}, {37, 39, 46, 255} }},
	{{ {-667, 72, 34}, 0, {1545, -8}, {0, 0, 0, 255} }},
	{{ {-667, 72, -33}, 0, {2121, -8}, {0, 0, 0, 255} }},
	{{ {-667, -17, -99}, 0, {2857, 925}, {16, 17, 20, 255} }},
	{{ {-667, 72, -99}, 0, {2734, -8}, {0, 0, 0, 255} }},
	{{ {-667, -85, -202}, 0, {3878, 1335}, {0, 0, 0, 255} }},
	{{ {-667, 72, -315}, 0, {4693, -8}, {0, 0, 0, 255} }},
	{{ {-667, -111, -99}, 0, {3022, 1712}, {16, 17, 20, 255} }},
	{{ {-667, -120, -33}, 0, {2227, 2025}, {16, 17, 20, 255} }},
	{{ {-631, -20, -29}, 0, {2128, 1092}, {0, 0, 0, 255} }},
	{{ {-631, -120, -29}, 0, {2033, 2025}, {0, 0, 0, 255} }},
	{{ {-631, -20, 31}, 0, {1573, 1106}, {0, 0, 0, 255} }},
	{{ {-667, -120, 34}, 0, {1478, 2025}, {16, 17, 20, 255} }},
	{{ {-631, -120, 31}, 0, {1672, 2025}, {0, 0, 0, 255} }},
	{{ {-667, -106, 101}, 0, {698, 1639}, {16, 17, 20, 255} }},
	{{ {-667, -13, 101}, 0, {849, 894}, {16, 17, 20, 255} }},
	{{ {-667, -71, 239}, 0, {-470, 1139}, {0, 0, 0, 255} }},
};

Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_6[] = {
	gsSPVertex(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_6 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
	gsSP2Triangles(8, 7, 6, 0, 8, 6, 9, 0),
	gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
	gsSP2Triangles(8, 10, 12, 0, 12, 7, 8, 0),
	gsSP2Triangles(12, 13, 7, 0, 13, 14, 7, 0),
	gsSP2Triangles(13, 15, 14, 0, 15, 16, 14, 0),
	gsSP2Triangles(15, 17, 16, 0, 7, 14, 18, 0),
	gsSP2Triangles(14, 19, 18, 0, 14, 20, 19, 0),
	gsSP2Triangles(7, 18, 5, 0, 21, 5, 18, 0),
	gsSP2Triangles(21, 18, 22, 0, 18, 23, 22, 0),
	gsSP2Triangles(18, 24, 23, 0, 25, 5, 21, 0),
	gsSP2Triangles(25, 3, 5, 0, 3, 25, 0, 0),
	gsSP2Triangles(26, 27, 28, 0, 29, 26, 28, 0),
	gsSP2Triangles(29, 28, 30, 0, 29, 30, 31, 0),
	gsSPVertex(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_6 + 32, 18, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
	gsSP2Triangles(4, 6, 8, 0, 8, 0, 4, 0),
	gsSP2Triangles(8, 9, 0, 0, 9, 10, 0, 0),
	gsSP2Triangles(9, 11, 10, 0, 10, 1, 0, 0),
	gsSP2Triangles(10, 12, 1, 0, 12, 13, 1, 0),
	gsSP2Triangles(12, 14, 13, 0, 15, 1, 13, 0),
	gsSP2Triangles(15, 16, 1, 0, 16, 15, 17, 0),
	gsSPEndDisplayList(),
};

Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_meatdungeon_room_0_dl_floor_mat_layerOpaque),
	gsSPDisplayList(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_meatdungeon_room_0_dl_Web1_1_1_layerOpaque),
	gsSPDisplayList(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_1),
	gsSPDisplayList(mat_meatdungeon_room_0_dl_Web_1_1_2_layerOpaque),
	gsSPDisplayList(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_2),
	gsSPDisplayList(mat_meatdungeon_room_0_dl_Web_1_2_1_layerOpaque),
	gsSPDisplayList(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_3),
	gsSPDisplayList(mat_meatdungeon_room_0_dl_Web_1_2_2_layerOpaque),
	gsSPDisplayList(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_4),
	gsSPDisplayList(mat_meatdungeon_room_1_dl_MeatTrim1_layerOpaque),
	gsSPDisplayList(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_5),
	gsSPDisplayList(mat_meatdungeon_room_0_dl_Wall_layerOpaque),
	gsSPDisplayList(meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_6),
	gsSPEndDisplayList(),
};

