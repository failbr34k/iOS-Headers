//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASDExtensionMonitor, NSExtension, NSString;
@protocol ASDTestFlightServiceHostDelegate, OS_dispatch_queue;

@interface ASDTestFlightServiceHost : NSObject
{
    ASDExtensionMonitor *_monitor;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_runQueue;
    NSExtension *_currentExtension;
    double _serviceTime;
    id <ASDTestFlightServiceHostDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ASDTestFlightServiceHostDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onRunQueue_callExtensionWithContext:(CDUnknownBlockType)arg1 interruptionBlock:(CDUnknownBlockType)arg2;
- (void)_callExtensionWithContext:(CDUnknownBlockType)arg1 interruptionBlock:(CDUnknownBlockType)arg2;
- (void)_onRunQueue_updateCurrentExtensionTo:(id)arg1;
- (void)reloadAppsFromServerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)notifyOfReachedTerminalPhaseWithBetaBundleID:(id)arg1 terminalPhase:(long long)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)notifyOfReceivedPushMessages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)notifyOfReceivedPushToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *extensionIdentifier;
- (long long)_onRunQueue_extensionStatus;
@property(readonly, nonatomic) long long extensionStatus;
- (id)initWithQueue:(id)arg1;

@end

