/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class TPButton;

@interface TPSlidingButton : UIView <UIScrollViewDelegate>
{
    int _type;
    TPButton *_acceptButton;
    TPButton *_endButton;
    TPButton *_sideButtonLeft;
    TPButton *_sideButtonRight;
    id <TPSlidingButtonDelegateProtocol> _delegate;
}

@property id <TPSlidingButtonDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property int type; // @synthesize type=_type;
@property(retain) TPButton *sideButtonRight; // @synthesize sideButtonRight=_sideButtonRight;
@property(retain) TPButton *sideButtonLeft; // @synthesize sideButtonLeft=_sideButtonLeft;
@property(retain) TPButton *endButton; // @synthesize endButton=_endButton;
@property(retain) TPButton *acceptButton; // @synthesize acceptButton=_acceptButton;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithSlidingButtonType:(int)arg1;

@end
