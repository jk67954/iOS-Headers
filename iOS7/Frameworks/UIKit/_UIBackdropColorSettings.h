/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class _UIBackdropViewSettings;

@interface _UIBackdropColorSettings : NSObject
{
    float _averageHue;
    float _averageSaturation;
    float _averageBrightness;
    float _contrast;
    _UIBackdropViewSettings *_parentSettings;
    float _previousAverageHue;
    float _previousAverageSaturation;
    float _previousAverageBrightness;
    float _previousContrast;
}

@property(nonatomic) float previousContrast; // @synthesize previousContrast=_previousContrast;
@property(nonatomic) float previousAverageBrightness; // @synthesize previousAverageBrightness=_previousAverageBrightness;
@property(nonatomic) float previousAverageSaturation; // @synthesize previousAverageSaturation=_previousAverageSaturation;
@property(nonatomic) float previousAverageHue; // @synthesize previousAverageHue=_previousAverageHue;
@property(nonatomic) _UIBackdropViewSettings *parentSettings; // @synthesize parentSettings=_parentSettings;
@property(nonatomic) float contrast; // @synthesize contrast=_contrast;
@property(nonatomic) float averageBrightness; // @synthesize averageBrightness=_averageBrightness;
@property(nonatomic) float averageSaturation; // @synthesize averageSaturation=_averageSaturation;
@property(nonatomic) float averageHue; // @synthesize averageHue=_averageHue;
- (BOOL)applyCABackdropLayerStatistics:(id)arg1;
- (void)setValuesFromModel:(id)arg1;
- (void)setDefaultValues;

@end

