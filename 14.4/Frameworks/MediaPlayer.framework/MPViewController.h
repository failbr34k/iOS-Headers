//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayer/MPAVControllerNode-Protocol.h>
#import <MediaPlayer/MPControllerProtocol-Protocol.h>

@class MPAVController, MPAVItem, NSString, UIView;

@interface MPViewController : UIViewController <MPControllerProtocol, MPAVControllerNode>
{
    id _delegate;
    long long _interfaceOrientation;
    MPAVItem *_item;
    MPAVController *_player;
    unsigned int _appearing:1;
    unsigned int _observesApplicationSuspendResumeEventsOnly:1;
    unsigned int _showOverlayWhileAppearingDisabled:1;
    _Bool _registeredForPlayerNotifications;
    long long _playerLockedCount;
    _Bool _idleTimerDisabled;
}

- (void).cxx_destruct;
@property(nonatomic, getter=idleTimerDisabled, setter=setIdleTimerDisabled:) _Bool idleTimerDisabled; // @synthesize idleTimerDisabled=_idleTimerDisabled;
@property(nonatomic) _Bool registeredForPlayerNotifications; // @synthesize registeredForPlayerNotifications=_registeredForPlayerNotifications;
@property(nonatomic) long long orientation; // @synthesize orientation=_interfaceOrientation;
@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (_Bool)_canReloadView;
- (void)removeChildViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setView:(id)arg1;
- (void)clearWeakReferencesToObject:(id)arg1;
- (void)setOrientation:(long long)arg1 animate:(_Bool)arg2;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)unlockPlayer;
- (void)lockPlayer;
- (void)setAppearing:(_Bool)arg1;
- (void)willChangeToInterfaceOrientation:(long long)arg1;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
@property(nonatomic) _Bool observesApplicationSuspendResumeEventsOnly;
- (void)applicationResumed;
- (void)applicationDidResumeEventsOnly;
- (void)applicationDidSuspendEventsOnly;
- (void)stopTicking;
- (void)startTicking;
- (_Bool)isAppearing;
- (void)endIgnoringChangeTypes:(unsigned long long)arg1;
- (long long)displayableInterfaceOrientationForInterfaceOrientation:(long long)arg1;
- (void)didChangeToInterfaceOrientation:(long long)arg1;
- (void)endTransitionOverlayHidingWithTransferedOverlayView:(id)arg1;
- (void)beginTransitionOverlayHidding;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (_Bool)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2;
- (void)beginIgnoringChangeTypes:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) UIView *view;

@end

