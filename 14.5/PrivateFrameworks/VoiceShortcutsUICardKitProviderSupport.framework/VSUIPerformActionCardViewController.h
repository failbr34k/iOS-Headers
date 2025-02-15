//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcutsUICardKitProviderSupport/VSUIProgressCardViewController.h>

#import <VoiceShortcutsUICardKitProviderSupport/WFLWorkflowControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, WFLWorkflowController;

@interface VSUIPerformActionCardViewController : VSUIProgressCardViewController <WFLWorkflowControllerDelegate>
{
    WFLWorkflowController *_currentWorkflowController;
    NSMutableDictionary *_commandWorkflowControllersDictionary;
    NSMutableDictionary *_commandCompletionBlocksDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *commandCompletionBlocksDictionary; // @synthesize commandCompletionBlocksDictionary=_commandCompletionBlocksDictionary;
@property(retain, nonatomic) NSMutableDictionary *commandWorkflowControllersDictionary; // @synthesize commandWorkflowControllersDictionary=_commandWorkflowControllersDictionary;
@property(retain, nonatomic) WFLWorkflowController *currentWorkflowController; // @synthesize currentWorkflowController=_currentWorkflowController;
- (void)_releaseWorkflowController:(id)arg1;
- (id)_commandIdentifierForWorkflowController:(id)arg1;
- (void)_handleCardCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_setUpHelpers;
- (id)progress;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (void)workflowControllerDidStop:(id)arg1 withError:(id)arg2;
- (void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2;
- (void)workflowControllerWillRun:(id)arg1;
- (void)handleCardCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

