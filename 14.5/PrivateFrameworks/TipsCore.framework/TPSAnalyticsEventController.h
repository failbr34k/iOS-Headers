//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TipsCore/_TPSXPCExportable-Protocol.h>

@class NSString, TPSAnalyticsDataProvider, TPSDuetDataProvider, _TPSXPCConnection;
@protocol OS_dispatch_queue;

@interface TPSAnalyticsEventController : NSObject <_TPSXPCExportable>
{
    TPSDuetDataProvider *_duetDataProvider;
    TPSAnalyticsDataProvider *_dataProvider;
    _TPSXPCConnection *_xpcConnection;
}

+ (_Bool)callerIsTipsd;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) _TPSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak TPSAnalyticsDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)_destroyXPCConnection;
- (void)sendToCoreAnalytics:(id)arg1 eventName:(id)arg2;
- (void)logAnalyticsEvents:(id)arg1;
- (void)logAnalyticsEvent:(id)arg1;
- (void)logAnalyticsEventsFromTipsd:(id)arg1;
- (void)logAnalyticsEventFromTipsd:(id)arg1;
- (id)duetDataProvider;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

