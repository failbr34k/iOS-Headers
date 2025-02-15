//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCControlChannelDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCSessionMessaging : NSObject <VCControlChannelDelegate>
{
    NSMutableDictionary *topics;
    id controlChannelWeak;
}

- (void)controlChannel:(id)arg1 clearTransactionCacheForParticipant:(id)arg2;
- (void)controlChannel:(id)arg1 sendReliableMessage:(id)arg2 didSucceed:(_Bool)arg3 toParticipant:(id)arg4;
- (void)controlChannel:(id)arg1 receivedMessage:(id)arg2 transactionID:(unsigned int)arg3 fromParticipant:(id)arg4;
- (id)newDictionaryFromUnpackedMomentsMessage:(id)arg1;
- (id)newPackedMessageFromMomentsDictionary:(id)arg1;
- (id)newDictionaryFromUnpackedMessage:(id)arg1;
- (id)newPackedMessageFromDictionary:(id)arg1;
- (void)sendMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;
- (void)sendMessage:(id)arg1 withTopic:(id)arg2;
- (id)messageForTopic:(id)arg1 command:(id)arg2;
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(_Bool)arg3 receiveHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)stopMessaging;
- (void)startMessaging;
- (id)initWithControlChannel:(id)arg1 remoteVersion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

