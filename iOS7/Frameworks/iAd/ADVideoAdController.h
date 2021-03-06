/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ADBannerViewInternalDelegate-Protocol.h"
#import "ADVideoAdOverlayViewDelegate-Protocol.h"

@class ADVideoAdView, AVPlayerItem, MPMoviePlayerController, NSTimer;

@interface ADVideoAdController : NSObject <ADVideoAdOverlayViewDelegate, ADBannerViewInternalDelegate>
{
    MPMoviePlayerController *_moviePlayerController;
    BOOL _currentlyClaimingSharedMediaPlayerVideoAd;
    BOOL _adHasStartedPlaying;
    AVPlayerItem *_videoAdPlayerItem;
    ADVideoAdView *_videoAdView;
    unsigned int _videoAdBufferingState;
    NSTimer *_videoAdOverlayIdleBarHideTimer;
    id _adPlaybackFinishedHandler;
}

@property(copy, nonatomic) id adPlaybackFinishedHandler; // @synthesize adPlaybackFinishedHandler=_adPlaybackFinishedHandler;
@property(retain, nonatomic) NSTimer *videoAdOverlayIdleBarHideTimer; // @synthesize videoAdOverlayIdleBarHideTimer=_videoAdOverlayIdleBarHideTimer;
@property(nonatomic) unsigned int videoAdBufferingState; // @synthesize videoAdBufferingState=_videoAdBufferingState;
@property(retain, nonatomic) ADVideoAdView *videoAdView; // @synthesize videoAdView=_videoAdView;
@property(retain, nonatomic) AVPlayerItem *videoAdPlayerItem; // @synthesize videoAdPlayerItem=_videoAdPlayerItem;
@property(nonatomic) BOOL adHasStartedPlaying; // @synthesize adHasStartedPlaying=_adHasStartedPlaying;
@property(nonatomic) BOOL currentlyClaimingSharedMediaPlayerVideoAd; // @synthesize currentlyClaimingSharedMediaPlayerVideoAd=_currentlyClaimingSharedMediaPlayerVideoAd;
- (void)bannerViewActionDidFinish:(id)arg1;
- (void)bannerViewStoryboardPresentationInDidComplete:(id)arg1;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (id)_networkOptimalVideoURLForAd:(id)arg1;
- (void)_relinquishSharedMediaPlayerVideoAdIfClaimed;
- (void)overlayViewBarVisibilityChanged:(id)arg1;
- (void)overlayViewSkipButtonTapped:(id)arg1;
- (void)overlayViewMoreButtonTapped:(id)arg1;
- (void)overlayViewDoneButtonTapped:(id)arg1;
- (void)overlayViewReceivedAXEscapeGesture:(id)arg1;
- (void)_videoAdOverlayIdleBarHideTimerFired:(id)arg1;
- (void)_teardownVideoAdView;
- (void)_adPlaybackFinished;
- (void)_moviePlayerDidExitFullscreenNotification:(id)arg1;
- (void)_moviePlayerWillExitFullscreenNotification:(id)arg1;
- (void)_moviePlayerDidEnterFullscreenNotification:(id)arg1;
- (void)_moviePlayerWillEnterFullscreenNotification:(id)arg1;
- (void)moviePlayerPlaybackStateDidChangeNotification:(id)arg1;
- (void)_startObservingMoviePlayerControllerNotifications;
- (void)_playerItemPlaybackStalledNotification:(id)arg1;
- (void)_playerItemFailedToPlayToEndTimeNotification:(id)arg1;
- (void)_playerItemDidPlayToEndNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_isVideoAdPresented;
@property(nonatomic) __weak MPMoviePlayerController *moviePlayerController;
- (void)playPrerollAdWithCompletionHandler:(id)arg1;
- (void)dealloc;
- (id)initWithMoviePlayerController:(id)arg1;

@end

