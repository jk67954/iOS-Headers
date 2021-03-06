/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "MFTinting-Protocol.h"

@class NSAttributedString, UIColor, UILabel;

@interface MFRecipientTableViewCellTitleView : UIView <MFTinting>
{
    NSAttributedString *_deselectedAttributedString;
    UIColor *_tintColor;
    BOOL _shouldDim;
    BOOL _highlighted;
    UILabel *_titleLabel;
}

+ (float)height;
+ (id)highlightedStringAttributes;
+ (id)regularStringAttributes;
+ (id)defaultStringAttributes;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) BOOL shouldDim; // @synthesize shouldDim=_shouldDim;
- (void)setBackgroundColor:(id)arg1;
- (void)setTintColor:(id)arg1 animated:(BOOL)arg2;
- (id)tintColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

