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
extern ActorEntry meatdungeon_scene_header00_playerEntryList[];
extern Spawn meatdungeon_scene_header00_entranceList[];
extern TransitionActorEntry meatdungeon_scene_header00_transitionActors[];
extern EnvLightSettings meatdungeon_scene_header00_lightSettings[4];
extern CollisionHeader meatdungeon_scene_collisionHeader;
extern SurfaceType meatdungeon_scene_polygonTypes[1];
extern Vec3s meatdungeon_scene_vertices[708];
extern CollisionPoly meatdungeon_scene_polygons[1210];
extern u64 meatdungeon_room_0_dl_bek_wht1_w04_1_small_i8[];
extern u64 meatdungeon_room_0_dl_bek_wht1_w12_1_i4[];
extern u64 meatdungeon_room_1_dl_MeatTrim1_ia8[];
extern Gfx mat_meatdungeon_room_0_dl_floor_mat_layerOpaque[];
extern Gfx mat_meatdungeon_room_0_dl_Wall_layerOpaque[];
extern SceneCmd meatdungeon_room_0_header00[];
extern s16 meatdungeon_room_0_header00_objectList[];
extern ActorEntry meatdungeon_room_0_header00_actorList[];
extern Gfx meatdungeon_room_0_shapeHeader_entry_0_opaque[];
extern Vtx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[151];
extern Gfx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque_vtx_1[174];
extern Gfx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque_tri_1[];
extern Gfx meatdungeon_room_0_dl_Floor_mesh_layer_Opaque[];
extern RoomShapeNormal meatdungeon_room_0_shapeHeader;
extern RoomShapeDListsEntry meatdungeon_room_0_shapeDListsEntry[1];
extern SceneCmd meatdungeon_room_1_header00[];
extern Gfx meatdungeon_room_1_shapeHeader_entry_0_opaque[];
extern u64 meatdungeon_room_1_dl_web1_1_1_i8[];
extern u64 meatdungeon_room_1_dl_web1_1_2_i8[];
extern u64 meatdungeon_room_1_dl_web1_2_1_i8[];
extern u64 meatdungeon_room_1_dl_web1_2_2_i8[];
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
extern Gfx mat_meatdungeon_room_1_dl_Web1_1_1_layerOpaque[];
extern Gfx mat_meatdungeon_room_1_dl_Web_1_1_2_layerOpaque[];
extern Gfx mat_meatdungeon_room_1_dl_Web_1_2_1_layerOpaque[];
extern Gfx mat_meatdungeon_room_1_dl_Web_1_2_2_layerOpaque[];
extern Gfx mat_meatdungeon_room_1_dl_MeatTrim1_layerOpaque[];
extern Gfx meatdungeon_room_1_dl_Hall1_mesh_layer_Opaque[];
extern RoomShapeNormal meatdungeon_room_1_shapeHeader;
extern RoomShapeDListsEntry meatdungeon_room_1_shapeDListsEntry[1];
extern SceneCmd meatdungeon_room_2_header00[];
extern s16 meatdungeon_room_2_header00_objectList[];
extern ActorEntry meatdungeon_room_2_header00_actorList[];
extern Gfx meatdungeon_room_2_shapeHeader_entry_0_opaque[];
extern Gfx meatdungeon_room_2_shapeHeader_entry_0_transparent[];
extern u64 meatdungeon_room_2_dl_Meat0017_350_i8[];
extern Vtx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_vtx_0[105];
extern Gfx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_tri_0[];
extern Vtx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_vtx_1[388];
extern Gfx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_tri_1[];
extern Vtx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_vtx_2[81];
extern Gfx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque_tri_2[];
extern Vtx meatdungeon_room_2_dl_Trim_mesh_layer_Transparent_vtx_cull[8];
extern Vtx meatdungeon_room_2_dl_Trim_mesh_layer_Transparent_vtx_0[148];
extern Gfx meatdungeon_room_2_dl_Trim_mesh_layer_Transparent_tri_0[];
extern Gfx mat_meatdungeon_room_2_dl_MeatFloor_layerOpaque[];
extern Gfx mat_meatdungeon_room_2_dl_Trim_001_layerTransparent[];
extern Gfx meatdungeon_room_2_dl_Floor_001_mesh_layer_Opaque[];
extern Gfx meatdungeon_room_2_dl_Trim_mesh_layer_Transparent[];
extern RoomShapeNormal meatdungeon_room_2_shapeHeader;
extern RoomShapeDListsEntry meatdungeon_room_2_shapeDListsEntry[1];

#endif
