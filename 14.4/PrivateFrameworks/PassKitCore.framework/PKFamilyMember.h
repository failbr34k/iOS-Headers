//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSSet, NSString;

@interface PKFamilyMember : NSObject <NSSecureCoding>
{
    _Bool _me;
    _Bool _parentalControlsEnabled;
    _Bool _askToBuyEnabled;
    _Bool _childAccount;
    _Bool _parent;
    _Bool _organizer;
    NSString *_appleID;
    NSSet *_appleIDAliases;
    NSNumber *_dsid;
    NSString *_altDSID;
    NSString *_firstName;
    NSString *_lastName;
    unsigned long long _age;
    NSDate *_dateOfBirth;
    long long _memberType;
    NSDate *_joinedDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, getter=isOrganizer) _Bool organizer; // @synthesize organizer=_organizer;
@property(nonatomic, getter=isParent) _Bool parent; // @synthesize parent=_parent;
@property(nonatomic, getter=isChildAccount) _Bool childAccount; // @synthesize childAccount=_childAccount;
@property(nonatomic) _Bool askToBuyEnabled; // @synthesize askToBuyEnabled=_askToBuyEnabled;
@property(nonatomic) _Bool parentalControlsEnabled; // @synthesize parentalControlsEnabled=_parentalControlsEnabled;
@property(copy, nonatomic) NSDate *joinedDate; // @synthesize joinedDate=_joinedDate;
@property(nonatomic) long long memberType; // @synthesize memberType=_memberType;
@property(copy, nonatomic) NSDate *dateOfBirth; // @synthesize dateOfBirth=_dateOfBirth;
@property(nonatomic) unsigned long long age; // @synthesize age=_age;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(copy, nonatomic) NSSet *appleIDAliases; // @synthesize appleIDAliases=_appleIDAliases;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(nonatomic, getter=isMe) _Bool me; // @synthesize me=_me;
- (id)description;
- (_Bool)isEqualToFamilyMember:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)canSharePeerPaymentAccount;
- (id)labelName;
- (id)initWithCoder:(id)arg1;

@end

