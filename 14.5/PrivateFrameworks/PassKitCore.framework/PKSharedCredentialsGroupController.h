//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, PKAppletSubcredential, PKContactResolver, PKPaymentPass, PKPaymentWebService;
@protocol OS_dispatch_queue;

@interface PKSharedCredentialsGroupController : NSObject
{
    PKContactResolver *_contactResolver;
    PKPaymentWebService *_webService;
    PKAppletSubcredential *_credential;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_delegates;
    struct os_unfair_lock_s _delegateLock;
    _Bool _sharingEnabled;
    NSArray *_groups;
    PKPaymentPass *_pass;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(readonly, nonatomic) _Bool sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(readonly, nonatomic) NSArray *groups; // @synthesize groups=_groups;
- (unsigned long long)numberOfOutstandingSharingSession;
@property(readonly, nonatomic) NSArray *nonLocalGroups;
- (void)immobilizerTokenCountWithCompletion:(CDUnknownBlockType)arg1;
- (void)parseCredentialsOnPass:(id)arg1;
- (void)updateGroupsWithCredential:(id)arg1;
- (void)revokeGroup:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)canSendInvitationWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchContactForGroup:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactForGroup:(id)arg1;
- (void)didUpdateGroups;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)initWithPass:(id)arg1 contactResolver:(id)arg2 webService:(id)arg3 queue:(id)arg4;

@end

