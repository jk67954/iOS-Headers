/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MapKit/MKAnnotationCalloutController.h>

#import "UIPopoverControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegatePrivate-Protocol.h"
#import "_MKPopoverEmbeddingViewWindowDelegate-Protocol.h"

@class MKSmallCalloutViewController, UIPopoverController, UIView, _MKPopoverEmbeddingView;

@interface MKPopoverBasedAnnotationCalloutController : MKAnnotationCalloutController <_MKPopoverEmbeddingViewWindowDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate>
{
    UIPopoverController *_popoverController;
    MKSmallCalloutViewController *_calloutViewController;
    id _afterMoveToWindowBlock;
    UIView *_layoutConstraintsView;
    _MKPopoverEmbeddingView *_embeddingView;
    BOOL _isHidingForImplementationReasons;
    BOOL _allowsPopoverWhenNotInWindow;
}

@property(nonatomic) BOOL allowsPopoverWhenNotInWindow; // @synthesize allowsPopoverWhenNotInWindow=_allowsPopoverWhenNotInWindow;
@property(readonly, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
- (void)embeddingView:(id)arg1 didMoveToWindow:(id)arg2;
- (void)embeddingView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)popoverController:(id)arg1 animationCompleted:(int)arg2;
- (void)_setDetailAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setRightAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setSubtitle:(id)arg1 animated:(BOOL)arg2;
- (id)_subtitle;
- (void)_setTitle:(id)arg1;
- (BOOL)_isShowingCallout;
- (BOOL)isCalloutExpanded;
- (BOOL)calloutContainsPoint:(struct CGPoint)arg1;
- (void)_updateCalloutAnimated:(BOOL)arg1;
- (void)hideCalloutAnimated:(BOOL)arg1;
- (void)showCalloutForAnnotationView:(id)arg1 animated:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(struct CGRect)arg4;
- (void)_snapLayoutConstraintsViewToContainerBounds;
- (void)dealloc;

@end

