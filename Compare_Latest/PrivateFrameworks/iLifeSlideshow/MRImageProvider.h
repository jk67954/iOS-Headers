/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MRLoadable-Protocol.h"
#import "MRRenderable-Protocol.h"

@class MRAsset, MRImage, NSDictionary, NSInvocationOperation, NSLock, NSString;

@interface MRImageProvider : NSObject <MRLoadable, MRRenderable>
{
    NSString *mAssetPath;
    MRAsset *mAsset;
    struct CGSize mDefaultSize;
    NSString *mImageSizeScript;
    NSDictionary *mEffectAttributes;
    NSInvocationOperation *mPreloadOperation;
    NSLock *mPreloadOperationLock;
    MRImage *mOriginalImage;
    struct CGSize mOriginalImageSize;
    _Bool mIsLoaded;
    struct CGSize mRequestedSize;
    double mShowTime;
    double mShowDuration;
    struct CGSize mLastImageSize;
    double mLastTime;
    struct CGSize mLastDaSize;
    _Bool mNeedsToUpdate;
    _Bool mIsUpdatingLive;
    _Bool mNeedsToUnloadOnEndLiveUpdate;
    _Bool mIsMonochromatic;
    _Bool mUseMipmapping;
    _Bool mUsePowerOfTwo;
    _Bool mIsCleanedUp;
    _Bool mJustHoldIt;
}

@property(nonatomic) struct CGSize originalImageSize; // @synthesize originalImageSize=mOriginalImageSize;
@property(copy, nonatomic) NSString *assetPath; // @synthesize assetPath=mAssetPath;
@property(nonatomic) _Bool justHoldIt; // @synthesize justHoldIt=mJustHoldIt;
@property(readonly, nonatomic) struct CGSize requestedSize; // @synthesize requestedSize=mRequestedSize;
@property(nonatomic) double showDuration; // @synthesize showDuration=mShowDuration;
@property(nonatomic) double showTime; // @synthesize showTime=mShowTime;
@property(nonatomic) _Bool usePowerOfTwo; // @synthesize usePowerOfTwo=mUsePowerOfTwo;
@property(nonatomic) _Bool useMipmapping; // @synthesize useMipmapping=mUseMipmapping;
@property(nonatomic) _Bool isMonochromatic; // @synthesize isMonochromatic=mIsMonochromatic;
@property(readonly, nonatomic) _Bool isLoaded; // @synthesize isLoaded=mIsLoaded;
@property(retain, nonatomic) NSDictionary *effectAttributes; // @synthesize effectAttributes=mEffectAttributes;
@property(copy, nonatomic) NSString *imageSizeScript; // @synthesize imageSizeScript=mImageSizeScript;
@property(nonatomic) struct CGSize defaultSize; // @synthesize defaultSize=mDefaultSize;
- (id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (_Bool)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
@property(readonly, nonatomic) _Bool isInfinite;
@property(readonly, nonatomic) _Bool isAlphaFriendly;
@property(readonly, nonatomic) _Bool isOpaque;
@property(readonly, nonatomic) _Bool isNative3D;
- (void)cancelLoading;
- (void)unload;
- (void)loadTextureWithArguments:(id)arg1;
- (void)_loadTextureWithArguments:(id)arg1;
- (void)loadWithArguments:(id)arg1;
- (void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(_Bool)arg4;
- (_Bool)isLoadedForTime:(double)arg1;
- (_Bool)endLiveUpdate;
- (_Bool)beginLiveUpdate;
- (struct CGSize)imageSizeForAspectRatio:(float)arg1;
@property(readonly, nonatomic) float imageAspectRatio;
- (void)cleanup;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end
