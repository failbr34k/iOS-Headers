//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTPowerAssertion;
@protocol OS_dispatch_source;

@interface MTGCDTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    MTPowerAssertion *_powerAssertion;
}

- (void).cxx_destruct;
- (void)cancelTimer;
- (void)startTimer:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

