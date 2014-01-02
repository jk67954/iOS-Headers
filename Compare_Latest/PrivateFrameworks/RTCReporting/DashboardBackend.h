/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <RTCReporting/RTCReportingBackEnd.h>

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface DashboardBackend : RTCReportingBackEnd
{
    int _socketDescriptor;
    NSMutableArray *_messageQueue;
    _Bool _reliableUDP;
    _Bool _usingProfile;
    NSObject<OS_dispatch_queue> *_networkProcQueue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_timer;
    int _cleanupState;
}

- (id)sendMsgOfType:(int)arg1 method:(unsigned short)arg2 respCode:(unsigned short)arg3 eventID:(unsigned short)arg4 dict:(id)arg5;
- (void)dealloc;
- (void)cleanup;
- (id)initWithName:(id)arg1 profile:(id)arg2;
- (id)initWithName:(id)arg1 serverIP:(id)arg2 serverPort:(unsigned short)arg3;
- (id)initWithName:(id)arg1 profile:(id)arg2 serverIP:(id)arg3 serverPort:(unsigned short)arg4;

@end
