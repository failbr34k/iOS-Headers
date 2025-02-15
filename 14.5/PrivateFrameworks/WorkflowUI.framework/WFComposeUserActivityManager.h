//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, UIResponder, WFWorkflow;

@interface WFComposeUserActivityManager : NSObject
{
    _Bool _active;
    WFWorkflow *_workflow;
    NSDictionary *_userInfo;
    UIResponder *_responder;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIResponder *responder; // @synthesize responder=_responder;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateUserActivityState:(id)arg1;
- (void)dealloc;
- (id)initWithWorkflow:(id)arg1 targetResponder:(id)arg2;

@end

