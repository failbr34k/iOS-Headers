//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KNAnimatedSlideView, KNPlaybackSession;
@protocol KNAnimationPluginContext;

@interface KNAnimationRenderer : NSObject
{
    KNPlaybackSession *_session;
    KNAnimatedSlideView *_ASV;
    _Bool _areAnimationsPaused;
    id _plugin;
    Class _pluginClass;
    unsigned long long _direction;
    double _duration;
    id <KNAnimationPluginContext> _pluginContext;
    unsigned long long _signpostId;
}

@property(nonatomic) unsigned long long signpostId; // @synthesize signpostId=_signpostId;
@property(readonly, nonatomic) id <KNAnimationPluginContext> pluginContext; // @synthesize pluginContext=_pluginContext;
@property(readonly, nonatomic) Class pluginClass; // @synthesize pluginClass=_pluginClass;
@property(readonly, nonatomic) id plugin; // @synthesize plugin=_plugin;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (void)prepareAnimations;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(_Bool)arg1;
- (void)renderTextures;
- (void)generateTextures;
- (void)teardown;
- (void)dealloc;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)resumeAnimationsIfPaused;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)pauseAnimations;
- (void)stopAnimations;
- (void)setupPluginContext;

@end

