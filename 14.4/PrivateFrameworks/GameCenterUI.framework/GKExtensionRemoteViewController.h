//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <GameCenterUI/GKExtensionHostProtocol-Protocol.h>
#import <GameCenterUI/GKExtensionProtocol-Protocol.h>

@class GKGame, NSExtension, NSString;

@interface GKExtensionRemoteViewController : _UIRemoteViewController <GKExtensionProtocol, GKExtensionHostProtocol>
{
    GKGame *_game;
    NSExtension *_extension;
    id _requestIdentifier;
}

+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;
+ (_Bool)shouldPropagateAppearanceCustomizations;
+ (id)initialItemsForExtension;
+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)setupCallbackBlocksForExtension:(id)arg1 withParentViewController:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) id requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void)messageFromExtension:(id)arg1;
- (void)tearDownExtensionWithReply:(CDUnknownBlockType)arg1;
- (void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(CDUnknownBlockType)arg3;
- (void)setInitialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)messageFromClient:(id)arg1;
- (id)extensionObjectProxy;
- (void)extensionIsFinishing;
- (void)extensionIsCanceling;
- (void)sendMessageToExtension:(id)arg1;
- (void)cancelExtension;
- (long long)_desiredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

