//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class NSDictionary, NSString, SFProxCardSessionServer;

@interface SVSBaseMainController : SBUIRemoteAlertServiceViewController <UINavigationControllerDelegate>
{
    SFProxCardSessionServer *_proxCardSessionServer;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) SFProxCardSessionServer *proxCardSessionServer; // @synthesize proxCardSessionServer=_proxCardSessionServer;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)dismiss:(int)arg1;
- (unsigned long long)desiredHomeButtonEvents;
- (void)xpcStarted:(id)arg1;
- (void)_willAppearInRemoteViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

