/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSMutableData, NSURLConnection, NSURLResponse;

@interface _GEONSURLConnectionWaiter : NSObject <NSURLConnectionDelegate>
{
    NSURLConnection *_conn;
    id _callback;
    NSMutableData *_data;
    NSURLResponse *_response;
}

@property(retain, nonatomic) NSURLConnection *conn; // @synthesize conn=_conn;
@property(copy, nonatomic) id callback; // @synthesize callback=_callback;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)dealloc;

@end

