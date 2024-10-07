#ifndef GUARDTOWER_SCENE_H
#define GUARDTOWER_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd guardtower_scene_header00[];
extern RomFile guardtower_scene_roomList[];
extern u8 _guardtower_room_0SegmentRomStart[];
extern u8 _guardtower_room_0SegmentRomEnd[];
extern ActorEntry guardtower_scene_header00_playerEntryList[];
extern Spawn guardtower_scene_header00_entranceList[];
extern u16 guardtower_scene_header00_exitList[1];
extern EnvLightSettings guardtower_scene_header00_lightSettings[1];
extern CollisionHeader guardtower_scene_collisionHeader;
extern SurfaceType guardtower_scene_polygonTypes[4];
extern Vec3s guardtower_scene_vertices[156];
extern CollisionPoly guardtower_scene_polygons[205];
extern SceneCmd guardtower_room_0_header00[];
extern s16 guardtower_room_0_header00_objectList[];
extern ActorEntry guardtower_room_0_header00_actorList[];
extern Gfx guardtower_room_0_shapeHeader_entry_0_opaque[];
extern u64 guardtower_room_0_dl_wood_crate_og_Side_ci4[];
extern u64 guardtower_room_0_dl_wood_crate_og_Side_pal_rgba16[];
extern u64 guardtower_room_0_dl_wood_crate_normal_top_ci4[];
extern u64 guardtower_room_0_dl_wood_crate_normal_top_pal_rgba16[];
extern u64 guardtower_room_0_dl_stone_bricks_8_ci4[];
extern u64 guardtower_room_0_dl_stone_bricks_8_pal_rgba16[];
extern u64 guardtower_room_0_dl_stone_floor_dirty_crackled_ci4[];
extern u64 guardtower_room_0_dl_stone_floor_dirty_crackled_pal_rgba16[];
extern u64 guardtower_room_0_dl_Wood_Fence02_MirrorY_ci4[];
extern u64 guardtower_room_0_dl_Wood_Fence02_MirrorY_pal_rgba16[];
extern u64 guardtower_room_0_dl_fx_wood_house_MirrorY_MirrorX_ci4[];
extern u64 guardtower_room_0_dl_fx_wood_house_MirrorY_MirrorX_pal_rgba16[];
extern u64 guardtower_room_0_dl_Cloth_Flag1_rgba16[];
extern u64 guardtower_room_0_dl_Cloth_Hay01_MirrorX_MirrorY_ci4[];
extern u64 guardtower_room_0_dl_Cloth_Hay01_MirrorX_MirrorY_pal_rgba16[];
extern Vtx guardtower_room_0_dl_Crates_mesh_layer_Opaque_vtx_cull[8];
extern Vtx guardtower_room_0_dl_Crates_mesh_layer_Opaque_vtx_0[104];
extern Gfx guardtower_room_0_dl_Crates_mesh_layer_Opaque_tri_0[];
extern Vtx guardtower_room_0_dl_Crates_mesh_layer_Opaque_vtx_1[30];
extern Gfx guardtower_room_0_dl_Crates_mesh_layer_Opaque_tri_1[];
extern Vtx guardtower_room_0_dl_Cylinder_mesh_layer_Opaque_vtx_cull[8];
extern Vtx guardtower_room_0_dl_Cylinder_mesh_layer_Opaque_vtx_0[69];
extern Gfx guardtower_room_0_dl_Cylinder_mesh_layer_Opaque_tri_0[];
extern Vtx guardtower_room_0_dl_Cylinder_mesh_layer_Opaque_vtx_1[23];
extern Gfx guardtower_room_0_dl_Cylinder_mesh_layer_Opaque_tri_1[];
extern Vtx guardtower_room_0_dl_Cylinder_mesh_layer_Opaque_vtx_2[60];
extern Gfx guardtower_room_0_dl_Cylinder_mesh_layer_Opaque_tri_2[];
extern Vtx guardtower_room_0_dl_Cylinder_mesh_layer_Opaque_vtx_3[12];
extern Gfx guardtower_room_0_dl_Cylinder_mesh_layer_Opaque_tri_3[];
extern Vtx guardtower_room_0_dl_Cylinder_mesh_layer_Opaque_vtx_4[4];
extern Gfx guardtower_room_0_dl_Cylinder_mesh_layer_Opaque_tri_4[];
extern Vtx guardtower_room_0_dl_Cylinder_mesh_layer_Opaque_vtx_5[8];
extern Gfx guardtower_room_0_dl_Cylinder_mesh_layer_Opaque_tri_5[];
extern Vtx guardtower_room_0_dl_Hay_mesh_layer_Opaque_vtx_cull[8];
extern Vtx guardtower_room_0_dl_Hay_mesh_layer_Opaque_vtx_0[56];
extern Gfx guardtower_room_0_dl_Hay_mesh_layer_Opaque_tri_0[];
extern Gfx mat_guardtower_room_0_dl_Crate_layerOpaque[];
extern Gfx mat_guardtower_room_0_dl_CrateTop_layerOpaque[];
extern Gfx mat_guardtower_room_0_dl_Bricks_layerOpaque[];
extern Gfx mat_guardtower_room_0_dl_Concrete_layerOpaque[];
extern Gfx mat_guardtower_room_0_dl_Wood1_layerOpaque[];
extern Gfx mat_guardtower_room_0_dl_WoodBeams_layerOpaque[];
extern Gfx mat_guardtower_room_0_dl_Exit_toRiver_layerOpaque[];
extern Gfx mat_guardtower_room_0_dl_IDunno_layerOpaque[];
extern Gfx mat_guardtower_room_0_dl_Straw_layerOpaque[];
extern Gfx guardtower_room_0_dl_Crates_mesh_layer_Opaque[];
extern Gfx guardtower_room_0_dl_Cylinder_mesh_layer_Opaque[];
extern Gfx guardtower_room_0_dl_Hay_mesh_layer_Opaque[];
extern RoomShapeNormal guardtower_room_0_shapeHeader;
extern RoomShapeDListsEntry guardtower_room_0_shapeDListsEntry[1];

#endif
