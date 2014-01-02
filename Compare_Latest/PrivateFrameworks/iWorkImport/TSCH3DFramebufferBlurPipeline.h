/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DLinkablePipeline.h>

@class TSCH3DGLFramebuffer;

// Not exported
@interface TSCH3DFramebufferBlurPipeline : TSCH3DLinkablePipeline
{
    id <TSCH3DPipelineLinkable> mSource;
    TSCH3DGLFramebuffer *mTarget;
    TSCH3DGLFramebuffer *mPingpong;
    unsigned long long mRadius;
    unsigned long long mNumPasses;
    float mKernelScale;
}

@property(nonatomic) float kernelScale; // @synthesize kernelScale=mKernelScale;
@property(nonatomic) unsigned long long numPasses; // @synthesize numPasses=mNumPasses;
@property(nonatomic) unsigned long long radius; // @synthesize radius=mRadius;
@property(readonly, nonatomic) TSCH3DGLFramebuffer *target; // @synthesize target=mTarget;
@property(retain, nonatomic) id <TSCH3DPipelineLinkable> source; // @synthesize source=mSource;
- (_Bool)run;
- (_Bool)blur;
- (void)dealloc;
- (id)initWithProcessor:(id)arg1 session:(id)arg2;
- (id)pingPongFBOResource;

@end
