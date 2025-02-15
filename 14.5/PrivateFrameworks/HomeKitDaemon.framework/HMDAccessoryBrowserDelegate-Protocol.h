//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HAPAccessoryServer, HMDAccessoryAdvertisement, HMDAccessoryBrowser, HMDMediaEndpoint, HMFOSTransaction, NSArray, NSError, NSNumber, NSString;

@protocol HMDAccessoryBrowserDelegate <NSObject>
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didUpdateEndpoint:(HMDMediaEndpoint *)arg2;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 discoveryFailedWithError:(NSError *)arg2 accessoryServer:(NSString *)arg3 linkType:(long long)arg4;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didUpdateCategory:(NSNumber *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didUpdateHasPairings:(_Bool)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didUpdateValuesForCharacteristics:(NSArray *)arg3 stateNumber:(NSNumber *)arg4 broadcast:(_Bool)arg5;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 identifier:(NSString *)arg2 reachable:(_Bool)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didDiscoverAccessories:(NSArray *)arg3 transaction:(HMFOSTransaction *)arg4 error:(NSError *)arg5;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didStopPairingWithError:(NSError *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didUpdateReachability:(_Bool)arg2 forBTLEAccessoriesWithServerIdentifier:(NSString *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didFinishWACForAccessoryWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didFindAccessoryServerNeedingReprovisioning:(HAPAccessoryServer *)arg2 error:(NSError *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didRemoveAccessoryServer:(HAPAccessoryServer *)arg2 error:(NSError *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didTombstoneAccessoryServer:(HAPAccessoryServer *)arg2;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didFindAccessoryServer:(HAPAccessoryServer *)arg2 stateChanged:(_Bool)arg3 stateNumber:(NSNumber *)arg4 completion:(void (^)(_Bool, _Bool))arg5;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didRemoveAccessoryAdvertisement:(HMDAccessoryAdvertisement *)arg2;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didAddAccessoryAdvertisement:(HMDAccessoryAdvertisement *)arg2;
@end

