/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol UIStatusBarStyleDelegate <NSObject>
- (void)statusBar:(id)arg1 didAnimateFromHeight:(float)arg2 toHeight:(float)arg3 animation:(int)arg4;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(float)arg2 toHeight:(float)arg3 duration:(double)arg4 animation:(int)arg5;
- (int)statusBar:(id)arg1 styleForRequestedStyle:(int)arg2 overrides:(int)arg3;

@optional
- (void)statusBar:(id)arg1 didTriggerButtonType:(int)arg2 withAction:(int)arg3;
@end

