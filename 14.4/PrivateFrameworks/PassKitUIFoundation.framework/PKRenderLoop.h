//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;
@protocol PKRenderLoopDelegate;

@interface PKRenderLoop : NSObject
{
    CADisplayLink *_displayLink;
    _Bool _effectivePaused;
    _Bool _background;
    _Bool _invalidated;
    _Bool _drawing;
    _Bool _inApplicationContext;
    _Bool _paused;
    long long _preferredFramesPerSecond;
    id <PKRenderLoopDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PKRenderLoopDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(nonatomic) _Bool inApplicationContext; // @synthesize inApplicationContext=_inApplicationContext;
@property(readonly, nonatomic, getter=isDrawing) _Bool drawing; // @synthesize drawing=_drawing;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_updateEffectivePausedState;
- (_Bool)_subclassPreferredPauseState;
- (void)_drawAtTime:(double)arg1;
- (void)_didDraw;
- (void)_willDraw;
- (void)_drawWithDisplayLink:(id)arg1;
- (void)invalidate;
- (void)attachToScreen:(id)arg1;
- (void)dealloc;
- (id)init;

@end

