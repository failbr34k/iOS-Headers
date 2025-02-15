//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore;

__attribute__((visibility("hidden")))
@interface ACRemoteCommandHandler : NSObject
{
    ACAccountStore *_accountStore;
}

- (void).cxx_destruct;
- (void)_invalidateFetchedAccountsCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deleteAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_promptUserForAccountCredential:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_authenticateAccount:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_saveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_addAccount:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removeAllAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleCommand:(id)arg1 forAccount:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

