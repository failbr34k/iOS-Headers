//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECLocalMessageAction.h>

#import <EmailCore/ECFlagChangeUndownloadedMessageActionBuilder-Protocol.h>

@class ECMessageFlagChange, NSString, NSURL;

@interface ECFlagChangeUndownloadedMessageAction : ECLocalMessageAction <ECFlagChangeUndownloadedMessageActionBuilder>
{
    NSString *_oldestPersistedRemoteID;
    ECMessageFlagChange *_flagChange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ECMessageFlagChange *flagChange; // @synthesize flagChange=_flagChange;
@property(copy, nonatomic) NSString *oldestPersistedRemoteID; // @synthesize oldestPersistedRemoteID=_oldestPersistedRemoteID;
- (id)initWithBuilder:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSURL *mailboxURL;
@property(retain, nonatomic) NSString *messageActionPersistentID;
@property(readonly) Class superclass;
@property(nonatomic) _Bool userInitiated;

@end

