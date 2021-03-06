/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABPropertyCell.h>

@class UITextView;

@interface ABPropertyNoteCell : ABPropertyCell
{
    UITextView *_textView;
}

@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (id)contentViewEditingConstraints;
- (id)contentViewConstraints;
- (void)setAllowsEditing:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (void)textViewEditingDidEnd:(id)arg1;
- (void)textViewChanged:(id)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

