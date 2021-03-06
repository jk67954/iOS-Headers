/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUViewController.h>

#import "SUScalingFlipViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSMutableArray, SUOverlayViewController, SUScalingFlipView, SUTouchCaptureView, UISwipeGestureRecognizer;

@interface SUOverlayBackgroundViewController : SUViewController <SUScalingFlipViewDelegate, UIGestureRecognizerDelegate>
{
    NSMutableArray *_actionQueue;
    SUScalingFlipView *_activeFlipView;
    BOOL _askingToDismissEverything;
    BOOL _askingToDismissSelection;
    SUTouchCaptureView *_captureView;
    id <SUOverlayBackgroundDelegate> _delegate;
    struct CGRect _keyboardFrame;
    int _selectedViewControllerIndex;
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
    NSMutableArray *_viewControllers;
}

@property(readonly, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) id <SUOverlayBackgroundDelegate> delegate; // @synthesize delegate=_delegate;
- (float)_viewControllerKeyboardOffset;
- (float)_viewControllerHorizontalPadding;
- (void)_tearDownFlipView;
- (void)_shouldDismissFinishedWithValue:(id)arg1;
- (void)_sendDidDismiss;
- (id)_selectedViewController;
- (void)_removeViewController:(id)arg1;
- (void)_reloadGestureRecognizers;
- (void)_performFlipForAction:(id)arg1;
- (void)_layoutForKeyboardChangeWithInfo:(id)arg1;
- (struct CGRect)_frameForSlideFromBottomForViewController:(id)arg1;
- (id)_copyTransitionForTransition:(id)arg1 action:(id)arg2;
- (struct CGRect)_centeredFrameForViewController:(id)arg1;
- (void)_addViewController:(id)arg1;
- (void)_performPresentAction:(id)arg1;
- (void)_performNextAction;
- (void)_performDismissEverythingAction:(id)arg1;
- (void)_performDismissAction:(id)arg1;
- (void)_overlayAnimationDidFinish;
- (void)_overlayActionDidFinish;
- (void)_finishPresentAction:(id)arg1;
- (void)_finishDismissOfViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_finishDismissEverythingAction:(id)arg1;
- (void)_finishDismissAction:(id)arg1;
- (void)_enqueueAction:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scalingFlipViewDidFinish:(id)arg1;
- (void)_backgroundAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_swipe:(id)arg1;
- (void)_captureViewAction:(id)arg1;
- (void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2;
- (void)overlayPageViewTapped:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldExcludeFromNavigationHistory;
- (void)restoreArchivableContext:(id)arg1;
- (void)loadView;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (id)copyArchivableJetsamContext;
- (id)copyArchivableContext;
- (id)copyChildViewControllersForReason:(int)arg1;
- (id)viewControllerForScriptWindowContext:(id)arg1;
@property(readonly, nonatomic) SUOverlayViewController *selectedViewController;
- (void)presentOverlay:(id)arg1 withTransition:(id)arg2;
- (void)populateNavigationHistoryWithItems:(id)arg1;
- (void)layoutViewControllers;
- (void)dismissOverlay:(id)arg1 animated:(BOOL)arg2;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

