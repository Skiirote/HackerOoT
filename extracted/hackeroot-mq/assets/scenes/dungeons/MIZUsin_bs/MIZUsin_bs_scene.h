#ifndef MIZUSIN_BS_SCENE_H
#define MIZUSIN_BS_SCENE_H 1

extern SceneCmd MIZUsin_bs_sceneCommands[];
extern ActorEntry MIZUsin_bs_sceneStartPositionList0x000060[];
extern TransitionActorEntry MIZUsin_bs_sceneTransitionActorList_000070[];
extern RomFile MIZUsin_bs_sceneRoomList0x000080[];
extern Spawn MIZUsin_bs_sceneEntranceList0x000090[];
extern u16 MIZUsin_bs_sceneExitList_000094[];
extern EnvLightSettings MIZUsin_bs_sceneLightSettings0x000098[];
extern BgCamInfo MIZUsin_bs_sceneCollisionHeader_001A34CamDataList[];
extern SurfaceType MIZUsin_bs_sceneCollisionHeader_001A34SurfaceType[];
extern CollisionPoly MIZUsin_bs_sceneCollisionHeader_001A34Polygons[];
extern Vec3s MIZUsin_bs_sceneCollisionHeader_001A34Vertices[];
extern WaterBox MIZUsin_bs_sceneCollisionHeader_001A34WaterBoxes[];
extern CollisionHeader MIZUsin_bs_sceneCollisionHeader_001A34;
#endif
