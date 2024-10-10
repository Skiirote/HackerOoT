#ifndef MEATDUNGEON_SCENE_H
#define MEATDUNGEON_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd meatdungeon_scene_header00[];
extern RomFile meatdungeon_scene_roomList[];
extern u8 _meatdungeon_room_0SegmentRomStart[];
extern u8 _meatdungeon_room_0SegmentRomEnd[];
extern u8 _meatdungeon_room_1SegmentRomStart[];
extern u8 _meatdungeon_room_1SegmentRomEnd[];
extern u8 _meatdungeon_room_2SegmentRomStart[];
extern u8 _meatdungeon_room_2SegmentRomEnd[];
extern u8 _meatdungeon_room_3SegmentRomStart[];
extern u8 _meatdungeon_room_3SegmentRomEnd[];
extern u8 _meatdungeon_room_4SegmentRomStart[];
extern u8 _meatdungeon_room_4SegmentRomEnd[];
extern u8 _meatdungeon_room_5SegmentRomStart[];
extern u8 _meatdungeon_room_5SegmentRomEnd[];
extern ActorEntry meatdungeon_scene_header00_playerEntryList[];
extern Spawn meatdungeon_scene_header00_entranceList[];
extern TransitionActorEntry meatdungeon_scene_header00_transitionActors[];
extern EnvLightSettings meatdungeon_scene_header00_lightSettings[1];
extern CollisionHeader meatdungeon_scene_collisionHeader;
extern SurfaceType meatdungeon_scene_polygonTypes[5];
extern Vec3s meatdungeon_scene_vertices[1329];
extern CollisionPoly meatdungeon_scene_polygons[2231];
extern u64 meatdungeon_room_0_dl_bek_wht1_w04_1_small_i8[];
extern u64 meatdungeon_room_0_dl_web1_1_1_i8[];
extern u64 meatdungeon_room_0_dl_web1_1_2_i8[];
extern u64 meatdungeon_room_0_dl_web1_2_1_i8[];
extern u64 meatdungeon_room_0_dl_web1_2_2_i8[];
extern u64 meatdungeon_room_0_dl_bek_wht1_w12_1_i4[];
extern u64 meatdungeon_room_1_dl_MeatTrim1_ia8[];
extern u64 meatdungeon_room_2_dl_Meat0017_350_i8[];
extern Gfx mat_meatdungeon_room_0_dl_floor_mat_layerOpaque[];
extern Gfx mat_meatdungeon_room_0_dl_Web1_1_1_layerOpaque[];
extern Gfx mat_meatdungeon_room_0_dl_Web_1_1_2_layerOpaque[];
extern Gfx mat_meatdungeon_room_0_dl_Web_1_2_1_layerOpaque[];
extern Gfx mat_meatdungeon_room_0_dl_Web_1_2_2_layerOpaque[];
extern Gfx mat_meatdungeon_room_0_dl_Wall_layerOpaque[];
extern Gfx mat_meatdungeon_room_1_dl_MeatTrim1_layerOpaque[];
extern Gfx mat_meatdungeon_room_2_dl_MeatFloor_layerOpaque[];
extern SceneCmd meatdungeon_room_0_header00[];
extern s16 meatdungeon_room_0_header00_objectList[];
extern ActorEntry meatdungeon_room_0_header00_actorList[];
extern Gfx meatdungeon_room_0_shapeHeader_entry_0_opaque[];
extern Vtx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[175];
extern Gfx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_1[174];
extern Gfx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_0_dl_Web_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_0_dl_Web_mesh_layer_Opaque_vtx_0[8];
extern Gfx meatdungeon_room_0_dl_Web_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_0_dl_Web_mesh_layer_Opaque_vtx_1[8];
extern Gfx meatdungeon_room_0_dl_Web_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_0_dl_Web_mesh_layer_Opaque_vtx_2[8];
extern Gfx meatdungeon_room_0_dl_Web_mesh_layer_Opaque_tri_2[];
extern Vtx meatdungeon_room_0_dl_Web_mesh_layer_Opaque_vtx_3[4];
extern Gfx meatdungeon_room_0_dl_Web_mesh_layer_Opaque_tri_3[];
extern Gfx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque[];
extern Gfx meatdungeon_room_0_dl_Web_mesh_layer_Opaque[];
extern RoomShapeNormal meatdungeon_room_0_shapeHeader;
extern RoomShapeDListsEntry meatdungeon_room_0_shapeDListsEntry[1];
extern SceneCmd meatdungeon_room_1_header00[];
extern s16 meatdungeon_room_1_header00_objectList[];
extern ActorEntry meatdungeon_room_1_header00_actorList[];
extern Gfx meatdungeon_room_1_shapeHeader_entry_0_opaque[];
extern Vtx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque_vtx_0[124];
extern Gfx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque_vtx_1[24];
extern Gfx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque_vtx_2[24];
extern Gfx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque_tri_2[];
extern Vtx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque_vtx_3[24];
extern Gfx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque_tri_3[];
extern Vtx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque_vtx_4[24];
extern Gfx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque_tri_4[];
extern Vtx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque_vtx_5[94];
extern Gfx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque_tri_5[];
extern Vtx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque_vtx_6[50];
extern Gfx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque_tri_6[];
extern Gfx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque[];
extern RoomShapeNormal meatdungeon_room_1_shapeHeader;
extern RoomShapeDListsEntry meatdungeon_room_1_shapeDListsEntry[1];
extern SceneCmd meatdungeon_room_2_header00[];
extern s16 meatdungeon_room_2_header00_objectList[];
extern ActorEntry meatdungeon_room_2_header00_actorList[];
extern Gfx meatdungeon_room_2_shapeHeader_entry_0_opaque[];
extern Gfx meatdungeon_room_2_shapeHeader_entry_0_transparent[];
extern Vtx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_vtx_0[158];
extern Gfx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_vtx_1[606];
extern Gfx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_vtx_2[111];
extern Gfx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_tri_2[];
extern Vtx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_vtx_3[16];
extern Gfx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_tri_3[];
extern Vtx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_vtx_4[16];
extern Gfx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_tri_4[];
extern Vtx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_vtx_5[20];
extern Gfx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_tri_5[];
extern Vtx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_vtx_6[20];
extern Gfx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_tri_6[];
extern Vtx meatdungeon_room_2_dl_Trim_mesh_layer_Transparent_vtx_cull[8];
extern Vtx meatdungeon_room_2_dl_Trim_mesh_layer_Transparent_vtx_0[186];
extern Gfx meatdungeon_room_2_dl_Trim_mesh_layer_Transparent_tri_0[];
extern Gfx mat_meatdungeon_room_2_dl_Trim_001_layerTransparent[];
extern Gfx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque[];
extern Gfx meatdungeon_room_2_dl_Trim_mesh_layer_Transparent[];
extern RoomShapeNormal meatdungeon_room_2_shapeHeader;
extern RoomShapeDListsEntry meatdungeon_room_2_shapeDListsEntry[1];
extern SceneCmd meatdungeon_room_3_header00[];
extern Gfx meatdungeon_room_3_shapeHeader_entry_0_opaque[];
extern Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_0[124];
extern Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_1[24];
extern Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_2[24];
extern Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_2[];
extern Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_3[24];
extern Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_3[];
extern Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_4[24];
extern Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_4[];
extern Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_5[94];
extern Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_5[];
extern Vtx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_vtx_6[50];
extern Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque_tri_6[];
extern Gfx meatdungeon_room_3_dl_Hall1_001_mesh_layer_Opaque[];
extern RoomShapeNormal meatdungeon_room_3_shapeHeader;
extern RoomShapeDListsEntry meatdungeon_room_3_shapeDListsEntry[1];
extern SceneCmd meatdungeon_room_4_header00[];
extern s16 meatdungeon_room_4_header00_objectList[];
extern ActorEntry meatdungeon_room_4_header00_actorList[];
extern Gfx meatdungeon_room_4_shapeHeader_entry_0_opaque[];
extern u64 meatdungeon_room_4_dl_bek_wht1_w03_1_i4[];
extern Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_0[24];
extern Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_1[176];
extern Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_2[40];
extern Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_2[];
extern Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_3[40];
extern Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_3[];
extern Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_4[40];
extern Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_4[];
extern Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_5[40];
extern Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_5[];
extern Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_6[16];
extern Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_6[];
extern Vtx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_vtx_7[32];
extern Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque_tri_7[];
extern Gfx mat_meatdungeon_room_4_dl_ClimbWall_layerOpaque[];
extern Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque[];
extern RoomShapeNormal meatdungeon_room_4_shapeHeader;
extern RoomShapeDListsEntry meatdungeon_room_4_shapeDListsEntry[1];
extern SceneCmd meatdungeon_room_5_header00[];
extern s16 meatdungeon_room_5_header00_objectList[];
extern Gfx meatdungeon_room_5_shapeHeader_entry_0_opaque[];
extern u64 meatdungeon_room_5_dl_ext_rock_wall_grassy_dark_ci4[];
extern u64 meatdungeon_room_5_dl_ext_rock_wall_grassy_dark_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_ext_grass_dark_ci4[];
extern u64 meatdungeon_room_5_dl_ext_grass_dark_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_Stone_Floor_Tiled_Dirty_litte_ci4[];
extern u64 meatdungeon_room_5_dl_Stone_Floor_Tiled_Dirty_litte_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_stone_edge_3_rgba16[];
extern u64 meatdungeon_room_5_dl_stone_fence_greenerybottom_ci4[];
extern u64 meatdungeon_room_5_dl_stone_fence_greenerybottom_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_wood_pole_17_rgba16[];
extern u64 meatdungeon_room_5_dl_Stone_Bricks14_ci4[];
extern u64 meatdungeon_room_5_dl_Stone_Bricks14_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_Stone_Bricks14_hole_ci4[];
extern u64 meatdungeon_room_5_dl_Stone_Bricks14_hole_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_stone_pole_3_ci8[];
extern u64 meatdungeon_room_5_dl_stone_pole_3_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_stone_floor_dirty_crackled_ci4[];
extern u64 meatdungeon_room_5_dl_stone_floor_dirty_crackled_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_Stone_Stairs02_MirrorX_i4[];
extern u64 meatdungeon_room_5_dl_ext_stone_rough_dark_ci8[];
extern u64 meatdungeon_room_5_dl_ext_stone_rough_dark_pal_rgba16[];
extern Vtx meatdungeon_room_5_dl_Floor_005_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_5_dl_Floor_005_mesh_layer_Opaque_vtx_0[14];
extern Gfx meatdungeon_room_5_dl_Floor_005_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_5_dl_Floor_005_mesh_layer_Opaque_vtx_1[20];
extern Gfx meatdungeon_room_5_dl_Floor_005_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_0[298];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_1[140];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_2[19];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_2[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_3[37];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_3[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_4[68];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_4[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_5[94];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_5[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_6[6];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_6[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_7[52];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_7[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_8[26];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_8[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_9[26];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_9[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_10[27];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_10[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_11[4];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_11[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_12[4];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_12[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_13[21];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_13[];
extern Vtx meatdungeon_room_5_dl_Floor_007_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_5_dl_Floor_007_mesh_layer_Opaque_vtx_0[18];
extern Gfx meatdungeon_room_5_dl_Floor_007_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_5_dl_Floor_007_mesh_layer_Opaque_vtx_1[24];
extern Gfx meatdungeon_room_5_dl_Floor_007_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_5_dl_Floor_007_mesh_layer_Opaque_vtx_2[4];
extern Gfx meatdungeon_room_5_dl_Floor_007_mesh_layer_Opaque_tri_2[];
extern Vtx meatdungeon_room_5_dl_Floor_008_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_5_dl_Floor_008_mesh_layer_Opaque_vtx_0[4];
extern Gfx meatdungeon_room_5_dl_Floor_008_mesh_layer_Opaque_tri_0[];
extern Gfx mat_meatdungeon_room_5_dl_Cliff1_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Grass_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Bridge_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Underneath_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Brick_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Post_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_WaterFlowCliff_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Wall_001_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Holes_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_crunnipiele_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Concrete_001_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Stairs_001_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Exit_toGuardHouse_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_f3dlite_material_layerOpaque[];
extern Gfx meatdungeon_room_5_dl_Floor_005_mesh_layer_Opaque[];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque[];
extern Gfx meatdungeon_room_5_dl_Floor_007_mesh_layer_Opaque[];
extern Gfx meatdungeon_room_5_dl_Floor_008_mesh_layer_Opaque[];
extern RoomShapeNormal meatdungeon_room_5_shapeHeader;
extern RoomShapeDListsEntry meatdungeon_room_5_shapeDListsEntry[1];

#endif
