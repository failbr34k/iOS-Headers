//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationThrottler-Protocol.h>
#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@class FCOperationThrottler, NSString;
@protocol FCOperationThrottlerDelegate;

@interface FCTimedOperationThrottler : NSObject <FCOperationThrottlerDelegate, FCOperationThrottler>
{
    double _cooldownTime;
    FCOperationThrottler *_operationThrottler;
    id <FCOperationThrottlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FCOperationThrottlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FCOperationThrottler *operationThrottler; // @synthesize operationThrottler=_operationThrottler;
@property double cooldownTime; // @synthesize cooldownTime=_cooldownTime;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
@property _Bool suspended;
- (void)tickleWithCompletion:(CDUnknownBlockType)arg1;
- (void)tickle;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

