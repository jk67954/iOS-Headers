/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CADisplayLink, NSObject<OS_dispatch_queue>, NSTimer;

@interface SKDisplayLink : NSObject
{
    NSTimer *_timer;
    CADisplayLink *_caDisplayLink;
    unsigned int _mode;
    BOOL _paused;
    BOOL _asynchronous;
    int _frameInterval;
    double _previousFrameTime;
    id _block;
    NSObject<OS_dispatch_queue> *_queue;
    float _averageFrameTime;
    int _frameCount;
    double _frameCountBeginTime;
    unsigned int _maxQueuedFrameCount;
}

+ (id)displayLinkWithBlock:(id)arg1 queue:(void)arg2;
@property unsigned int maxQueuedFrameCount; // @synthesize maxQueuedFrameCount=_maxQueuedFrameCount;
- (void).cxx_destruct;
- (void)_nsTimerCallback;
- (void)_caDisplayLinkCallback;
- (void)dealloc;
- (void)_callbackForNextFrame:(double)arg1;
- (void)_restart;
- (void)_teardown;
- (void)_start;
- (void)_setup;
@property(nonatomic) unsigned int mode;
@property(nonatomic) int frameInterval;
@property(nonatomic, getter=isPaused) BOOL paused;
@property(nonatomic) BOOL asynchronous;
- (id)init;
- (id)initWithBlock:(id)arg1 queue:(void)arg2;

@end

