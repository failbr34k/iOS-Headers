//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASDServiceBroker;

@interface ASDInstallAttribution : NSObject
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addInstallAttributionParamsWithConfig:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addInstallAttributionParamsWithConfig:(id)arg1;
- (void)endImpressionWithConfig:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startImpressionWithConfig:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_initWithServiceBroker:(id)arg1;
- (id)init;

@end

