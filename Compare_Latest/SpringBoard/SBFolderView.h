/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "SBIconListPageControlDelegate-Protocol.h"
#import "SBIconScrollViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSMutableArray, SBAdaptiveColorInfo, SBFolder, SBFolderTitleTextField, SBIconListPageControl, SBIconListView, SBIconScrollView;

@interface SBFolderView : UIView <SBIconScrollViewDelegate, SBIconListPageControlDelegate, UITextFieldDelegate>
{
    NSMutableArray *_iconListViews;
    SBIconListView *_rotatingIconList;
    int _minVisibleListViewIndex;
    int _maxVisibleListViewIndex;
    int _disableUpdatingCurrentIconListCount;
    BOOL _animatedScrolling;
    BOOL _scalingViewIsBorrowed;
    SBIconListPageControl *_pageControl;
    SBIconScrollView *_scrollView;
    SBFolderTitleTextField *_titleTextField;
    UIView *_scalingView;
    BOOL _isEditing;
    BOOL _isScrolling;
    int _currentPageIndex;
    float _statusBarHeight;
    id <SBFolderViewDelegate> _delegate;
    SBFolder *_folder;
    int _orientation;
    SBAdaptiveColorInfo *_adaptiveColorInfo;
}

@property(retain, nonatomic) SBAdaptiveColorInfo *adaptiveColorInfo; // @synthesize adaptiveColorInfo=_adaptiveColorInfo;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property(nonatomic) id <SBFolderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(readonly, nonatomic) int currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(readonly, nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_isEditing;
- (void)_updatePageControlLegibility;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)_setFolderName:(id)arg1;
- (void)pageControl:(id)arg1 didRecieveTouchInDirection:(int)arg2;
- (void)iconScrollView:(id)arg1 willSetContentOffset:(inout struct CGPoint *)arg2;
- (void)iconScrollViewDidCancelTouchTracking:(id)arg1;
- (void)iconScrollViewWillCancelTouchTracking:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1;
- (void)cleanupAfterClosing;
- (void)prepareToOpen;
- (void)_purgeListViews;
- (void)noteUserIsInteractingWithIcons;
- (void)noteUserHasGrabbedIcon:(BOOL)arg1;
- (void)updateIconListIndexAndVisibility:(BOOL)arg1;
- (void)updateIconListIndexAndVisibility;
- (void)_updateEditingStateAnimated:(BOOL)arg1;
- (void)layoutIconLists:(double)arg1 domino:(BOOL)arg2 forceRelayout:(BOOL)arg3;
- (void)updateIconListViews;
- (void)resetIconListViews;
- (id)currentIconListView;
- (id)iconListViewForTouch:(id)arg1;
- (id)iconListViewAtPoint:(struct CGPoint)arg1;
- (id)iconListViewAtIndex:(unsigned int)arg1;
- (int)_pageIndexForOffset:(float)arg1;
- (void)_updateIconListFrames;
- (void)_updateIconListViews;
- (void)_resetIconListViews;
- (void)_addIconListViewsForModels:(id)arg1;
- (id)_createIconListViewForList:(id)arg1;
- (id)_iconListViewForList:(id)arg1;
- (id)_iconListViewAtIndex:(unsigned int)arg1;
- (id)_currentIconListView;
- (void)_removeIconListView:(id)arg1;
- (void)_addIconListView:(id)arg1;
- (BOOL)_showsTitle;
- (void)_popDisableUpdateCurrentIconListCount;
- (void)_pushDisableUpdateCurrentIconListCount;
- (BOOL)_shouldDisableUpdatingCurrentIconList;
- (BOOL)_isValidPageIndex:(int)arg1;
- (float)_scrollOffsetForPageAtIndex:(int)arg1;
- (float)_scrollOffsetForFirstListView;
- (float)_pageWidth;
- (BOOL)_hasMinusPages;
- (unsigned int)_minusPageCount;
- (float)_offsetToCenterPageControlInSpaceForPageControl;
- (struct CGRect)_frameForScalingView;
- (void)_layoutSubviews;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)fadeContentForMinificationFraction:(float)arg1;
- (void)fadeContentForMagnificationFraction:(float)arg1;
- (void)didAnimate;
- (void)willAnimate;
- (BOOL)locationCountsAsInsideFolder:(struct CGPoint)arg1;
- (void)returnScalingView;
- (id)borrowScalingView;
- (struct CGRect)scalingViewFrame;
- (BOOL)setCurrentPageIndex:(int)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *iconListViews; // @synthesize iconListViews=_iconListViews;
- (void)_setCurrentPageIndex:(int)arg1;
- (void)_setAnimatedScrolling:(BOOL)arg1;
@property(nonatomic, getter=isScrolling) BOOL scrolling; // @synthesize scrolling=_isScrolling;
- (id)scrollView;
- (void)dealloc;
- (id)initWithFolder:(id)arg1 orientation:(int)arg2;

@end

