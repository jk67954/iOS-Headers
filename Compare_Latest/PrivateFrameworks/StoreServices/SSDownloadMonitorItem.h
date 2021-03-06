/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SSXPCCoding-Protocol.h"

@class NSString;

@interface SSDownloadMonitorItem : NSObject <SSXPCCoding>
{
    NSString *_clientIdentifier;
    int _itemState;
    NSString *_representativeTitle;
    NSString *_statusString;
    int _totalNumberOfItems;
    unsigned int _transferTypes;
}

@property(nonatomic) unsigned int transferTypes; // @synthesize transferTypes=_transferTypes;
@property(nonatomic) int totalNumberOfItems; // @synthesize totalNumberOfItems=_totalNumberOfItems;
@property(copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(copy, nonatomic) NSString *representativeTitle; // @synthesize representativeTitle=_representativeTitle;
@property(nonatomic) int itemState; // @synthesize itemState=_itemState;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)dealloc;

@end

