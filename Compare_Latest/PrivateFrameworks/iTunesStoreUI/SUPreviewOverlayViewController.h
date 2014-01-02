/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUViewController.h>

@class NSString, SUPreviewOverlayStorePageViewController;

@interface SUPreviewOverlayViewController : SUViewController
{
    _Bool _animating;
    struct CGSize _contentSize;
    id _loadBlock;
    _Bool _loaded;
    double _paddingRight;
    double _paddingTop;
    SUPreviewOverlayStorePageViewController *_storePageViewController;
    NSString *_userInfoString;
    _Bool _visible;
    _Bool _contentLoaded;
}

+ (void)_setContentInsetsForScrollView:(id)arg1 viewController:(id)arg2;
+ (void)offsetScrollView:(id)arg1 forViewController:(id)arg2;
+ (id)defaultRequestProperties;
+ (double)defaultAnimationDuration;
@property(nonatomic, getter=isContentLoaded) _Bool contentLoaded; // @synthesize contentLoaded=_contentLoaded;
@property(copy, nonatomic) NSString *userInfoString; // @synthesize userInfoString=_userInfoString;
@property(nonatomic) double paddingTop; // @synthesize paddingTop=_paddingTop;
@property(nonatomic) double paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (id)_storePageViewController;
- (id)_scrollViewForViewController:(id)arg1;
- (id)_previewOverlayContainerForViewController:(id)arg1;
- (void)loadView;
- (void)storePage:(id)arg1 finishedWithSuccess:(_Bool)arg2;
- (void)invalidateForMemoryPurge;
- (void)showInNavigationController:(id)arg1 animated:(_Bool)arg2 completionBlock:(id)arg3;
- (void)loadWithRequestProperties:(id)arg1 completionBlock:(id)arg2;
- (void)loadWithCompletionBlock:(id)arg1;
- (void)hideInNavigationController:(id)arg1 animated:(_Bool)arg2 completionBlock:(id)arg3;
- (void)dealloc;

@end
