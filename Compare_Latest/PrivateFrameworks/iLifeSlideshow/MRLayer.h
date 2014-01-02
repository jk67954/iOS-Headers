/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MRLoadable-Protocol.h"
#import "MRRenderable-Protocol.h"

@class MCPlug, MCPlugHaven, MCPlugParallel, MCPlugSerial, MRAudioPlayer, MRLayerClock, MRRenderer, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface MRLayer : NSObject <MRLoadable, MRRenderable>
{
    MRLayer *mSuperlayer;
    MCPlug *mPlug;
    MCPlugSerial *mPlugAsSerial;
    MCPlugParallel *mPlugAsParallel;
    MCPlugHaven *mPlugAsHaven;
    NSString *mUUID;
    NSString *mIDInSupercontainer;
    unsigned long long mIndex;
    struct CGSize mPixelSize;
    double mTimeStamp;
    double mTimeIn;
    MRLayerClock *mClock;
    struct MRLayerRenderingStateOpaque *mRenderingState;
    NSMutableDictionary *mAnimationTriggers;
    NSMutableDictionary *mMotions;
    NSMutableDictionary *mPersistentState;
    NSMutableArray *mLayerCommandQueue;
    NSDictionary *mParameters;
    MRRenderer *mRenderer;
    MRAudioPlayer *mAudioPlayer;
    id mParentHelper;
    _Bool mIsPreactivated;
    _Bool mIsActivated;
    _Bool mOkToDeferKenBurns;
    _Bool mIsPrecomputing;
    _Bool mIsReadonly;
    _Bool mDoAudio;
    _Bool mIsSelected;
    _Bool mIsDimmed;
    _Bool mNeedsRendering;
    _Bool mNeedsToUpdateGeometry;
    _Bool mNeedsToUpdateInitialState;
    _Bool mNeedsToRequestRebuildAudio;
    _Bool mNeedsToRequestRebuildVolume;
    _Bool mNeedsToSynchronizeTime;
    _Bool mLayerCommandQueueNeedsAttention;
    _Bool mIsScheduledForDestruction;
    _Bool mSupportsAccumulation;
}

@property(nonatomic) _Bool needsToUpdateGeometry; // @synthesize needsToUpdateGeometry=mNeedsToUpdateGeometry;
@property(nonatomic) _Bool needsToSynchronizeTime; // @synthesize needsToSynchronizeTime=mNeedsToSynchronizeTime;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=mIndex;
@property(readonly) NSString *idInSupercontainer; // @synthesize idInSupercontainer=mIDInSupercontainer;
@property(retain) id parentHelper; // @synthesize parentHelper=mParentHelper;
@property(readonly) NSMutableDictionary *motions; // @synthesize motions=mMotions;
@property(readonly) NSDictionary *animationTriggers; // @synthesize animationTriggers=mAnimationTriggers;
@property(readonly) NSDictionary *persistentState; // @synthesize persistentState=mPersistentState;
@property(readonly, nonatomic) _Bool isScheduledForDestruction; // @synthesize isScheduledForDestruction=mIsScheduledForDestruction;
@property(readonly, nonatomic) _Bool supportsAccumulation; // @synthesize supportsAccumulation=mSupportsAccumulation;
@property(readonly, nonatomic) double timeStamp; // @synthesize timeStamp=mTimeStamp;
@property(nonatomic) _Bool isDimmed; // @synthesize isDimmed=mIsDimmed;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=mIsSelected;
@property(readonly, nonatomic) _Bool isPreactivated; // @synthesize isPreactivated=mIsPreactivated;
@property(readonly, nonatomic) _Bool isActivated; // @synthesize isActivated=mIsActivated;
@property(nonatomic) double timeIn; // @synthesize timeIn=mTimeIn;
@property(readonly) NSDictionary *parameters; // @synthesize parameters=mParameters;
@property(readonly) NSString *uuid; // @synthesize uuid=mUUID;
@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=mPixelSize;
@property(readonly) MCPlugHaven *plugAsHaven; // @synthesize plugAsHaven=mPlugAsHaven;
@property(readonly) MCPlugParallel *plugAsParallel; // @synthesize plugAsParallel=mPlugAsParallel;
@property(readonly) MCPlugSerial *plugAsSerial; // @synthesize plugAsSerial=mPlugAsSerial;
@property(readonly) MCPlug *plug; // @synthesize plug=mPlug;
@property(readonly) MRLayer *superlayer; // @synthesize superlayer=mSuperlayer;
- (id)_dumpLayerWithOptions:(unsigned long long)arg1;
- (id)_currentState;
- (void)_rebuildAudio;
- (_Bool)_setStateValue:(id)arg1 forKey:(id)arg2;
- (void)_sendAction:(id)arg1 withStates:(id)arg2 async:(_Bool)arg3 yesterday:(_Bool)arg4;
- (void)_updateStateWithContext:(id)arg1;
- (double)doGenericAction:(id)arg1;
- (double)doMotionTrigger:(id)arg1;
- (double)doStateOperation:(id)arg1;
- (double)doActionTrigger:(id)arg1;
- (double)doAnimationTrigger:(id)arg1;
- (id)actionForKey:(id)arg1 recursive:(_Bool)arg2;
- (id)actionHitAtPoint:(struct CGPoint)arg1 layer:(id *)arg2;
- (void)_applyState:(id)arg1;
- (struct CGPoint)convertGlobalPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertLocalPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool hasAudio;
- (void)scheduleForDestruction;
- (void)stampTime;
@property(readonly, nonatomic) _Bool supportsDynamicExpansion;
- (id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (id)__retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (_Bool)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_setScissorRectOnContext:(id)arg1 saveTo:(int *)arg2;
- (_Bool)isFlatAndSquare;
@property(readonly, nonatomic) _Bool isAlphaFriendly;
@property(readonly, nonatomic) _Bool isInfinite;
@property(readonly, nonatomic) _Bool isOpaque;
@property(readonly, nonatomic) _Bool isNative3D;
- (void)cancelLoading;
- (void)unload;
- (void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(_Bool)arg4;
- (_Bool)isLoadedForTime:(double)arg1;
- (_Bool)isActivatedAtTime:(double)arg1;
- (_Bool)isPreactivatedAtTime:(double)arg1;
- (void)depreactivate:(_Bool)arg1;
- (void)deactivate;
- (void)activate;
- (void)preactivate;
@property(nonatomic) double duration;
- (void)endMorphing;
- (void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2;
- (void)synchronizeTime;
- (void)resumeOrPause:(_Bool)arg1;
- (_Bool)hasSomethingToRender;
- (void)updateGeometry;
@property(readonly) struct MRLayerRenderingStateOpaque *renderingState;
@property(readonly) MRLayerClock *clock;
- (void)setNeedsUpdateForPluggerOfSublayer:(id)arg1;
- (id)sublayerForPrecomputingWithPlug:(id)arg1;
- (id)sublayerWithPlug:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cleanup;
- (void)finalize;
- (void)dealloc;
- (id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3;

@end
