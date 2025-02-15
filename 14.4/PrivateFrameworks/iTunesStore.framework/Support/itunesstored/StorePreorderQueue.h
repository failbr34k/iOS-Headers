//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray;
@protocol OS_dispatch_queue;

@interface StorePreorderQueue : NSObject
{
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ISOperationQueue *_operationQueue;
}

+ (void)registerManagerWithMessage:(id)arg1 connection:(id)arg2;
+ (void)observeXPCServer:(id)arg1;
+ (void)getPreordersWithMessage:(id)arg1 connection:(id)arg2;
+ (void)checkQueueWithMessage:(id)arg1 connection:(id)arg2;
+ (void)cancelPreordersWithMessage:(id)arg1 connection:(id)arg2;
+ (id)sharedPreorderQueue;
- (void)_sendChangeNotificationForKinds:(id)arg1;
- (id)_preorderQueryWithAccountID:(id)arg1 database:(id)arg2;
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_handleLoadQueueFinish:(id)arg1;
- (void)_handleCheckQueueFinish:(id)arg1;
- (id)_copyPreorderAccountIdentifiers;
- (id)_clientForConnection:(id)arg1;
- (void)_clientDisconnectNotification:(id)arg1;
- (void)removePreordersWithPreorderIdentifiers:(id)arg1;
- (void)checkPreorderQueue;
- (void)addPreordersWithItems:(id)arg1 accountID:(id)arg2;
- (void)dealloc;
- (id)init;

@end

