/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKVectorMapModel.h>

#import "VKMapLayer-Protocol.h"
#import "VKMercatorTerrainHeightProvider-Protocol.h"

@class VGLRenderState, VKAnimation, VKMercatorTerrainHeightCache, VKSkyModel;

@interface VKBuildingFootprintMapModel : VKVectorMapModel <VKMercatorTerrainHeightProvider, VKMapLayer>
{
    struct _VGLColor _topColor;
    struct _VGLColor _facadeColor;
    struct _VGLColor _landmarkColor;
    struct _VGLColor _flatColor;
    struct _VGLColor _pointyFacadeColor;
    struct _VGLColor _pointyTopColor;
    float _brightness;
    int _vectorType;
    int _buildingMode;
    VKAnimation *_styleChangeAnimation;
    VKAnimation *_fadeBuildingAnimation;
    float _buildingOccluderAlpha;
    BOOL _fadeTiles;
    VKSkyModel *_skyModel;
    struct _VGLColor _footprintStrokeColor;
    float _footprintStrokeWidth;
    struct _VGLColor _3DStrokeColor;
    float _3DStrokeWidth;
    double _nearDistance;
    double _farDistance;
    struct unordered_map<VKVectorTile *, OccluderGroupList, std::__1::hash<VKVectorTile *>, std::__1::equal_to<VKVectorTile *>, vk_allocator<std::__1::pair<VKVectorTile *const, OccluderGroupList>>> _currentOccluders;
    struct unordered_map<VKVectorTile *, OccluderGroupList, std::__1::hash<VKVectorTile *>, std::__1::equal_to<VKVectorTile *>, vk_allocator<std::__1::pair<VKVectorTile *const, OccluderGroupList>>> _previousOccluders;
    VGLRenderState *_renderState;
    float _minLayeringHeight;
    float _maxLayeringHeight;
    _Bool _shouldDraw3DBuildingsInVectorBuildingsRenderPass;
    _Bool _shouldDraw3DBuildingsIn3DBuildingsRenderPass;
    BOOL _initializedStyles;
    VKMercatorTerrainHeightCache *_heightCache;
}

@property(retain, nonatomic) VKSkyModel *skyModel; // @synthesize skyModel=_skyModel;
@property(nonatomic) int buildingMode; // @synthesize buildingMode=_buildingMode;
@property(readonly, nonatomic) VKMercatorTerrainHeightCache *heightCache; // @synthesize heightCache=_heightCache;
@property(nonatomic) BOOL fadeTiles; // @synthesize fadeTiles=_fadeTiles;
@property(nonatomic) int vectorType; // @synthesize vectorType=_vectorType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setBuildingMode:(int)arg1 animated:(BOOL)arg2;
- (void)drawDebugScene:(id)arg1 withContext:(id)arg2;
- (void)drawScene:(id)arg1 withContext:(id)arg2 pass:(unsigned int)arg3;
- (void)draw3DBuildingStrokesInScene:(id)arg1 withContext:(id)arg2;
- (void)drawFootprintsInScene:(id)arg1 withContext:(id)arg2;
- (void)draw3DBuildingShadowsInScene:(id)arg1 withContext:(id)arg2;
- (void)draw3DBuildingsInScene:(id)arg1 withContext:(id)arg2 passes:(unsigned int)arg3;
- (void)draw2DBuildingsInScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (void)reset;
- (BOOL)wantsCategorizedSourceTiles;
- (double)heightAtPoint:(struct VKPoint)arg1;
- (void)removePersistingExitingTiles:(id)arg1;
- (void)willStopDrawingTiles:(id)arg1;
- (void)willStartDrawingTiles:(id)arg1;
- (double)maxTileHeightAtPoint:(struct VKPoint)arg1;
- (void)stylesheetDidChange;
- (void)_updateStyles;
- (id)_globalPointyBuildingDrawStyle;
- (id)_globalBuildingDrawStyle;
- (void)vectorTypeDidChange;
- (void)setActive:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)supportedRenderPasses;
- (unsigned int)mapLayerPosition;
- (void)_clearOccluders;

@end

