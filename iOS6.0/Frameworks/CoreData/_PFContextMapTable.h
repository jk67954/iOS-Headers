/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface _PFContextMapTable : NSObject
{
    unsigned int _slotLimit;
    struct __CFDictionary *_objectsByTemporaryID;
    struct __CFDictionary **_objectsByPermanentObjectID;
    struct __CFDictionary **_objectsBy64bitPKID;
    unsigned int *_capacitiesFor64bitPKMappings;
    struct _contextMapTableFlags {
        unsigned int _usesWeakReferences:1;
        unsigned int _garbageCollectionEnabled:1;
        unsigned int _reservedFlags:30;
    } _flags;
}

- (void)clearTemporaryIDs;
- (void)setCapacityHint:(unsigned int)arg1 forSlot:(unsigned int)arg2;
- (unsigned int)getAllObjects:(id *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_dispose;
- (void)setForUseWithModel:(id)arg1;
- (id)initWithWeaksReferences:(BOOL)arg1;

@end
