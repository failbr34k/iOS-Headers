//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBApplicationSceneEntity, SBApplicationSceneHandle, SBSceneLayoutWorkspaceTransaction;

@protocol SBSceneLayoutWorkspaceTransactionDelegate <NSObject>
- (void)transaction:(SBSceneLayoutWorkspaceTransaction *)arg1 didEndLayoutTransitionWithContinuation:(void (^)(SBWorkspaceApplicationSceneTransitionContext *, unsigned long long))arg2;
- (void)transaction:(SBSceneLayoutWorkspaceTransaction *)arg1 performTransitionWithCompletion:(void (^)(void))arg2;
- (void)transactionWillBeginLayoutTransition:(SBSceneLayoutWorkspaceTransaction *)arg1;
- (SBApplicationSceneEntity *)createSceneEntityForHandle:(SBApplicationSceneHandle *)arg1;
@end

