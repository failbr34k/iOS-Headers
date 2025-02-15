//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString, SARemoteDevice;
@protocol SAAceCommand;

@interface SAExecuteOnRemoteResponse : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)executeOnRemoteResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)executeOnRemoteResponse;
- (_Bool)requiresResponse;
@property(retain, nonatomic) id <SAAceCommand> result;
@property(nonatomic) _Bool responseFromRemote;
@property(retain, nonatomic) SARemoteDevice *remoteDevice;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

