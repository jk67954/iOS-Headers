/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIFoundation/NSTextStorage.h>

#import "NSLayoutManagerDelegate-Protocol.h"

@class NSConcreteNotifyingMutableAttributedString, NSDictionary, NSLayoutManager, NSTextContainer;

@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate>
{
    NSConcreteNotifyingMutableAttributedString *_contents;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    id _preliminaryCache;
    id _cache;
    NSTextContainer *_firstTextContainer;
    NSTextContainer *_secondTextContainer;
    struct _NSRange _currentCharacterRange;
    struct _NSRange _currentGlyphRange;
    struct _NSRange _temporaryCharacterRange;
    unsigned int _retainCount;
    float _baselineDelta;
    struct {
        unsigned int _typesetterBehavior:4;
        unsigned int _needToFlushCache:1;
        unsigned int _baselineMode:1;
        unsigned int _truncatesLastVisibleLine:1;
        unsigned int _forceWordWrapping:1;
        unsigned int _reserved:24;
    } _sdflags;
    NSDictionary *_styledTextOptions;
}

+ (void)_setHasCustomSettings:(BOOL)arg1;
+ (BOOL)_fastDrawString:(id)arg1 attributes:(id)arg2 length:(long)arg3 inRect:(struct CGRect)arg4 graphicsContext:(struct CGContext *)arg5 baselineRendering:(BOOL)arg6 usesFontLeading:(BOOL)arg7 usesScreenFont:(BOOL)arg8 typesetterBehavior:(int)arg9 paragraphStyle:(id)arg10 lineBreakMode:(int)arg11 boundingRect:(struct CGRect *)arg12 padding:(float)arg13 scrollable:(_Bool)arg14 baselineOffset:(float *)arg15;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)stringDrawingTextStorage;
+ (void)initialize;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (unsigned int)length;
- (void)processEditing;
- (id)init;
- (BOOL)_isStringDrawingTextStorage;
- (void)fontSetChanged;
- (void)invalidate;
- (id)textContainerForAttributedString:(id)arg1 containerSize:(struct CGSize)arg2 lineFragmentPadding:(float)arg3;
- (id)textContainerForAttributedString:(id)arg1;
- (struct CGPoint)defaultTextContainerOriginForRect:(struct CGRect)arg1;
- (void)drawTextContainer:(id)arg1 withRect:(struct CGRect)arg2 graphicsContext:(struct CGContext *)arg3 baselineMode:(BOOL)arg4 scrollable:(BOOL)arg5 padding:(float)arg6;
- (void)_setForceWordWrapping:(BOOL)arg1;
- (BOOL)_forceWordWrapping;
- (id)_styledTextOptions;
- (void)_setStyledTextOptions:(id)arg1;
- (void)_setTruncatesLastLine:(BOOL)arg1;
- (BOOL)_truncatesLastLine;
- (BOOL)_baselineMode;
- (void)_setBaselineMode:(BOOL)arg1;
- (float)_baselineDelta;
- (void)_setBaselineDelta:(float)arg1;
- (struct CGRect)usedRectForTextContainer:(id)arg1;
- (int)typesetterBehavior;
- (id)flippedView;
- (id)textContainer;
- (id)layoutManager;
- (BOOL)fastDrawAttributedString:(id)arg1 containerSize:(struct CGSize)arg2 padding:(float)arg3 inRect:(struct CGRect)arg4 onView:(id)arg5 pinToTop:(BOOL)arg6 sizeOnly:(BOOL)arg7 size:(struct CGSize *)arg8;
- (BOOL)fastDrawString:(id)arg1 attributes:(id)arg2 containerSize:(struct CGSize)arg3 padding:(float)arg4 inRect:(struct CGRect)arg5 onView:(id)arg6 pinToTop:(BOOL)arg7 sizeOnly:(BOOL)arg8 size:(struct CGSize *)arg9;
- (BOOL)_fastDrawGlyphs:(unsigned short *)arg1 advances:(struct CGSize *)arg2 length:(unsigned int)arg3 font:(id)arg4 color:(id)arg5 containerSize:(struct CGSize)arg6 usedRect:(struct CGRect)arg7 startingLocation:(struct CGPoint)arg8 inRect:(struct CGRect)arg9 onView:(id)arg10 context:(struct CGContext *)arg11 pinToTop:(BOOL)arg12;
- (BOOL)_informationForFont:(id)arg1 glyphTable:(unsigned short **)arg2 positionTable:(float **)arg3;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;

@end
