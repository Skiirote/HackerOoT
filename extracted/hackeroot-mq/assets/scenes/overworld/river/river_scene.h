#ifndef RIVER_SCENE_H
#define RIVER_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd river_scene_header00[];
extern RomFile river_scene_roomList[];
extern u8 _river_room_0SegmentRomStart[];
extern u8 _river_room_0SegmentRomEnd[];
extern ActorEntry river_scene_header00_playerEntryList[];
extern Spawn river_scene_header00_entranceList[];
extern u16 river_scene_header00_exitList[2];
extern EnvLightSettings river_scene_header00_lightSettings[4];
extern CollisionHeader river_scene_collisionHeader;
extern WaterBox river_scene_waterBoxes[1];
extern SurfaceType river_scene_polygonTypes[4];
extern Vec3s river_scene_vertices[996];
extern CollisionPoly river_scene_polygons[1494];
extern SceneCmd river_room_0_header00[];
extern s16 river_room_0_header00_objectList[];
extern ActorEntry river_room_0_header00_actorList[];
extern Gfx river_room_0_shapeHeader_entry_0_opaque[];
extern Gfx river_room_0_shapeHeader_entry_0_transparent[];
extern u64 river_room_0_dl_stone_floor_smooth_11_ci4[];
extern u64 river_room_0_dl_stone_floor_smooth_11_pal_rgba16[];
extern u64 river_room_0_dl_bek_wht1_w04_1_small_i8[];
extern u64 river_room_0_dl_ext_rock_wall_grassy_dark_ci4[];
extern u64 river_room_0_dl_ext_rock_wall_grassy_dark_pal_rgba16[];
extern u64 river_room_0_dl_ext_grass_dark_ci4[];
extern u64 river_room_0_dl_ext_grass_dark_pal_rgba16[];
extern u64 river_room_0_dl_Stone_Floor_Tiled_Dirty_litte_ci4[];
extern u64 river_room_0_dl_Stone_Floor_Tiled_Dirty_litte_pal_rgba16[];
extern u64 river_room_0_dl_stone_edge_3_rgba16[];
extern u64 river_room_0_dl_stone_fence_greenerybottom_ci4[];
extern u64 river_room_0_dl_stone_fence_greenerybottom_pal_rgba16[];
extern u64 river_room_0_dl_wood_pole_17_rgba16[];
extern u64 river_room_0_dl__00008D58_32x32_rgba16_ci8[];
extern u64 river_room_0_dl__00008D58_32x32_rgba16_pal_rgba16[];
extern u64 river_room_0_dl_Effect_Water01_ia8[];
extern Vtx river_room_0_dl_Fingers_mesh_layer_Opaque_vtx_cull[8];
extern Vtx river_room_0_dl_Fingers_mesh_layer_Opaque_vtx_0[476];
extern Gfx river_room_0_dl_Fingers_mesh_layer_Opaque_tri_0[];
extern Vtx river_room_0_dl_Fingers_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx river_room_0_dl_Fingers_001_mesh_layer_Opaque_vtx_0[187];
extern Gfx river_room_0_dl_Fingers_001_mesh_layer_Opaque_tri_0[];
extern Vtx river_room_0_dl_Flesh_mesh_layer_Transparent_vtx_cull[8];
extern Vtx river_room_0_dl_Flesh_mesh_layer_Transparent_vtx_0[47];
extern Gfx river_room_0_dl_Flesh_mesh_layer_Transparent_tri_0[];
extern Vtx river_room_0_dl_Floor_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx river_room_0_dl_Floor_001_mesh_layer_Opaque_vtx_0[324];
extern Gfx river_room_0_dl_Floor_001_mesh_layer_Opaque_tri_0[];
extern Vtx river_room_0_dl_Floor_001_mesh_layer_Opaque_vtx_1[182];
extern Gfx river_room_0_dl_Floor_001_mesh_layer_Opaque_tri_1[];
extern Vtx river_room_0_dl_Floor_001_mesh_layer_Opaque_vtx_2[19];
extern Gfx river_room_0_dl_Floor_001_mesh_layer_Opaque_tri_2[];
extern Vtx river_room_0_dl_Floor_001_mesh_layer_Opaque_vtx_3[37];
extern Gfx river_room_0_dl_Floor_001_mesh_layer_Opaque_tri_3[];
extern Vtx river_room_0_dl_Floor_001_mesh_layer_Opaque_vtx_4[50];
extern Gfx river_room_0_dl_Floor_001_mesh_layer_Opaque_tri_4[];
extern Vtx river_room_0_dl_Floor_001_mesh_layer_Opaque_vtx_5[94];
extern Gfx river_room_0_dl_Floor_001_mesh_layer_Opaque_tri_5[];
extern Vtx river_room_0_dl_Floor_001_mesh_layer_Opaque_vtx_6[36];
extern Gfx river_room_0_dl_Floor_001_mesh_layer_Opaque_tri_6[];
extern Vtx river_room_0_dl_Floor_001_mesh_layer_Opaque_vtx_7[6];
extern Gfx river_room_0_dl_Floor_001_mesh_layer_Opaque_tri_7[];
extern Vtx river_room_0_dl_Floor_001_mesh_layer_Opaque_vtx_8[4];
extern Gfx river_room_0_dl_Floor_001_mesh_layer_Opaque_tri_8[];
extern Vtx river_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_cull[8];
extern Vtx river_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_0[42];
extern Gfx river_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_tri_0[];
extern Vtx river_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_1[42];
extern Gfx river_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_tri_1[];
extern Gfx mat_river_room_0_dl_Bone_layerOpaque[];
extern Gfx mat_river_room_0_dl_Flesh_layerTransparent[];
extern Gfx mat_river_room_0_dl_Cliff1_layerOpaque[];
extern Gfx mat_river_room_0_dl_Grass_layerOpaque[];
extern Gfx mat_river_room_0_dl_Bridge_layerOpaque[];
extern Gfx mat_river_room_0_dl_Underneath_layerOpaque[];
extern Gfx mat_river_room_0_dl_Brick_layerOpaque[];
extern Gfx mat_river_room_0_dl_Post_layerOpaque[];
extern Gfx mat_river_room_0_dl_WaterFlowCliff_layerOpaque[];
extern Gfx mat_river_room_0_dl_Exit_toCave_layerOpaque[];
extern Gfx mat_river_room_0_dl_Exit_toVillage_layerOpaque[];
extern Gfx mat_river_room_0_dl_oot_water_mat_layerTransparent[];
extern Gfx mat_river_room_0_dl_Water1_layerTransparent[];
extern Gfx river_room_0_dl_Fingers_mesh_layer_Opaque[];
extern Gfx river_room_0_dl_Fingers_001_mesh_layer_Opaque[];
extern Gfx river_room_0_dl_Flesh_mesh_layer_Transparent[];
extern Gfx river_room_0_dl_Floor_001_mesh_layer_Opaque[];
extern Gfx river_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent[];
extern RoomShapeNormal river_room_0_shapeHeader;
extern RoomShapeDListsEntry river_room_0_shapeDListsEntry[1];

#endif
