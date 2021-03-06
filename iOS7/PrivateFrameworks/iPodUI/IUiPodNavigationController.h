/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

@class IUModalContext, NSString, UINavigationItem;

@interface IUiPodNavigationController : UINavigationController
{
    IUModalContext *_modalContext;
    UINavigationItem *_navigationItemTemplate;
    unsigned int _style;
}

@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(retain, nonatomic) IUModalContext *modalContext; // @synthesize modalContext=_modalContext;
- (void).cxx_destruct;
- (void)_updateViewControllersModalContext;
- (BOOL)navigationBar:(id)arg1 shouldPushItem:(id)arg2;
- (BOOL)_shouldNavigationBarInsetViewController:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (id)description;
- (void)loadView;
- (void)updateStyleAnimated:(BOOL)arg1;
@property(readonly, nonatomic) NSString *rootIdentifier;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

