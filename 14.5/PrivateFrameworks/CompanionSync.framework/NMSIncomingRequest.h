//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/NMSDeviceSourced-Protocol.h>
#import <CompanionSync/NMSObfuscatableDescriptionProviding-Protocol.h>

@class IDSMessageContext, NMSMessageCenter, NMSOutgoingResponse, NSData, NSString;
@protocol OS_os_transaction;

@interface NMSIncomingRequest : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding>
{
    _Bool _expectsResponse;
    unsigned short _messageID;
    NSString *sourceDeviceID;
    NMSMessageCenter *_messageCenter;
    NSString *_idsIdentifier;
    NSData *_data;
    unsigned long long _priority;
    NMSOutgoingResponse *_response;
    NSObject<OS_os_transaction> *_transaction;
    id _pbRequest;
    IDSMessageContext *_idsContext;
}

+ (void)setAllowsUnrepliedRequestsForUnitTesting:(_Bool)arg1;
+ (_Bool)allowsUnrepliedRequestsForUnitTesting;
- (void).cxx_destruct;
@property(retain, nonatomic) IDSMessageContext *idsContext; // @synthesize idsContext=_idsContext;
@property(retain, nonatomic) id pbRequest; // @synthesize pbRequest=_pbRequest;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) NMSOutgoingResponse *response; // @synthesize response=_response;
@property(nonatomic) _Bool expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property(nonatomic) __weak NMSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(retain, nonatomic) NSString *sourceDeviceID; // @synthesize sourceDeviceID;
- (id)CPObfuscatedDescriptionObject;
@property(readonly, copy) NSString *description;
- (void)configureResponse;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

