/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKAnnotationView.h>

#import "VKPuckAnimatorTarget-Protocol.h"

@class CALayer, MKAccuracyUserLocationMarker;

@interface MKUserLocationView : MKAnnotationView <VKPuckAnimatorTarget>
{
    MKAccuracyUserLocationMarker *_marker;
    int _zoomDirection;
    CALayer *_pulseLayer;
    BOOL _allowsPulse;
    BOOL _shouldPulse;
    BOOL _shouldDisplayHeading;
    double _headingAccuracy;
    CALayer *_headingLayer;
}

+ (unsigned int)_selectedZIndex;
+ (unsigned int)_zIndex;
+ (float)accuracyDiameter:(float)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double headingAccuracy; // @synthesize headingAccuracy=_headingAccuracy;
@property(nonatomic) BOOL shouldDisplayHeading; // @synthesize shouldDisplayHeading=_shouldDisplayHeading;
@property(nonatomic) BOOL allowsPulse; // @synthesize allowsPulse=_allowsPulse;
@property(nonatomic) int zoomDirection; // @synthesize zoomDirection=_zoomDirection;
- (void)setAnimatingToCoordinate:(BOOL)arg1;
@property(nonatomic) double presentationCourse;
- (void)setPresentationCoordinate:(CDStruct_c3b9c2ee)arg1;
- (BOOL)_tracking;
- (void)_setTracking:(BOOL)arg1;
- (void)setZoomDirection:(int)arg1 deltaScale:(float)arg2;
- (void)_setPresentationCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)_setAnimatingToCoordinate:(BOOL)arg1;
- (id)_vkMarker;
- (void)tintColorDidChange;
- (void)_updateLayers;
- (void)locationManagerFailedToUpdateLocation;
- (void)updateStateFromLocation:(id)arg1 duration:(double)arg2;
- (struct CGRect)maximumBoundingRectWithCanvasSize:(struct CGSize)arg1;
@property(nonatomic, getter=isEffectsEnabled) BOOL effectsEnabled;
@property(nonatomic) float opacity;
@property(nonatomic) int locationSource;
@property(readonly, nonatomic) double locationAccuracy;
- (void)_updateHeadingLayer;
- (struct UIImage *)_headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint *)arg2;
- (id)_baseLayer;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic, getter=isStale) BOOL stale;
- (struct CGRect)_mapkit_visibleRect;
@property(nonatomic) BOOL allowsAccuracyRing;
- (void)didMoveToWindow;
- (void)_updatePulse;
- (void)_pausePulse;
- (void)_resumePulse;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (void)_updatePulseColorMatrix;
- (id)_pulseTintColor;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)init;

@end

