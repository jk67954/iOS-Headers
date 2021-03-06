/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ALAssetsLibrary, AVAssetImageGenerator;

@interface SLSheetPreviewImageSource : NSObject
{
    ALAssetsLibrary *_assetsLibrary;
    AVAssetImageGenerator *_assetImageGenerator;
}

- (void).cxx_destruct;
- (void)cancelVideoPreviewGeneration;
- (void)_generatePreviewImageForVideoFileURL:(id)arg1 resultBlock:(id)arg2;
- (void)_generatePreviewImageForAttachment:(id)arg1 resultBlock:(id)arg2;
- (void)_fetchPreviewImageForAssetURL:(id)arg1 resultBlock:(id)arg2;
- (void)previewImageForAttachment:(id)arg1 resultBlock:(id)arg2;
@property(readonly) ALAssetsLibrary *assetsLibrary;

@end

