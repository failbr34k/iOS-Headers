//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BSServiceConnectionEndpoint, BSServiceInterface, BSServiceQuality, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol FBSServiceFacilityClientConfiguring
- (void)setCalloutQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setInterfaceTarget:(id)arg1;
- (void)setInterface:(BSServiceInterface *)arg1;
- (void)setServiceQuality:(BSServiceQuality *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setEndpoint:(BSServiceConnectionEndpoint *)arg1;
@end

