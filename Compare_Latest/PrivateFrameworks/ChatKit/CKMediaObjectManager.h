/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKMediaObjectManager : NSObject
{
    NSMutableDictionary *_transfers;
    NSArray *_classes;
    NSDictionary *_UTITypes;
    NSDictionary *_dynTypes;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *dynTypes; // @synthesize dynTypes=_dynTypes;
@property(copy, nonatomic) NSDictionary *UTITypes; // @synthesize UTITypes=_UTITypes;
@property(copy, nonatomic) NSArray *classes; // @synthesize classes=_classes;
@property(retain, nonatomic) NSMutableDictionary *transfers; // @synthesize transfers=_transfers;
- (void)transferRemoved:(id)arg1;
- (Class)transferClass;
- (id)imageDataWithData:(id)arg1;
- (id)fileManager;
- (id)transferWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2;
- (id)transferWithTransferGUID:(id)arg1 message:(id)arg2;
- (id)mediaObjectWithPasteboard:(id)arg1 itemAtIndex:(unsigned int)arg2;
- (id)mediaObjectWithFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3;
- (id)mediaObjectWithData:(id)arg1 UTIType:(id)arg2 filename:(id)arg3 transcoderUserInfo:(id)arg4;
- (id)mediaObjectWithTransferGUID:(id)arg1 message:(id)arg2;
- (Class)classForFilename:(id)arg1;
- (Class)classForUTIType:(id)arg1;
- (id)UTITypeForFilename:(id)arg1;
- (id)UTITypeForExtension:(id)arg1;
- (id)init;
- (void)dealloc;

@end

