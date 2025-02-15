//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSPromise;

@interface AMSBinaryPromise : NSObject
{
    AMSPromise *_backingPromise;
}

+ (id)_globalPromiseStorageAccessQueue;
+ (id)_globalPromiseStorage;
+ (id)promiseWithSuccess;
+ (id)promiseWithPromise:(id)arg1;
+ (id)promiseWithFlattenedPromises:(id)arg1;
+ (id)promiseWithError:(id)arg1;
+ (id)promiseWithAny:(id)arg1;
+ (id)promiseWithAll:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) AMSPromise *backingPromise; // @synthesize backingPromise=_backingPromise;
- (void)_removeFromGlobalPromiseStorage;
- (id)promiseAdapter;
- (CDUnknownBlockType)completionHandlerAdapter;
- (id)thenWithBlock:(CDUnknownBlockType)arg1;
- (id)continueWithBlock:(CDUnknownBlockType)arg1;
- (id)catchWithBlock:(CDUnknownBlockType)arg1;
- (void)waitUntilFinishedWithTimeout:(double)arg1;
- (void)waitUntilFinished;
- (_Bool)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (_Bool)resultWithError:(id *)arg1;
- (_Bool)finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (_Bool)finishWithSuccess;
- (_Bool)finishWithPromise:(id)arg1;
- (_Bool)finishWithError:(id)arg1;
- (_Bool)cancel;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (void)addFinishBlock:(CDUnknownBlockType)arg1;
- (void)addErrorBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

