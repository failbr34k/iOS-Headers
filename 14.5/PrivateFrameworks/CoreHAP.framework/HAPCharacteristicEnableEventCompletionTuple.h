//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface HAPCharacteristicEnableEventCompletionTuple : HMFObject
{
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

+ (id)enableEventCompletionTupleWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;

@end

