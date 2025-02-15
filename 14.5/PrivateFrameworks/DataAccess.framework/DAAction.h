//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataAccess/NSSecureCoding-Protocol.h>

@interface DAAction : NSObject <NSSecureCoding>
{
    _Bool _ignoresGuardianRestrictions;
    int _changeId;
    unsigned long long _itemChangeType;
    id _serverId;
    id _instanceId;
    id _changedItem;
    id _forwardedAttendees;
    id _forwardedAttendeeUUIDs;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool ignoresGuardianRestrictions; // @synthesize ignoresGuardianRestrictions=_ignoresGuardianRestrictions;
@property(retain, nonatomic) id forwardedAttendeeUUIDs; // @synthesize forwardedAttendeeUUIDs=_forwardedAttendeeUUIDs;
@property(retain, nonatomic) id forwardedAttendees; // @synthesize forwardedAttendees=_forwardedAttendees;
@property(nonatomic) int changeId; // @synthesize changeId=_changeId;
@property(retain, nonatomic, setter=_setChangedItem:) id changedItem; // @synthesize changedItem=_changedItem;
@property(retain, nonatomic) id instanceId; // @synthesize instanceId=_instanceId;
@property(retain, nonatomic) id serverId; // @synthesize serverId=_serverId;
@property(nonatomic) unsigned long long itemChangeType; // @synthesize itemChangeType=_itemChangeType;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)stringForItemChangeType:(unsigned long long)arg1;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 instanceId:(id)arg4;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3;
- (id)message;

@end

