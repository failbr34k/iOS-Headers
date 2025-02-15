//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMCollection.h>

#import <Email/EFLoggable-Protocol.h>
#import <Email/EMMessageListItem-Protocol.h>
#import <Email/EMThreadBuilder-Protocol.h>
#import <Email/NSCopying-Protocol.h>
#import <Email/NSSecureCoding-Protocol.h>

@class ECMessageFlags, ECSubject, EFFuture, EFQuery, EMMailboxScope, EMMessageRepository, EMObjectID, NSArray, NSDate, NSIndexSet, NSString;
@protocol EMCollectionItemID, EMMailboxTypeResolver;

@interface EMThread : EMCollection <EMThreadBuilder, EFLoggable, NSCopying, NSSecureCoding, EMMessageListItem>
{
    unsigned long long _isEditable;
    EMMailboxScope *_mailboxScope;
    id <EMMailboxTypeResolver> _mailboxTypeResolver;
    NSArray *_mailboxes;
    NSArray *_mailboxObjectIDs;
    struct os_unfair_lock_s _mailboxScopeLock;
    struct os_unfair_lock_s _mailboxTypeResolverLock;
    struct os_unfair_lock_s _mailboxesLock;
    _Bool _hasUnflagged;
    _Bool _isVIP;
    _Bool _isBocked;
    _Bool _hasAttachments;
    _Bool _isToMe;
    _Bool _isCCMe;
    NSDate *_date;
    ECSubject *_subject;
    NSString *_summary;
    NSArray *_senderList;
    NSArray *_toList;
    NSArray *_ccList;
    ECMessageFlags *_flags;
    NSIndexSet *_flagColors;
    long long _conversationNotificationLevel;
    unsigned long long _count;
    id <EMCollectionItemID> _displayMessageItemID;
    EFQuery *_originatingQuery;
}

+ (_Bool)supportsSecureCoding;
+ (id)log;
- (void).cxx_destruct;
@property(readonly, nonatomic) EFQuery *originatingQuery; // @synthesize originatingQuery=_originatingQuery;
@property _Bool isCCMe; // @synthesize isCCMe=_isCCMe;
@property _Bool isToMe; // @synthesize isToMe=_isToMe;
@property(retain) id <EMCollectionItemID> displayMessageItemID; // @synthesize displayMessageItemID=_displayMessageItemID;
@property unsigned long long count; // @synthesize count=_count;
@property long long conversationNotificationLevel; // @synthesize conversationNotificationLevel=_conversationNotificationLevel;
@property _Bool hasAttachments; // @synthesize hasAttachments=_hasAttachments;
@property _Bool isBlocked; // @synthesize isBlocked=_isBocked;
@property _Bool isVIP; // @synthesize isVIP=_isVIP;
@property(copy) NSIndexSet *flagColors; // @synthesize flagColors=_flagColors;
@property _Bool hasUnflagged; // @synthesize hasUnflagged=_hasUnflagged;
@property(retain) ECMessageFlags *flags; // @synthesize flags=_flags;
@property(copy) NSArray *ccList; // @synthesize ccList=_ccList;
@property(copy) NSArray *toList; // @synthesize toList=_toList;
@property(copy) NSArray *senderList; // @synthesize senderList=_senderList;
@property(copy) NSString *summary; // @synthesize summary=_summary;
@property(retain) ECSubject *subject; // @synthesize subject=_subject;
@property(retain) NSDate *date; // @synthesize date=_date;
- (void)notifyChangeObserversAboutChangesByItemIDs:(id)arg1;
@property(readonly) _Bool isEditable;
@property(readonly) _Bool shouldArchiveByDefault;
@property(readonly) _Bool supportsArchiving;
@property(readonly) _Bool deleteMovesToTrash;
@property(readonly) EFFuture *displayMessage;
@property(readonly) EMObjectID *displayMessageObjectID;
@property(copy) NSArray *mailboxes;
@property long long _internalID;
@property(copy) NSArray *mailboxObjectIDs; // @synthesize mailboxObjectIDs=_mailboxObjectIDs;
@property long long conversationID;
@property(readonly, nonatomic) id <EMCollectionItemID> itemID;
- (_Bool)objectIDBelongsToCollection:(id)arg1;
- (id)itemIDForObjectID:(id)arg1;
- (id)objectIDForItemID:(id)arg1;
- (id)query;
@property(readonly, nonatomic) EMMailboxScope *mailboxScope;
@property(retain) id <EMMailboxTypeResolver> mailboxTypeResolver;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)_commonInitWithOriginatingQuery:(id)arg1 builder:(CDUnknownBlockType)arg2;
- (id)initWithObjectID:(id)arg1 originatingQuery:(id)arg2 builder:(CDUnknownBlockType)arg3;
- (void)setRepository:(id)arg1;
@property(readonly, nonatomic) EMMessageRepository *repository;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) EMObjectID *objectID;
@property(readonly) Class superclass;

@end

