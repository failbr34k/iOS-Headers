//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFActivity;
@protocol HAP2CoAPIOConsumer;

@interface HAP2CoAPIOThreadQueueEntry : NSObject
{
    _Bool _shouldRegister;
    _Bool _shouldUnregister;
    id <HAP2CoAPIOConsumer> _consumer;
    CDUnknownBlockType _sessionBlock;
    HMFActivity *_activity;
}

- (void).cxx_destruct;

@end

