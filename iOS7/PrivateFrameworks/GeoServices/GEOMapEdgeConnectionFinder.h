/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder, NSMutableArray;

@interface GEOMapEdgeConnectionFinder : GEOMapRequest
{
    GEOMapAccess *_map;
    GEOMapTileFinder *_tileFinder;
    NSMutableArray *_builders;
    CDStruct_b4689c16 _edgeFrom;
    CDStruct_2c43369c _coordinateFrom;
}

- (id).cxx_construct;
- (void)findConnections:(id)arg1;
- (void)_findOutgoingEdges:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithMap:(id)arg1 edgeFrom:(const CDStruct_b4689c16 *)arg2 coordinateFrom:(CDStruct_c3b9c2ee)arg3;

@end

