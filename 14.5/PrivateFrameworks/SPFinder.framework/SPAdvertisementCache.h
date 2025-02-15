//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPFinder/SPAdvertisementCaching-Protocol.h>
#import <SPFinder/SPBeaconPayloadCaching-Protocol.h>

@class FMXPCServiceDescription, FMXPCSession, NSString;
@protocol OS_dispatch_queue, SPAdvertisementCacheXPCProtocol;

@interface SPAdvertisementCache : NSObject <SPAdvertisementCaching, SPBeaconPayloadCaching>
{
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    id <SPAdvertisementCacheXPCProtocol> _proxy;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SPAdvertisementCacheXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
- (void)clearCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)beaconAdvertisementAtFileURL:(id)arg1 beaconIdentifier:(id)arg2 scanDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)markBeaconPayloadsProcessed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beaconPayloadsForSearchCriteria:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveBeaconPayloads:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAdvertisementsProcessed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)advertisementsForSearchCriteria:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveAdvertisements:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markRecordsProcessed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mockingEnabled:(_Bool)arg1;
- (id)remoteInterface;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

