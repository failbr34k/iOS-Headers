//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreBluetooth/NSObject-Protocol.h>

@class CBPeer, NSDictionary;

@protocol CBPairingAgentParentDelegate <NSObject>
- (NSDictionary *)sendSyncMsg:(int)arg1 args:(NSDictionary *)arg2;
- (_Bool)sendMsg:(int)arg1 args:(NSDictionary *)arg2;
- (CBPeer *)peerWithInfo:(NSDictionary *)arg1;
@end

