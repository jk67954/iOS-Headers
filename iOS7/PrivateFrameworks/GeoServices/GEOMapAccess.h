/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOMapRequestManager.h>

@class NSObject<OS_dispatch_queue>;

@interface GEOMapAccess : GEOMapRequestManager
{
    unsigned int _zoomLevel;
    int _tileSize;
    int _tileScale;
    int _tileStyle;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <GEOMapAccessRestrictions> _restrictions;
    id _tileErrorHandler;
}

+ (id)realisticMap;
+ (BOOL)supportsRealisticMap;
@property(copy, nonatomic) id tileErrorHandler; // @synthesize tileErrorHandler=_tileErrorHandler;
@property(nonatomic) id <GEOMapAccessRestrictions> restrictions; // @synthesize restrictions=_restrictions;
@property(readonly, nonatomic) int tileStyle; // @synthesize tileStyle=_tileStyle;
@property(readonly, nonatomic) int tileScale; // @synthesize tileScale=_tileScale;
@property(readonly, nonatomic) int tileSize; // @synthesize tileSize=_tileSize;
@property(readonly, nonatomic) unsigned int zoomLevel; // @synthesize zoomLevel=_zoomLevel;
- (id)buildMapEdgeFrom:(const CDStruct_b4689c16 *)arg1 edgeHandler:(id)arg2;
- (id)findTilesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 tileHander:(id)arg3 completionHandler:(void)arg4;
- (id)findEdgesWithin:(double)arg1 of:(CDStruct_c3b9c2ee)arg2 edgeHandler:(id)arg3 completionHandler:(void)arg4;
- (id)findClosestRoadAtCoordinate:(CDStruct_c3b9c2ee)arg1 roadHandler:(id)arg2 completionHandler:(void)arg3;
- (id)findClosestNamedFeaturesAtCoordinate:(CDStruct_c3b9c2ee)arg1 roadHandler:(id)arg2 pointHandler:(void)arg3 polygonHandler:(id)arg4 completionHandler:(void)arg5;
@property(readonly, nonatomic) BOOL allowsNetworkTileLoad;
- (void)setCallbackQueue:(id)arg1;
- (id)callbackQueue;
- (void)dealloc;
- (id)initWithZoomLevel:(unsigned int)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileStyle:(int)arg4;

@end

