/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIGestureRecognizer.h>

@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer
{
    unsigned int _systemGesturesRecognitionPossible:1;
}

- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (BOOL)_shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (BOOL)_shouldReceiveTouch:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_systemGestureStateChanged:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

