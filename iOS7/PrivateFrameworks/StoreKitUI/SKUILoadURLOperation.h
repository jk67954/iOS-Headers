/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSCachedURLResponse, NSHTTPURLResponse, NSMutableData, NSObject<OS_dispatch_queue>, NSRunLoop, NSURL, NSURLRequest, SKUIDataConsumer, SSMetricsPageEvent;

@interface SKUILoadURLOperation : NSOperation <NSURLConnectionDelegate>
{
    NSMutableData *_dataBuffer;
    SKUIDataConsumer *_dataConsumer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id _expiredOutputBlock;
    BOOL _iTunesStoreRequest;
    SSMetricsPageEvent *_metricsPageEvent;
    id _outputBlock;
    BOOL _recordsMetrics;
    NSHTTPURLResponse *_response;
    NSRunLoop *_runLoop;
    BOOL _stopped;
    NSURLRequest *_urlRequest;
}

- (void).cxx_destruct;
- (void)_stopRunLoop;
- (void)_stopIfCancelled;
- (long)_runRunLoopUntilStopped;
- (id)_outputForData:(id)arg1 error:(id *)arg2;
- (id)_newURLRequest;
- (void)_keepAliveTimer:(id)arg1;
- (void)_finishWithData:(id)arg1;
- (void)_applyResponseToMetrics:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)main;
- (void)cancel;
@property(readonly) NSURLRequest *URLRequest;
@property(readonly) NSURL *URL;
@property BOOL recordsMetrics;
@property(copy) id outputBlock;
@property(getter=isITunesStoreRequest) BOOL ITunesStoreRequest;
@property(copy) id expiredOutputBlock;
@property(retain) SKUIDataConsumer *dataConsumer;
@property(readonly) SSMetricsPageEvent *metricsPageEvent;
- (void)dispatchSync:(id)arg1;
- (void)dispatchAsync:(id)arg1;
@property(readonly) NSCachedURLResponse *cachedURLResponse;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

