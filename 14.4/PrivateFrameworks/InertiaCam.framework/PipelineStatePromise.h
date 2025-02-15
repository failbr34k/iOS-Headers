//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_group;

@interface PipelineStatePromise : NSObject
{
    NSMapTable *pipelineStates;
    NSMapTable *errors;
    NSObject<OS_dispatch_group> *group;
    _Atomic _Bool initialization_completed;
}

- (void).cxx_destruct;
- (id)errorForFunction:(id)arg1;
- (id)pipelineStateForFunction:(id)arg1;
- (_Bool)groupWasSuccessful;
- (_Bool)timesOutWaitingForPipelineStates:(double)arg1;
- (id)initWithDispatchGroup:(id)arg1 pipelineStates:(id)arg2 errors:(id)arg3;

@end

