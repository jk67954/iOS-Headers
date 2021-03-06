/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "SBSearchGestureObserver-Protocol.h"

@class NSMutableArray, SBSearchViewController;

@interface SBIconContentView : UIView <SBSearchGestureObserver>
{
    int _orientation;
    NSMutableArray *_folderContentViews;
    float _searchHeaderOffset;
    SBSearchViewController *_searchViewController;
}

@property(readonly, nonatomic) SBSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
- (void)searchGesture:(id)arg1 changedOffset:(float)arg2;
- (void)layoutSubviews;
- (void)didAddSubview:(id)arg1;
- (void)popFolderContentView:(id)arg1;
- (void)pushFolderContentView:(id)arg1;
- (void)updateLayoutWithDuration:(double)arg1;
- (void)dealloc;
- (id)initWithOrientation:(int)arg1;

@end

