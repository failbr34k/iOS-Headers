//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/IDSConnectionDelegate-Protocol.h>

@class IDSAccount, IDSConnection, IDSGroupSessionParticipantUpdate, NSArray, NSData, NSDictionary, NSError, NSNumber, NSString;

@protocol IDSConnectionDelegatePrivate <IDSConnectionDelegate>

@optional
- (void)connection:(IDSConnection *)arg1 account:(IDSAccount *)arg2 receivedGroupSessionParticipantDataUpdate:(IDSGroupSessionParticipantUpdate *)arg3;
- (void)connection:(IDSConnection *)arg1 account:(IDSAccount *)arg2 receivedGroupSessionParticipantUpdate:(IDSGroupSessionParticipantUpdate *)arg3;
- (void)connection:(IDSConnection *)arg1 account:(IDSAccount *)arg2 sessionInviteReceived:(NSString *)arg3 fromID:(NSString *)arg4 transportType:(NSNumber *)arg5 options:(NSDictionary *)arg6 context:(NSData *)arg7 messageContext:(id)arg8;
- (void)connection:(IDSConnection *)arg1 didFlushCacheForRemoteURI:(NSString *)arg2 fromURI:(NSString *)arg3 guid:(NSString *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingTopLevelMessage:(NSDictionary *)arg2 fromID:(NSString *)arg3 messageContext:(id)arg4;
- (void)connection:(IDSConnection *)arg1 identifier:(NSString *)arg2 alternateCallbackID:(NSString *)arg3 willSendToDestinations:(NSArray *)arg4 skippedDestinations:(NSArray *)arg5 registrationPropertyToDestinations:(NSDictionary *)arg6;
- (void)connection:(IDSConnection *)arg1 messageIdentifier:(NSString *)arg2 alternateCallbackID:(NSString *)arg3 updatedWithResponseCode:(long long)arg4 error:(NSError *)arg5 lastCall:(_Bool)arg6 messageContext:(id)arg7;
- (void)connection:(IDSConnection *)arg1 messageIdentifier:(NSString *)arg2 alternateCallbackID:(NSString *)arg3 updatedWithResponseCode:(long long)arg4 error:(NSError *)arg5 lastCall:(_Bool)arg6;
@end

