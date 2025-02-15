//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>
#import <ReminderKit/REMExternalSyncMetadataWritableProviding-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>
#import <ReminderKit/REMSortingStyleReadWriteProtocol-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSOrderedSet, NSSet, NSString, REMColor, REMObjectID, REMResolutionTokenMap;

@interface REMListStorage : NSObject <NSCopying, NSSecureCoding, REMSortingStyleReadWriteProtocol, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding>
{
    NSOrderedSet *_reminderIDsMergeableOrdering;
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    _Bool _isGroup;
    _Bool _showingLargeAttachments;
    _Bool _remindersICSDisplayOrderChanged;
    _Bool _daIsEventOnlyContainer;
    _Bool _daIsReadOnly;
    _Bool _daIsImmutable;
    _Bool _daIsNotificationsCollection;
    _Bool _isPlaceholder;
    NSString *externalIdentifier;
    NSString *externalModificationTag;
    NSString *daSyncToken;
    NSString *daPushKey;
    NSString *sortingStyle;
    long long sortingDirection;
    REMObjectID *_accountID;
    REMObjectID *_objectID;
    NSString *_name;
    REMColor *_color;
    NSString *_badgeEmblem;
    REMObjectID *_parentAccountID;
    REMObjectID *_parentListID;
    NSData *_reminderIDsMergeableOrderingData;
    NSDictionary *_reminderIDsOrderingHints;
    REMResolutionTokenMap *_resolutionTokenMap;
    NSData *_resolutionTokenMapData;
    NSSet *_reminderIDsToUndelete;
    NSString *_sharedOwnerName;
    NSString *_sharedOwnerAddress;
    long long _sharingStatus;
    NSArray *_sharees;
    REMObjectID *_sharedOwnerID;
    NSDate *_lastUserAccessDate;
    NSArray *_calDAVNotifications;
    NSString *_daExternalIdentificationTag;
    NSDictionary *_daBulkRequests;
    long long _daDisplayOrder;
    NSString *_currentUserShareParticipantID;
}

+ (void)set_forceDisableFullRemindersSorting:(_Bool)arg1;
+ (_Bool)_forceDisableFullRemindersSorting;
+ (id)reminderIDsMergeableOrderingFromReminderIDUUIDStringsJSONData:(id)arg1 error:(id *)arg2;
+ (id)reminderIDUUIDStringsJSONDataFromReminderIDsMergeableOrdering:(id)arg1 error:(id *)arg2;
+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentUserShareParticipantID; // @synthesize currentUserShareParticipantID=_currentUserShareParticipantID;
@property(nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(nonatomic) _Bool daIsNotificationsCollection; // @synthesize daIsNotificationsCollection=_daIsNotificationsCollection;
@property(nonatomic) _Bool daIsImmutable; // @synthesize daIsImmutable=_daIsImmutable;
@property(nonatomic) _Bool daIsReadOnly; // @synthesize daIsReadOnly=_daIsReadOnly;
@property(nonatomic) _Bool daIsEventOnlyContainer; // @synthesize daIsEventOnlyContainer=_daIsEventOnlyContainer;
@property(nonatomic) long long daDisplayOrder; // @synthesize daDisplayOrder=_daDisplayOrder;
@property(retain, nonatomic) NSDictionary *daBulkRequests; // @synthesize daBulkRequests=_daBulkRequests;
@property(retain, nonatomic) NSString *daExternalIdentificationTag; // @synthesize daExternalIdentificationTag=_daExternalIdentificationTag;
@property(retain, nonatomic) NSArray *calDAVNotifications; // @synthesize calDAVNotifications=_calDAVNotifications;
@property(copy, nonatomic) NSDate *lastUserAccessDate; // @synthesize lastUserAccessDate=_lastUserAccessDate;
@property(retain, nonatomic) REMObjectID *sharedOwnerID; // @synthesize sharedOwnerID=_sharedOwnerID;
@property(retain, nonatomic) NSArray *sharees; // @synthesize sharees=_sharees;
@property(nonatomic) long long sharingStatus; // @synthesize sharingStatus=_sharingStatus;
@property(copy, nonatomic) NSString *sharedOwnerAddress; // @synthesize sharedOwnerAddress=_sharedOwnerAddress;
@property(copy, nonatomic) NSString *sharedOwnerName; // @synthesize sharedOwnerName=_sharedOwnerName;
@property(nonatomic) _Bool remindersICSDisplayOrderChanged; // @synthesize remindersICSDisplayOrderChanged=_remindersICSDisplayOrderChanged;
@property(retain, nonatomic) NSSet *reminderIDsToUndelete; // @synthesize reminderIDsToUndelete=_reminderIDsToUndelete;
@property(retain, nonatomic) NSData *resolutionTokenMapData; // @synthesize resolutionTokenMapData=_resolutionTokenMapData;
@property(retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // @synthesize resolutionTokenMap=_resolutionTokenMap;
@property(retain, nonatomic) NSDictionary *reminderIDsOrderingHints; // @synthesize reminderIDsOrderingHints=_reminderIDsOrderingHints;
@property(retain, nonatomic) NSData *reminderIDsMergeableOrderingData; // @synthesize reminderIDsMergeableOrderingData=_reminderIDsMergeableOrderingData;
@property(retain, nonatomic) REMObjectID *parentListID; // @synthesize parentListID=_parentListID;
@property(retain, nonatomic) REMObjectID *parentAccountID; // @synthesize parentAccountID=_parentAccountID;
@property(nonatomic) _Bool showingLargeAttachments; // @synthesize showingLargeAttachments=_showingLargeAttachments;
@property(retain, nonatomic) NSString *badgeEmblem; // @synthesize badgeEmblem=_badgeEmblem;
@property(retain, nonatomic) REMColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isGroup; // @synthesize isGroup=_isGroup;
@property(retain, nonatomic) REMObjectID *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) REMObjectID *accountID; // @synthesize accountID=_accountID;
@property(nonatomic) long long sortingDirection; // @synthesize sortingDirection;
@property(copy, nonatomic) NSString *sortingStyle; // @synthesize sortingStyle;
@property(copy, nonatomic) NSString *daPushKey; // @synthesize daPushKey;
@property(copy, nonatomic) NSString *daSyncToken; // @synthesize daSyncToken;
@property(copy, nonatomic) NSString *externalModificationTag; // @synthesize externalModificationTag;
@property(copy, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier;
- (id)cdKeyToStorageKeyMap;
@property(readonly, nonatomic) REMObjectID *remObjectID;
@property(readonly, nonatomic) NSString *displayName;
- (_Bool)hasDeserializedReminderIDsMergeableOrdering;
@property(retain, nonatomic) NSOrderedSet *reminderIDsMergeableOrdering;
- (id)ekColor;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setStoreGenerationIfNeeded:(unsigned long long)arg1;
- (unsigned long long)storeGeneration;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(_Bool)arg4 reminderIDsMergeableOrderingData:(id)arg5;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(_Bool)arg4 reminderIDsMergeableOrdering:(id)arg5;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3;

@end

