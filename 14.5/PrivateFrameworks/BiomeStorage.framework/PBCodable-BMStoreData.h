//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStorage/BMStoreData-Protocol.h>

@class NSString;

@interface PBCodable (BMStoreData) <BMStoreData>
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
- (id)serialize;
@property(readonly, nonatomic) unsigned int dataVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

