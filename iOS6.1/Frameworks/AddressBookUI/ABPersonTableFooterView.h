/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "ABPersonTableActionDelegate-Protocol.h"

@class ABPersonTableAction, NSString, UIButton;

@interface ABPersonTableFooterView : UIView <ABPersonTableActionDelegate>
{
    BOOL _editing;
    ABPersonTableAction *_deleteAction;
    UIView *_deleteView;
    UIView *_accessoryView;
    UIButton *_attributionButton;
    id <ABStyleProvider> _styleProvider;
}

@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic, getter=isEditing) BOOL tableEditing; // @synthesize tableEditing=_editing;
- (void)layoutSubviews;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)removeDeleteAction;
- (void)setDeleteActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 animated:(BOOL)arg4;
@property(readonly, nonatomic, getter=isAttributionEnabled) BOOL attributionEnabled;
@property(readonly, nonatomic) NSString *attribution;
- (void)setAttribution:(id)arg1 enabled:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)attributionFrame;
- (struct CGRect)deleteViewFrame;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

