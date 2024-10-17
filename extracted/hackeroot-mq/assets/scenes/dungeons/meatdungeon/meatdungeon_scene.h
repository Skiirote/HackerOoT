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
extern u8 _meatdungeon_room_6SegmentRomStart[];
extern u8 _meatdungeon_room_6SegmentRomEnd[];
extern u8 _meatdungeon_room_7SegmentRomStart[];
extern u8 _meatdungeon_room_7SegmentRomEnd[];
extern u8 _meatdungeon_room_8SegmentRomStart[];
extern u8 _meatdungeon_room_8SegmentRomEnd[];
extern ActorEntry meatdungeon_scene_header00_playerEntryList[];
extern Spawn meatdungeon_scene_header00_entranceList[];
extern TransitionActorEntry meatdungeon_scene_header00_transitionActors[];
extern EnvLightSettings meatdungeon_scene_header00_lightSettings[1];
extern CollisionHeader meatdungeon_scene_collisionHeader;
extern WaterBox meatdungeon_scene_waterBoxes[2];
extern SurfaceType meatdungeon_scene_polygonTypes[7];
extern Vec3s meatdungeon_scene_vertices[2202];
extern CollisionPoly meatdungeon_scene_polygons[3656];
extern u64 meatdungeon_room_6_dl_bek_wht1_w04_1_small_i8[];
extern u64 meatdungeon_room_6_dl_web1_1_1_i8[];
extern u64 meatdungeon_room_6_dl_web1_1_2_i8[];
extern u64 meatdungeon_room_6_dl_web1_2_1_i8[];
extern u64 meatdungeon_room_6_dl_web1_2_2_i8[];
extern u64 meatdungeon_room_6_dl_MeatTrim1_ia8[];
extern u64 meatdungeon_room_6_dl_bek_wht1_w12_1_i4[];
extern u64 meatdungeon_room_8_dl_alienwall1_i8[];
extern u64 meatdungeon_room_8_dl_Meat0017_350_i8[];
extern u64 meatdungeon_room_8_dl_bek_wht1_w03_1_i4[];
extern Gfx mat_meatdungeon_room_6_dl_floor_mat_layerOpaque[];
extern Gfx mat_meatdungeon_room_6_dl_Web1_1_1_layerOpaque[];
extern Gfx mat_meatdungeon_room_6_dl_Web_1_1_2_layerOpaque[];
extern Gfx mat_meatdungeon_room_6_dl_Web_1_2_1_layerOpaque[];
extern Gfx mat_meatdungeon_room_6_dl_Web_1_2_2_layerOpaque[];
extern Gfx mat_meatdungeon_room_6_dl_MeatTrim1_layerOpaque[];
extern Gfx mat_meatdungeon_room_6_dl_Wall_layerOpaque[];
extern Gfx mat_meatdungeon_room_8_dl_AlienWall_layerOpaque[];
extern Gfx mat_meatdungeon_room_8_dl_MeatFloor_layerOpaque[];
extern Gfx mat_meatdungeon_room_8_dl_ClimbWall_layerOpaque[];
extern SceneCmd meatdungeon_room_0_header00[];
extern s16 meatdungeon_room_0_header00_objectList[];
extern ActorEntry meatdungeon_room_0_header00_actorList[];
extern Gfx meatdungeon_room_0_shapeHeader_entry_0_opaque[];
extern Vtx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[243];
extern Gfx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_1[255];
extern Gfx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_0_dl_Floor_010_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_0_dl_Floor_010_mesh_layer_Opaque_vtx_0[27];
extern Gfx meatdungeon_room_0_dl_Floor_010_mesh_layer_Opaque_tri_0[];
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
extern Gfx meatdungeon_room_0_dl_Floor_010_mesh_layer_Opaque[];
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
extern Gfx meatdungeon_room_4_shapeHeader_entry_0_transparent[];
extern u64 meatdungeon_room_4_dl__0000E160_32x32_rgba16_ci8[];
extern u64 meatdungeon_room_4_dl__0000E160_32x32_rgba16_x__0000E160_32x32_rgba16_pal_rgba16[];
extern u64 meatdungeon_room_4_dl__0000E160_32x32_rgba16_ci8_copy[];
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
extern Vtx meatdungeon_room_4_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_cull[8];
extern Vtx meatdungeon_room_4_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_0[8];
extern Gfx meatdungeon_room_4_dl_Water_Box_Mesh_mesh_layer_Transparent_tri_0[];
extern Gfx mat_meatdungeon_room_4_dl_oot_water_mat_layerTransparent[];
extern Gfx meatdungeon_room_4_dl_Floor_003_mesh_layer_Opaque[];
extern Gfx meatdungeon_room_4_dl_Water_Box_Mesh_mesh_layer_Transparent[];
extern RoomShapeNormal meatdungeon_room_4_shapeHeader;
extern RoomShapeDListsEntry meatdungeon_room_4_shapeDListsEntry[1];
extern SceneCmd meatdungeon_room_5_header00[];
extern s16 meatdungeon_room_5_header00_objectList[];
extern Gfx meatdungeon_room_5_shapeHeader_entry_0_opaque[];
extern u64 meatdungeon_room_5_dl_stonewall_red1_ci4[];
extern u64 meatdungeon_room_5_dl_stonewall_red1_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_Stone_WallHouse03_ci4[];
extern u64 meatdungeon_room_5_dl_Stone_WallHouse03_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_window_1_ci4[];
extern u64 meatdungeon_room_5_dl_window_1_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_stone_roof_old_ci8[];
extern u64 meatdungeon_room_5_dl_stone_roof_old_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_stone_slate_2_ci8[];
extern u64 meatdungeon_room_5_dl_stone_slate_2_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_stone_floor_dirty_crackled_2_ci4[];
extern u64 meatdungeon_room_5_dl_stone_floor_dirty_crackled_2_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_Stone_Stairs02_MirrorX_i4[];
extern u64 meatdungeon_room_5_dl__00006390_32x64_rgba16_ci8[];
extern u64 meatdungeon_room_5_dl__00006390_32x64_rgba16_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_ext_grass_dark_ci4[];
extern u64 meatdungeon_room_5_dl_ext_grass_dark_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_ext_rock_wall_grassy_dark_ci4[];
extern u64 meatdungeon_room_5_dl_ext_rock_wall_grassy_dark_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_Stone_Bricks15_ci4[];
extern u64 meatdungeon_room_5_dl_Stone_Bricks15_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_FloatRocks1_ci4[];
extern u64 meatdungeon_room_5_dl_FloatRocks1_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_ext_stone_rough_dark_ci8[];
extern u64 meatdungeon_room_5_dl_ext_stone_rough_dark_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_Stone_Floor_Tiled_Dirty_litte_ci4[];
extern u64 meatdungeon_room_5_dl_Stone_Floor_Tiled_Dirty_litte_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_stone_edge_3_rgba16[];
extern u64 meatdungeon_room_5_dl_stone_fence_greenerybottom_ci4[];
extern u64 meatdungeon_room_5_dl_stone_fence_greenerybottom_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_Stone_Bricks14_ci4[];
extern u64 meatdungeon_room_5_dl_Stone_Bricks14_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_Stone_Bricks14_hole_ci4[];
extern u64 meatdungeon_room_5_dl_Stone_Bricks14_hole_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_stone_pole_3_ci8[];
extern u64 meatdungeon_room_5_dl_stone_pole_3_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_stone_floor_dirty_crackled_ci4[];
extern u64 meatdungeon_room_5_dl_stone_floor_dirty_crackled_pal_rgba16[];
extern u64 meatdungeon_room_5_dl_Stone_Stairs02_MirrorX_i4_copy[];
extern Vtx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_vtx_0[32];
extern Gfx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_vtx_1[17];
extern Gfx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_vtx_2[8];
extern Gfx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_tri_2[];
extern Vtx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_vtx_3[12];
extern Gfx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_tri_3[];
extern Vtx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_vtx_4[9];
extern Gfx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_tri_4[];
extern Vtx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_vtx_5[11];
extern Gfx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_tri_5[];
extern Vtx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_vtx_6[4];
extern Gfx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_tri_6[];
extern Vtx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_vtx_7[31];
extern Gfx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_tri_7[];
extern Vtx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_vtx_8[9];
extern Gfx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_tri_8[];
extern Vtx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_vtx_9[11];
extern Gfx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_tri_9[];
extern Vtx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_vtx_10[14];
extern Gfx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_tri_10[];
extern Vtx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_vtx_11[96];
extern Gfx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque_tri_11[];
extern Vtx meatdungeon_room_5_dl_Floor_005_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_5_dl_Floor_005_mesh_layer_Opaque_vtx_0[19];
extern Gfx meatdungeon_room_5_dl_Floor_005_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_0[119];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_1[78];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_2[22];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_2[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_3[28];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_3[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_4[71];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_4[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_5[52];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_5[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_6[26];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_6[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_7[26];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_7[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_8[27];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_8[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_9[4];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_9[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_10[4];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_10[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_11[252];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_11[];
extern Vtx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_vtx_12[11];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque_tri_12[];
extern Vtx meatdungeon_room_5_dl_Floor_008_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_5_dl_Floor_008_mesh_layer_Opaque_vtx_0[4];
extern Gfx meatdungeon_room_5_dl_Floor_008_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_5_dl_Floor_009_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_5_dl_Floor_009_mesh_layer_Opaque_vtx_0[46];
extern Gfx meatdungeon_room_5_dl_Floor_009_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_5_dl_Floor_009_mesh_layer_Opaque_vtx_1[41];
extern Gfx meatdungeon_room_5_dl_Floor_009_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_5_dl_Floor_009_mesh_layer_Opaque_vtx_2[7];
extern Gfx meatdungeon_room_5_dl_Floor_009_mesh_layer_Opaque_tri_2[];
extern Gfx mat_meatdungeon_room_5_dl_Bricks_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Wall2_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Window_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Roof_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Foundation_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Concrete_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Stairs_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Bush_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Grass_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Cliff1_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Chimney_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_FloatRocks1_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Rubble_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Bridge_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Underneath_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Brick_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Wall_001_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Holes_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_crunnipiele_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Concrete_001_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Stairs_001_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_Exit_toGuardHouse_layerOpaque[];
extern Gfx mat_meatdungeon_room_5_dl_RubbleSlip_layerOpaque[];
extern Gfx meatdungeon_room_5_dl_Floor_004_mesh_layer_Opaque[];
extern Gfx meatdungeon_room_5_dl_Floor_005_mesh_layer_Opaque[];
extern Gfx meatdungeon_room_5_dl_Floor_006_mesh_layer_Opaque[];
extern Gfx meatdungeon_room_5_dl_Floor_008_mesh_layer_Opaque[];
extern Gfx meatdungeon_room_5_dl_Floor_009_mesh_layer_Opaque[];
extern RoomShapeNormal meatdungeon_room_5_shapeHeader;
extern RoomShapeDListsEntry meatdungeon_room_5_shapeDListsEntry[1];
extern SceneCmd meatdungeon_room_6_header00[];
extern Gfx meatdungeon_room_6_shapeHeader_entry_0_opaque[];
extern Vtx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque_vtx_0[124];
extern Gfx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque_vtx_1[24];
extern Gfx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque_vtx_2[24];
extern Gfx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque_tri_2[];
extern Vtx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque_vtx_3[24];
extern Gfx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque_tri_3[];
extern Vtx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque_vtx_4[24];
extern Gfx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque_tri_4[];
extern Vtx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque_vtx_5[94];
extern Gfx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque_tri_5[];
extern Vtx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque_vtx_6[50];
extern Gfx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque_tri_6[];
extern Gfx meatdungeon_room_6_dl_Hall1_002_mesh_layer_Opaque[];
extern RoomShapeNormal meatdungeon_room_6_shapeHeader;
extern RoomShapeDListsEntry meatdungeon_room_6_shapeDListsEntry[1];
extern SceneCmd meatdungeon_room_7_header00[];
extern s16 meatdungeon_room_7_header00_objectList[];
extern ActorEntry meatdungeon_room_7_header00_actorList[];
extern Gfx meatdungeon_room_7_shapeHeader_entry_0_opaque[];
extern Vtx meatdungeon_room_7_dl_Floor_007_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_7_dl_Floor_007_mesh_layer_Opaque_vtx_0[142];
extern Gfx meatdungeon_room_7_dl_Floor_007_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_7_dl_Floor_007_mesh_layer_Opaque_vtx_1[118];
extern Gfx meatdungeon_room_7_dl_Floor_007_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_7_dl_Floor_007_mesh_layer_Opaque_vtx_2[86];
extern Gfx meatdungeon_room_7_dl_Floor_007_mesh_layer_Opaque_tri_2[];
extern Gfx meatdungeon_room_7_dl_Floor_007_mesh_layer_Opaque[];
extern RoomShapeNormal meatdungeon_room_7_shapeHeader;
extern RoomShapeDListsEntry meatdungeon_room_7_shapeDListsEntry[1];
extern SceneCmd meatdungeon_room_8_header00[];
extern ActorEntry meatdungeon_room_8_header00_actorList[];
extern Gfx meatdungeon_room_8_shapeHeader_entry_0_opaque[];
extern u64 meatdungeon_room_8_dl_ideatherass_ci4[];
extern u64 meatdungeon_room_8_dl_ideatherass_pal_rgba16[];
extern u64 meatdungeon_room_8_dl_Stone_Tile09_MirrorX_MirrorY_ci4[];
extern u64 meatdungeon_room_8_dl_Stone_Tile09_MirrorX_MirrorY_pal_rgba16[];
extern Vtx meatdungeon_room_8_dl_Floor_011_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_8_dl_Floor_011_mesh_layer_Opaque_vtx_0[15];
extern Gfx meatdungeon_room_8_dl_Floor_011_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_8_dl_Floor_011_mesh_layer_Opaque_vtx_1[6];
extern Gfx meatdungeon_room_8_dl_Floor_011_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_8_dl_Floor_011_mesh_layer_Opaque_vtx_2[26];
extern Gfx meatdungeon_room_8_dl_Floor_011_mesh_layer_Opaque_tri_2[];
extern Vtx meatdungeon_room_8_dl_Floor_011_mesh_layer_Opaque_vtx_3[4];
extern Gfx meatdungeon_room_8_dl_Floor_011_mesh_layer_Opaque_tri_3[];
extern Vtx meatdungeon_room_8_dl_Floor_011_mesh_layer_Opaque_vtx_4[6];
extern Gfx meatdungeon_room_8_dl_Floor_011_mesh_layer_Opaque_tri_4[];
extern Vtx meatdungeon_room_8_dl_Floor_011_mesh_layer_Opaque_vtx_5[54];
extern Gfx meatdungeon_room_8_dl_Floor_011_mesh_layer_Opaque_tri_5[];
extern Vtx meatdungeon_room_8_dl_Floor_012_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_8_dl_Floor_012_mesh_layer_Opaque_vtx_0[17];
extern Gfx meatdungeon_room_8_dl_Floor_012_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_8_dl_Floor_012_mesh_layer_Opaque_vtx_1[19];
extern Gfx meatdungeon_room_8_dl_Floor_012_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_8_dl_Floor_012_mesh_layer_Opaque_vtx_2[12];
extern Gfx meatdungeon_room_8_dl_Floor_012_mesh_layer_Opaque_tri_2[];
extern Vtx meatdungeon_room_8_dl_Floor_012_mesh_layer_Opaque_vtx_3[27];
extern Gfx meatdungeon_room_8_dl_Floor_012_mesh_layer_Opaque_tri_3[];
extern Vtx meatdungeon_room_8_dl_Floor_012_mesh_layer_Opaque_vtx_4[50];
extern Gfx meatdungeon_room_8_dl_Floor_012_mesh_layer_Opaque_tri_4[];
extern Vtx meatdungeon_room_8_dl_Floor_012_mesh_layer_Opaque_vtx_5[8];
extern Gfx meatdungeon_room_8_dl_Floor_012_mesh_layer_Opaque_tri_5[];
extern Vtx meatdungeon_room_8_dl_Floor_013_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_8_dl_Floor_013_mesh_layer_Opaque_vtx_0[14];
extern Gfx meatdungeon_room_8_dl_Floor_013_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_8_dl_Floor_013_mesh_layer_Opaque_vtx_1[16];
extern Gfx meatdungeon_room_8_dl_Floor_013_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_8_dl_Floor_013_mesh_layer_Opaque_vtx_2[23];
extern Gfx meatdungeon_room_8_dl_Floor_013_mesh_layer_Opaque_tri_2[];
extern Vtx meatdungeon_room_8_dl_Floor_013_mesh_layer_Opaque_vtx_3[8];
extern Gfx meatdungeon_room_8_dl_Floor_013_mesh_layer_Opaque_tri_3[];
extern Gfx mat_meatdungeon_room_8_dl_IdEatHerAss_layerOpaque[];
extern Gfx mat_meatdungeon_room_8_dl_Tile_layerOpaque[];
extern Gfx mat_meatdungeon_room_8_dl_Tile_Red_layerOpaque[];
extern Gfx mat_meatdungeon_room_8_dl_Tile_Green_layerOpaque[];
extern Gfx mat_meatdungeon_room_8_dl_Tile_Blue_layerOpaque[];
extern Gfx mat_meatdungeon_room_8_dl_Tile_Yellow_layerOpaque[];
extern Gfx meatdungeon_room_8_dl_Floor_011_mesh_layer_Opaque[];
extern Gfx meatdungeon_room_8_dl_Floor_012_mesh_layer_Opaque[];
extern Gfx meatdungeon_room_8_dl_Floor_013_mesh_layer_Opaque[];
extern RoomShapeNormal meatdungeon_room_8_shapeHeader;
extern RoomShapeDListsEntry meatdungeon_room_8_shapeDListsEntry[1];

#endif
