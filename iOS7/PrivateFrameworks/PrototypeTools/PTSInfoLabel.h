/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UILabel.h"

#import "PTSHUDControl-Protocol.h"
#import "_UISettingsKeyPathObserver-Protocol.h"

@class NSString, _UISettings;

@interface PTSInfoLabel : UILabel <PTSHUDControl, _UISettingsKeyPathObserver>
{
    BOOL _autoEnablesForDesignMode;
    _UISettings *_settings;
    NSString *_valueKeyPath;
    int _alignment;
}

+ (id)infoLabelForSettings:(id)arg1 valueKeyPath:(id)arg2;
+ (id)infoLabel;
+ (struct CGRect)defaultFrame;
@property(nonatomic) BOOL autoEnablesForDesignMode; // @synthesize autoEnablesForDesignMode=_autoEnablesForDesignMode;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
@property(nonatomic) __weak _UISettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) BOOL enabled;

@end

