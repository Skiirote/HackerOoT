#ifndef CAVE_SCENE_H
#define CAVE_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd cave_scene_header00[];
extern RomFile cave_scene_roomList[];
extern u8 _cave_room_0SegmentRomStart[];
extern u8 _cave_room_0SegmentRomEnd[];
extern ActorEntry cave_scene_header00_playerEntryList[];
extern Spawn cave_scene_header00_entranceList[];
extern EnvLightSettings cave_scene_header00_lightSettings[1];
extern CollisionHeader cave_scene_collisionHeader;
extern WaterBox cave_scene_waterBoxes[1];
extern SurfaceType cave_scene_polygonTypes[1];
extern Vec3s cave_scene_vertices[121];
extern CollisionPoly cave_scene_polygons[232];
extern SceneCmd cave_room_0_header00[];
extern Gfx cave_room_0_shapeHeader_entry_0_opaque[];
extern Gfx cave_room_0_shapeHeader_entry_0_transparent[];
extern u64 cave_room_0_dl_Effect_GodRay03_ia8[];
extern u64 cave_room_0_dl_FadeWhite_ci4[];
extern u64 cave_room_0_dl_FadeWhite_pal_rgba16[];
extern u64 cave_room_0_dl_ext_rock_mahMoss_ci4[];
extern u64 cave_room_0_dl_ext_rock_mahMoss_pal_rgba16[];
extern u64 cave_room_0_dl_ext_stone_rough_cave_ci4[];
extern u64 cave_room_0_dl_ext_stone_rough_cave_pal_rgba16[];
extern u64 cave_room_0_dl__000170B8_32x32_rgba16_ci8[];
extern u64 cave_room_0_dl__000170B8_32x32_rgba16_pal_rgba16[];
extern u64 cave_room_0_dl__0000F160_32x128_i4_i8[];
extern Vtx cave_room_0_dl_Floor_001_mesh_layer_Transparent_vtx_cull[8];
extern Vtx cave_room_0_dl_Floor_001_mesh_layer_Transparent_vtx_0[20];
extern Gfx cave_room_0_dl_Floor_001_mesh_layer_Transparent_tri_0[];
extern Vtx cave_room_0_dl_Floor_001_mesh_layer_Transparent_vtx_1[40];
extern Gfx cave_room_0_dl_Floor_001_mesh_layer_Transparent_tri_1[];
extern Vtx cave_room_0_dl_Floor_003_mesh_layer_Opaque_vtx_cull[8];
extern Vtx cave_room_0_dl_Floor_003_mesh_layer_Opaque_vtx_0[226];
extern Gfx cave_room_0_dl_Floor_003_mesh_layer_Opaque_tri_0[];
extern Vtx cave_room_0_dl_Floor_003_mesh_layer_Opaque_vtx_1[76];
extern Gfx cave_room_0_dl_Floor_003_mesh_layer_Opaque_tri_1[];
extern Vtx cave_room_0_dl_Floor_003_mesh_layer_Opaque_vtx_2[4];
extern Gfx cave_room_0_dl_Floor_003_mesh_layer_Opaque_tri_2[];
extern Vtx cave_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_cull[8];
extern Vtx cave_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_0[12];
extern Gfx cave_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_tri_0[];
extern Vtx cave_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_vtx_1[8];
extern Gfx cave_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent_tri_1[];
extern Gfx mat_cave_room_0_dl_Light_layerTransparent[];
extern Gfx mat_cave_room_0_dl_HoleFade_layerTransparent[];
extern Gfx mat_cave_room_0_dl_CaveWalls_layerOpaque[];
extern Gfx mat_cave_room_0_dl_CaveFloor_layerOpaque[];
extern Gfx mat_cave_room_0_dl_White_layerOpaque[];
extern Gfx mat_cave_room_0_dl_oot_water_mat_layerTransparent[];
extern Gfx mat_cave_room_0_dl_Waterfall_layerTransparent[];
extern Gfx cave_room_0_dl_Floor_001_mesh_layer_Transparent[];
extern Gfx cave_room_0_dl_Floor_003_mesh_layer_Opaque[];
extern Gfx cave_room_0_dl_Water_Box_Mesh_mesh_layer_Transparent[];
extern RoomShapeNormal cave_room_0_shapeHeader;
extern RoomShapeDListsEntry cave_room_0_shapeDListsEntry[1];

#endif
