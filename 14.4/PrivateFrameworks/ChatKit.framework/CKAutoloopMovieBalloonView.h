//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKImageBalloonView.h>

#import <ChatKit/ISChangeObserver-Protocol.h>
#import <ChatKit/ISWrappedAVPlayerDelegate-Protocol.h>

@class CKMovieMediaObject, ISVideoPlayerUIView, ISWrappedAVAudioSession, ISWrappedAVPlayer, NSString, UIImageView, UIView;

@interface CKAutoloopMovieBalloonView : CKImageBalloonView <ISWrappedAVPlayerDelegate, ISChangeObserver>
{
    _Bool _isJellyfishVideo;
    _Bool _isMuted;
    _Bool _isListeningToVideoPlayer;
    CKMovieMediaObject *_mediaObject;
    UIImageView *_muteButton;
    ISVideoPlayerUIView *_videoPlayer;
    ISWrappedAVPlayer *_avPlayer;
    ISWrappedAVAudioSession *_audioSession;
    UIView *_snapshotView;
}

+ (id)_autoloopAVAudioSessionQueue;
+ (_Bool)isEnabled;
+ (Class)VideoPlayerUIViewClass;
+ (Class)AVPlayerLayerClass;
+ (Class)AVPlayerClass;
- (void).cxx_destruct;
@property(nonatomic) _Bool isListeningToVideoPlayer; // @synthesize isListeningToVideoPlayer=_isListeningToVideoPlayer;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(retain, nonatomic) ISWrappedAVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain, nonatomic) ISWrappedAVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) ISVideoPlayerUIView *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) UIImageView *muteButton; // @synthesize muteButton=_muteButton;
@property(nonatomic) _Bool isJellyfishVideo; // @synthesize isJellyfishVideo=_isJellyfishVideo;
@property(retain, nonatomic) CKMovieMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void)previewDidChange:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)avPlayerDidDeallocate;
- (void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2;
- (_Bool)_shouldPresentQuickLookOnTap;
- (_Bool)_shouldPauseInitialLooping;
- (void)_removeSnapshot;
- (_Bool)_applicationStateAcceptableForLooping;
- (void)_thermalStateDidChange:(id)arg1;
- (_Bool)_thermalStateAcceptableForLooping;
- (void)tapGestureRecognized:(id)arg1;
- (void)didMoveToWindow;
- (void)prepareForAcknowledgementDismissal;
- (void)prepareForAcknowledgementDisplay;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopListeningToVideoPlayer;
- (void)startListeningToVideoPlayer;
- (void)layoutSubviews;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3 hasInvisibleInkEffect:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

