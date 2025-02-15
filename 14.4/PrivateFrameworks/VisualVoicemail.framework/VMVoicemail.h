//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualVoicemail/NSCopying-Protocol.h>
#import <VisualVoicemail/NSMutableCopying-Protocol.h>
#import <VisualVoicemail/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, NSURL, VMVoicemailTranscript;

@interface VMVoicemail : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned long long _remoteUID;
    unsigned long long _identifier;
    NSDate *_date;
    NSString *_senderDestinationID;
    NSString *_senderISOCountryCode;
    NSString *_callbackDestinationID;
    NSString *_callbackISOCountryCode;
    double _duration;
    NSURL *_dataURL;
    NSString *_receiverDestinationID;
    NSString *_receiverISOCountryCode;
    NSURL *_transcriptionURL;
    NSString *_receiverLabelID;
    unsigned long long _flags;
}

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)flagsByApplyingMailboxType:(long long)arg1 toFlags:(unsigned long long)arg2;
+ (long long)mailboxTypeForFlags:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSString *receiverLabelID; // @synthesize receiverLabelID=_receiverLabelID;
@property(retain, nonatomic) NSURL *transcriptionURL; // @synthesize transcriptionURL=_transcriptionURL;
@property(copy, nonatomic) NSString *receiverISOCountryCode; // @synthesize receiverISOCountryCode=_receiverISOCountryCode;
@property(copy, nonatomic) NSString *receiverDestinationID; // @synthesize receiverDestinationID=_receiverDestinationID;
@property(retain, nonatomic) NSURL *dataURL; // @synthesize dataURL=_dataURL;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *callbackISOCountryCode; // @synthesize callbackISOCountryCode=_callbackISOCountryCode;
@property(copy, nonatomic) NSString *callbackDestinationID; // @synthesize callbackDestinationID=_callbackDestinationID;
@property(copy, nonatomic) NSString *senderISOCountryCode; // @synthesize senderISOCountryCode=_senderISOCountryCode;
@property(copy, nonatomic) NSString *senderDestinationID; // @synthesize senderDestinationID=_senderDestinationID;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long remoteUID; // @synthesize remoteUID=_remoteUID;
- (void)setFlag:(unsigned long long)arg1 enabled:(_Bool)arg2;
- (id)mailboxTypeDescription;
- (id)flagDescription;
- (_Bool)hasSameContent:(id)arg1;
- (_Bool)hasSameFlags:(id)arg1;
- (_Bool)isEqualToMessage:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long transcriptionState;
@property(readonly, nonatomic) VMVoicemailTranscript *transcript;
- (_Bool)wasTranscriptionAttempted;
@property(readonly, nonatomic, getter=isUnread) _Bool unread;
@property(nonatomic, getter=isTrashed) _Bool trashed;
@property(readonly, nonatomic, getter=isTranscriptionRated) _Bool transcriptionRated;
@property(nonatomic, getter=isTranscriptionAvailable) _Bool transcriptionAvailable;
- (_Bool)isTranscribing;
@property(nonatomic, getter=isTemporary) _Bool temporary;
@property(nonatomic, getter=isRead) _Bool read;
@property(nonatomic) long long mailboxType;
@property(nonatomic, getter=isDownloading) _Bool downloading;
@property(nonatomic, getter=isDetached) _Bool detached;
@property(nonatomic, getter=isDeleted) _Bool deleted;
@property(nonatomic, getter=isDataAvailable) _Bool dataAvailable;
@property(nonatomic, getter=isBlocked) _Bool blocked;
- (id)initWithMessage:(id)arg1;
@property(readonly, nonatomic) _Bool hasCallbackNumber;
- (id)contactUsingContactStore:(id)arg1 withKeysToFetch:(id)arg2;
- (id)contactUsingContactStore:(id)arg1;
- (id)displayLabelUsingContactStore:(id)arg1;
- (id)displayNameUsingContactStore:(id)arg1;
- (_Bool)isContactSuggested:(id)arg1;
@property(readonly, copy, nonatomic) NSData *data;
- (id)initWithVoicemailMessage:(id)arg1;
- (id)initWithData:(id)arg1;
- (_Bool)doesNotHaveFlags:(unsigned long long)arg1;
- (_Bool)hasFlags:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *dataPath;
@property(readonly, nonatomic) NSString *callbackNumber;
@property(readonly, nonatomic) NSString *sender;

@end

