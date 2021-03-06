/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MKMapViewDelegate-Protocol.h"

@class MKMapSnapshotRequest, NSLock, NSMutableArray, NSString, UIImage;

@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate>
{
    UIImage *_lastSnapshot;
    NSString *_lastAttributionString;
    NSLock *_requestLock;
    NSMutableArray *_requests;
    MKMapSnapshotRequest *_servingRequest;
}

@property(retain, nonatomic) MKMapSnapshotRequest *servingRequest; // @synthesize servingRequest=_servingRequest;
- (void)createSnapShotWithCoordinate:(CDStruct_c3b9c2ee)arg1 zoomLevel:(unsigned int)arg2 size:(struct CGSize)arg3 handler:(id)arg4;
- (void)flushRequestQueue;
- (void)didDisplaySnapShotWithCoordinate:(CDStruct_c3b9c2ee)arg1 zoomLevel:(unsigned int)arg2 size:(struct CGSize)arg3;
- (id)recreateCurrentSnapshotWithRequester:(id)arg1 context:(id)arg2;
- (void)createSnapShotWithCoordinate:(CDStruct_c3b9c2ee)arg1 zoomLevel:(unsigned int)arg2 size:(struct CGSize)arg3 requester:(id)arg4 context:(id)arg5;
- (void)_respondWithSnapshot;
- (id)_newSnapshotWithView:(id)arg1;
- (void)_processRequest;
- (void)dealloc;
- (id)init;

@end

