//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSString;

@interface BMInferredModeEvent : NSObject <BMStoreData, BMProtoBufWrapper>
{
    _Bool _isAutomationEnabled;
    _Bool _isStart;
    double _absoluteTimestamp;
    NSString *_modeIdentifier;
    long long _origin;
    NSString *_originBundleId;
    NSString *_uuid;
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(readonly, nonatomic) _Bool isAutomationEnabled; // @synthesize isAutomationEnabled=_isAutomationEnabled;
@property(readonly, nonatomic) NSString *originBundleId; // @synthesize originBundleId=_originBundleId;
@property(readonly, nonatomic) long long origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) NSString *modeIdentifier; // @synthesize modeIdentifier=_modeIdentifier;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
- (_Bool)isEqual:(id)arg1;
- (id)proto;
- (id)initWithProtoData:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)encodeAsProto;
- (id)json;
- (id)jsonDict;
- (id)serialize;
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithAbsoluteTimestamp:(double)arg1 modeIdentifier:(id)arg2 origin:(long long)arg3 originBundleId:(id)arg4 isAutomationEnabled:(_Bool)arg5 isStart:(_Bool)arg6 uuid:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

