//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEIKEv2Packet.h>

@class NEIKEv2IKESAPayload, NEIKEv2KeyExchangePayload, NEIKEv2NoncePayload, NEIKEv2NotifyPayload, NSArray;

@interface NEIKEv2IKESAInitPacket : NEIKEv2Packet
{
    NEIKEv2NotifyPayload *_cookie;
    NEIKEv2IKESAPayload *_sa;
    NEIKEv2KeyExchangePayload *_ke;
    NEIKEv2NoncePayload *_nonce;
    NSArray *_vendorIDs;
}

+ (_Bool)encryptPayloads;
+ (unsigned long long)exchangeType;
+ (id)copyTypeDescription;
+ (id)createIKESAInitResponse:(id)arg1 errorCode:(unsigned long long)arg2 errorData:(id)arg3;
+ (id)createIKESAInitResponse:(id)arg1 ikeSA:(id)arg2;
+ (id)createIKESAInitForInitiatorIKESA:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSArray *vendorIDs; // @synthesize vendorIDs=_vendorIDs;
@property(retain) NEIKEv2NoncePayload *nonce; // @synthesize nonce=_nonce;
@property(retain) NEIKEv2KeyExchangePayload *ke; // @synthesize ke=_ke;
@property(retain) NEIKEv2IKESAPayload *sa; // @synthesize sa=_sa;
@property(retain) NEIKEv2NotifyPayload *cookie; // @synthesize cookie=_cookie;
- (void)filloutPayloads;
- (void)gatherPayloads;
- (_Bool)validateSAInitAsResponder:(id)arg1 sendInvalidKE:(_Bool *)arg2;
- (_Bool)validateSAInitAsInitiator:(id)arg1;

@end

