/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface CLRegion : NSObject <NSCopying, NSCoding>
{
    id _internal;
}

- (BOOL)containsCoordinate:(CDStruct_2c43369c)arg1;
- (id)description;
@property(readonly, nonatomic) CDStruct_076ea9f1 clientRegion;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) double radius;
@property(readonly, nonatomic) CDStruct_2c43369c center;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initCircularRegionWithCenter:(CDStruct_2c43369c)arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithClientRegion:(CDStruct_076ea9f1)arg1;

@end

