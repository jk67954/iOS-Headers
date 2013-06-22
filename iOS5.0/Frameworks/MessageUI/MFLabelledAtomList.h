/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "MFAddressAtomDelegate-Protocol.h"
#import "MFPassthroughViewProvider-Protocol.h"

@class NSMutableArray, NSString, UITextLabel;

@interface MFLabelledAtomList : UIView <MFPassthroughViewProvider, MFAddressAtomDelegate>
{
    NSMutableArray *_addressAtoms;
    UITextLabel *_label;
    NSString *_title;
    id <MFLabelledAtomListDelegate> _delegate;
    float _firstLineWidth;
    unsigned int _needsReflow:1;
    unsigned int _isChangingFrame:1;
}

- (id)initWithLabel:(id)arg1 title:(id)arg2 totalWidth:(float)arg3 firstLineWidth:(float)arg4 addresses:(id)arg5 arePhoneNumbers:(id)arg6 style:(int)arg7;
- (id)initWithLabel:(id)arg1 title:(id)arg2 totalWidth:(float)arg3 firstLineWidth:(float)arg4 addresses:(id)arg5 arePhoneNumbers:(id)arg6;
- (id)initWithLabel:(id)arg1 totalWidth:(float)arg2 firstLineWidth:(float)arg3 addresses:(id)arg4 arePhoneNumbers:(id)arg5;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setFirstLineWidth:(float)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)addressAtom:(id)arg1 displayStringDidChange:(id)arg2;
- (void)_setNeedsReflow;
- (void)_reflow;
- (void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2;
- (id)labelText;
- (struct CGRect)labelFrame;
- (id)title;
- (id)atomDisplayStrings;
- (id)addressAtoms;
- (void)setAtomAlpha:(float)arg1;
- (void)setOpaque:(BOOL)arg1;
- (id)passthroughViews;

@end
