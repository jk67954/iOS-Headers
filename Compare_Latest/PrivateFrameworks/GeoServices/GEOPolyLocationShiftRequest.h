/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

@class GEOLatLng;

@interface GEOPolyLocationShiftRequest : PBRequest
{
    GEOLatLng *_location;
}

@property(retain, nonatomic) GEOLatLng *location; // @synthesize location=_location;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;
- (CDStruct_c3b9c2ee)coordinate;

@end

