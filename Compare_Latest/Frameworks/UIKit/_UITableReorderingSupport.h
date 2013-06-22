/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSTimer, UIShadowView;

@interface _UITableReorderingSupport : NSObject
{
    NSArray *_reorderedCells;
    unsigned int _reorderedRow;
    unsigned int _emptySpaceRow;
    unsigned int _lastVisibleRowLocation;
    unsigned int _oldShowScrollerIndicators:1;
    unsigned int _delegateImplementsCanMoveRow:1;
    unsigned int _delegateImplementsMoveDestinationRow:1;
    unsigned int _bottomShadowNeedsToMove:1;
    unsigned int _reserved:28;
    NSTimer *_autoscrollTimer;
    UIShadowView *_topShadowView;
    UIShadowView *_bottomShadowView;
}

@end
