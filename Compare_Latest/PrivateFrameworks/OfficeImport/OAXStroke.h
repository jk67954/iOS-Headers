/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface OAXStroke : NSObject
{
}

+ (id)readStrokeFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (id)readCustomDashFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readPresetDashFromXmlNode:(struct _xmlNode *)arg1;
+ (void)readLineEnd:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2;
+ (id)presetDashEnumMap;
+ (id)lineEndLengthEnumMap;
+ (id)lineEndWidthEnumMap;
+ (id)lineEndTypeEnumMap;
+ (id)penAlignmentEnumMap;
+ (id)lineCapEnumMap;
+ (id)compoundLineEnumMap;

@end

