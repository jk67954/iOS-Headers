/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIKBGradient, UIKBRenderGeometry, UIKBTextStyle;

// Not exported
@interface UIKBRenderTraits : NSObject <NSCopying>
{
    NSMutableArray *_renderEffects;
    _Bool _honorControlOpacity;
    _Bool _controlOpacities;
    UIKBRenderGeometry *_geometry;
    UIKBGradient *_backgroundGradient;
    UIKBGradient *_layeredBackgroundGradient;
    UIKBGradient *_layeredForegroundGradient;
    UIKBTextStyle *_symbolStyle;
    UIKBTextStyle *_secondarySymbolStyle;
    UIKBTextStyle *_fallbackSymbolStyle;
    NSArray *_variantGeometries;
    UIKBRenderTraits *_variantTraits;
    UIKBRenderTraits *_highlightedVariantTraits;
    double _forceOpacity;
    NSString *_hashString;
}

+ (id)traitsWithSymbolStyle:(id)arg1;
+ (id)traitsWithGeometry:(id)arg1;
+ (id)emptyTraits;
@property(retain, nonatomic) NSString *hashString; // @synthesize hashString=_hashString;
@property(nonatomic) double forceOpacity; // @synthesize forceOpacity=_forceOpacity;
@property(nonatomic) _Bool controlOpacities; // @synthesize controlOpacities=_controlOpacities;
@property(retain, nonatomic) UIKBRenderTraits *highlightedVariantTraits; // @synthesize highlightedVariantTraits=_highlightedVariantTraits;
@property(retain, nonatomic) UIKBRenderTraits *variantTraits; // @synthesize variantTraits=_variantTraits;
@property(retain, nonatomic) NSArray *variantGeometries; // @synthesize variantGeometries=_variantGeometries;
@property(readonly, nonatomic) NSArray *renderEffects; // @synthesize renderEffects=_renderEffects;
@property(retain, nonatomic) UIKBTextStyle *fallbackSymbolStyle; // @synthesize fallbackSymbolStyle=_fallbackSymbolStyle;
@property(retain, nonatomic) UIKBTextStyle *secondarySymbolStyle; // @synthesize secondarySymbolStyle=_secondarySymbolStyle;
@property(retain, nonatomic) UIKBTextStyle *symbolStyle; // @synthesize symbolStyle=_symbolStyle;
@property(retain, nonatomic) UIKBGradient *layeredForegroundGradient; // @synthesize layeredForegroundGradient=_layeredForegroundGradient;
@property(retain, nonatomic) UIKBGradient *layeredBackgroundGradient; // @synthesize layeredBackgroundGradient=_layeredBackgroundGradient;
@property(retain, nonatomic) UIKBGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(retain, nonatomic) UIKBRenderGeometry *geometry; // @synthesize geometry=_geometry;
- (void)modifyForMasking;
- (void)overlayWithTraits:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (void)removeAllRenderEffects;
- (void)addRenderEffect:(id)arg1;

@end
