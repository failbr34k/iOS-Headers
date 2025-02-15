//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BKSSystemApplicationDelegate-Protocol.h>
#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class FBSystemShellInitializationContext, NSMutableArray, NSMutableSet, NSString, RBSAssertion;

@interface FBSystemShell : NSObject <BSDescriptionProviding, BKSSystemApplicationDelegate>
{
    FBSystemShellInitializationContext *_initializationContext;
    unsigned long long _state;
    id _observerToken;
    RBSAssertion *_runningAssertion;
    struct os_unfair_lock_s _lock;
    RBSAssertion *_lock_preventSleepAssertion;
    NSMutableSet *_lock_preventIdleSleepReasons;
    NSMutableArray *_lock_blocksToRunWhenReady;
}

+ (_Bool)systemApplicationIsAliveForWatchdog:(id)arg1;
+ (id)sharedInstance;
+ (id)_createSingletonWithOptions:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long _state; // @synthesize _state;
@property(readonly, nonatomic) FBSystemShellInitializationContext *initializationContext; // @synthesize initializationContext=_initializationContext;
- (void)_setState:(unsigned long long)arg1;
- (void)_setSystemIdleSleepDisabled:(_Bool)arg1 forReason:(id)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_addBlockToExecuteWhenReady:(CDUnknownBlockType)arg1;
- (id)_bksSystemApplication;
- (void)_initializationComplete;
- (void)sendActionsToBackBoard:(id)arg1;
- (void)readyForInteraction;
- (id)_initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

