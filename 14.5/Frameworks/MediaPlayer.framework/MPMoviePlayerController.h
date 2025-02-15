//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/AVPlayerViewControllerDelegatePrivate-Protocol.h>
#import <MediaPlayer/MPMediaPlayback-Protocol.h>

@class AVAssetImageGenerator, AVPlayerViewController, NSString, NSURL, UIView, UIViewController, _MPMoviePlayerProxyView;

@interface MPMoviePlayerController : NSObject <AVPlayerViewControllerDelegatePrivate, MPMediaPlayback>
{
    _MPMoviePlayerProxyView *_proxyView;
    AVAssetImageGenerator *_generator;
    UIView *_backgroundView;
    _Bool _useApplicationAudioSession;
    _Bool _isFullscreen;
    _Bool _shouldAutoplay;
    long long _movieSourceType;
    NSURL *_contentURL;
    long long _controlStyle;
    long long _repeatMode;
    double _initialPlaybackTime;
    double _endPlaybackTime;
    AVPlayerViewController *_playerViewController;
    UIViewController *_hostingViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *hostingViewController; // @synthesize hostingViewController=_hostingViewController;
@property(readonly, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(nonatomic) double endPlaybackTime; // @synthesize endPlaybackTime=_endPlaybackTime;
@property(nonatomic) double initialPlaybackTime; // @synthesize initialPlaybackTime=_initialPlaybackTime;
@property(nonatomic) _Bool shouldAutoplay; // @synthesize shouldAutoplay=_shouldAutoplay;
@property(nonatomic) long long repeatMode; // @synthesize repeatMode=_repeatMode;
@property(nonatomic) long long controlStyle; // @synthesize controlStyle=_controlStyle;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(nonatomic) long long movieSourceType; // @synthesize movieSourceType=_movieSourceType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_avPlayerItemDidPlayToEndNotification:(id)arg1;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (id)_videoViewController;
- (id)_advertisementView;
- (void)setUseApplicationAudioSession:(_Bool)arg1;
- (_Bool)useApplicationAudioSession;
- (id)errorLog;
- (id)accessLog;
- (id)timedMetadata;
- (void)cancelAllThumbnailImageRequests;
- (void)requestThumbnailImagesAtTimes:(id)arg1 timeOption:(long long)arg2;
- (id)thumbnailImageAtTime:(double)arg1 timeOption:(long long)arg2;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
@property(nonatomic) float currentPlaybackRate;
@property(nonatomic) double currentPlaybackTime;
- (void)stop;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) _Bool isPreparedToPlay;
- (void)prepareToPlay;
@property(readonly, nonatomic, getter=isAirPlayVideoActive) _Bool airPlayVideoActive;
@property(nonatomic) _Bool allowsAirPlay;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned long long movieMediaTypes;
@property(readonly, nonatomic) _Bool readyForDisplay;
@property(nonatomic) long long scalingMode;
- (void)setFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen;
@property(readonly, nonatomic) unsigned long long loadState;
@property(readonly, nonatomic) long long playbackState;
@property(readonly, nonatomic) UIView *backgroundView;
@property(readonly, nonatomic) UIView *view;
- (void)dealloc;
- (id)initWithContentURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

