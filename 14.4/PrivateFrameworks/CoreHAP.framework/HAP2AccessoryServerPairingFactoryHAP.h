//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAP2AccessoryServerPairingFactory-Protocol.h>

@class NSString;

@interface HAP2AccessoryServerPairingFactoryHAP : NSObject <HAP2AccessoryServerPairingFactory>
{
}

- (id)createPairingDriverWithAccessoryInfo:(id)arg1 transport:(id)arg2 secureTransportFactory:(id)arg3 encoding:(id)arg4 operationQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

