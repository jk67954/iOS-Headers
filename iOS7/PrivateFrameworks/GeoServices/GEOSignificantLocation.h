/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEOLocation;

@interface GEOSignificantLocation : PBCodable
{
    GEOLocation *_location;
    unsigned int _locationIndex;
    struct {
        unsigned int locationIndex:1;
    } _has;
}

@property(nonatomic) unsigned int locationIndex; // @synthesize locationIndex=_locationIndex;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLocationIndex;
@property(readonly, nonatomic) BOOL hasLocation;
- (void)dealloc;

@end

