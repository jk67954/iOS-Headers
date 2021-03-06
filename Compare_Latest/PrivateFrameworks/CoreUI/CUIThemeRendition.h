/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString;

@interface CUIThemeRendition : NSObject
{
    struct _renditionkeytoken stackKey[16];
    struct _renditionkeytoken *key;
    int type;
    unsigned int subtype;
    unsigned int scale;
    struct {
        unsigned int isHeaderFlaggedFPO:1;
        unsigned int isExcludedFromContrastFilter:1;
        unsigned int reserved:30;
    } renditionFlags;
    int artworkStatus;
    unsigned int colorSpaceID;
    NSString *name;
    NSData *srcData;
    int validLookGradation;
    float opacity;
    int blendMode;
}

+ (id)displayNameForRenditionType:(int)arg1;
+ (id)filteredCSIDataFromBaseCSIData:(id)arg1;
+ (Class)renditionClassForRenditionType:(int)arg1;
@property(nonatomic) int blendMode; // @synthesize blendMode;
@property(nonatomic) float opacity; // @synthesize opacity;
- (unsigned short)valueForTokenIdentifier:(unsigned short)arg1;
- (id)effectPreset;
- (unsigned int)subtype;
- (unsigned int)gradientStyle;
- (id)gradient;
- (float)gradientDrawingAngle;
- (BOOL)isScaled;
- (BOOL)isTiled;
- (id)sliceInformation;
- (id)metrics;
- (float)scale;
- (id)maskForSliceIndex:(int)arg1;
- (id)imageForSliceIndex:(int)arg1;
- (struct CGImage *)unslicedImage;
- (id)description;
- (BOOL)isValidForLookGradation:(int)arg1;
- (unsigned int)colorSpaceID;
- (int)artworkStatus;
- (BOOL)isHeaderFlaggedFPO;
- (id)name;
- (int)type;
- (const struct _renditionkeytoken *)key;
- (void)dealloc;
- (id)_initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(int)arg3;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(int)arg3;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;
- (void)_initializeRenditionKey:(const struct _renditionkeytoken *)arg1;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (void)_initializeCompositingOptionsFromCSIData:(const struct _csiheader *)arg1;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1;

@end

