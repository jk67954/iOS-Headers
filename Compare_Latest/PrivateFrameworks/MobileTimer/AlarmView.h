/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class DigitalClockLabel, UILabel, UISwitch;

@interface AlarmView : UIView
{
    int _style;
    DigitalClockLabel *_timeLabel;
    UILabel *_nameLabel;
    UILabel *_repeatLabel;
    UISwitch *_enabledSwitch;
}

@property(readonly, nonatomic) UISwitch *enabledSwitch; // @synthesize enabledSwitch=_enabledSwitch;
@property(readonly, nonatomic) UILabel *repeatLabel; // @synthesize repeatLabel=_repeatLabel;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) DigitalClockLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

