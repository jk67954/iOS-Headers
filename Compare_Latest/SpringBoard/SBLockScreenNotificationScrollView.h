/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIScrollView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class SBLockScreenNotificationCell;

@interface SBLockScreenNotificationScrollView : UIScrollView <UIGestureRecognizerDelegate>
{
    SBLockScreenNotificationCell *_associatedCell;
}

+ (float)scrollThresholdForPasscodeScroll;
@property(retain, nonatomic) SBLockScreenNotificationCell *associatedCell; // @synthesize associatedCell=_associatedCell;

@end

