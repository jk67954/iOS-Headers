/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UIModalItem.h"

#import "RUTrackActioning-Protocol.h"

@class NSString, UIImage, _RUTrackActionsModalItemContentView;

@interface RUTrackActionsModalItem : _UIModalItem <RUTrackActioning>
{
    _RUTrackActionsModalItemContentView *_contentView;
}

+ (struct CGSize)artworkSize;
- (void).cxx_destruct;
- (void)_radioAuthenticatedAccountIdentifierDidChangeNotification:(id)arg1;
@property(nonatomic) __weak id <RUTrackActionsDelegate> trackActionsDelegate;
@property(copy, nonatomic) NSString *songText;
@property(nonatomic) long long onActions;
@property(nonatomic) long long enabledActions;
@property(retain, nonatomic) UIImage *artworkImage;
@property(copy, nonatomic) NSString *artistText;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) long long cancelIndex;
- (long long)actionForButtonIndex:(long long)arg1;
- (id)_contentView;
- (void)dealloc;
- (id)init;

@end
