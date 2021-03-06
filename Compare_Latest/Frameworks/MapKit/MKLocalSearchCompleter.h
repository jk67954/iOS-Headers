/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKSearchCompleter.h>

@class GEOSearchRequest, NSArray, NSTimer;

@interface MKLocalSearchCompleter : MKSearchCompleter
{
    double _lastRequestTime;
    BOOL _dirty;
    NSArray *_results;
    NSTimer *_timer;
    GEOSearchRequest *_request;
}

+ (void)initialize;
- (id)results;
- (void)retry;
- (void)cancel;
- (void)_cancelRequest;
- (void)_cancelTimer;
- (BOOL)resultsAreCurrent;
- (BOOL)isSearching;
- (void)setBoundingRegion:(CDStruct_90e2a262)arg1;
- (void)setFragment:(id)arg1;
- (void)_markDirty;
- (BOOL)_canRequestNow;
- (void)_fireRequest;
- (void)_handleError:(id)arg1 forRequest:(id)arg2;
- (void)_handleResponse:(id)arg1 forRequest:(id)arg2;
- (void)dealloc;
- (id)init;

@end

