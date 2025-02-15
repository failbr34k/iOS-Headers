//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDS/PDSXPCConnectionVendor-Protocol.h>
#import <PDS/PDSXPCInterfaceVendor-Protocol.h>

@class NSString;

@interface PDSXPCAdapter : NSObject <PDSXPCInterfaceVendor, PDSXPCConnectionVendor>
{
}

+ (id)_sharedInstance;
+ (id)defaultConnectionVendor;
+ (id)defaultInterfaceVendor;
+ (void)setDisableXPC:(_Bool)arg1;
+ (_Bool)disableXPC;
- (id)connectionForMachService:(id)arg1;
- (id)interfaceWithProtocol:(id)arg1;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

