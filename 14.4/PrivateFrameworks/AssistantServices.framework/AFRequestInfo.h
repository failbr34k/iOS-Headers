//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFRequestCompletionOptions, AFSpeechRequestOptions, NSData, NSDictionary, NSNumber, NSString, NSUUID, SAStartLocalRequest, SAStartRequest;

@interface AFRequestInfo : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _handoffRequiresUserInteraction;
    unsigned long long _timestamp;
    NSUUID *_turnIdentifier;
    AFRequestCompletionOptions *_requestCompletionOptions;
    NSUUID *_uuid;
    unsigned long long _options;
    NSNumber *_notifyState;
    NSString *_text;
    NSString *_legacyDirectActionIdentifier;
    NSString *_handoffOriginDeviceName;
    NSData *_handoffRequestData;
    NSString *_handoffURLString;
    NSString *_handoffNotification;
    NSString *_correctedSpeech;
    NSDictionary *_correctedSpeechContext;
    SAStartRequest *_startRequest;
    SAStartLocalRequest *_startLocalRequest;
    NSString *_directActionAppId;
    long long _directActionEvent;
    long long _activationEvent;
    AFSpeechRequestOptions *_speechRequestOptions;
    NSNumber *_combinedRank;
    NSNumber *_combinedScore;
    NSString *_interactionId;
    NSNumber *_onDeviceUtterancesPresent;
    NSNumber *_originalRank;
    NSNumber *_originalScore;
    NSString *_previousUtterance;
    NSString *_sessionId;
    NSString *_utteranceSource;
    NSString *_expectedSpeakerSharedUserID;
    unsigned long long _expectedSpeakerConfidenceScore;
    NSDictionary *_nonspeakerConfidenceScores;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *nonspeakerConfidenceScores; // @synthesize nonspeakerConfidenceScores=_nonspeakerConfidenceScores;
@property(nonatomic) unsigned long long expectedSpeakerConfidenceScore; // @synthesize expectedSpeakerConfidenceScore=_expectedSpeakerConfidenceScore;
@property(copy, nonatomic) NSString *expectedSpeakerSharedUserID; // @synthesize expectedSpeakerSharedUserID=_expectedSpeakerSharedUserID;
@property(copy, nonatomic) NSString *utteranceSource; // @synthesize utteranceSource=_utteranceSource;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *previousUtterance; // @synthesize previousUtterance=_previousUtterance;
@property(copy, nonatomic) NSNumber *originalScore; // @synthesize originalScore=_originalScore;
@property(copy, nonatomic) NSNumber *originalRank; // @synthesize originalRank=_originalRank;
@property(copy, nonatomic) NSNumber *onDeviceUtterancesPresent; // @synthesize onDeviceUtterancesPresent=_onDeviceUtterancesPresent;
@property(copy, nonatomic) NSString *interactionId; // @synthesize interactionId=_interactionId;
@property(copy, nonatomic) NSNumber *combinedScore; // @synthesize combinedScore=_combinedScore;
@property(copy, nonatomic) NSNumber *combinedRank; // @synthesize combinedRank=_combinedRank;
@property(copy, nonatomic) AFSpeechRequestOptions *speechRequestOptions; // @synthesize speechRequestOptions=_speechRequestOptions;
@property(nonatomic) long long activationEvent; // @synthesize activationEvent=_activationEvent;
@property(nonatomic) long long directActionEvent; // @synthesize directActionEvent=_directActionEvent;
@property(copy, nonatomic) NSString *directActionAppId; // @synthesize directActionAppId=_directActionAppId;
@property(copy, nonatomic) SAStartLocalRequest *startLocalRequest; // @synthesize startLocalRequest=_startLocalRequest;
@property(copy, nonatomic) SAStartRequest *startRequest; // @synthesize startRequest=_startRequest;
@property(copy, nonatomic) NSDictionary *correctedSpeechContext; // @synthesize correctedSpeechContext=_correctedSpeechContext;
@property(copy, nonatomic) NSString *correctedSpeech; // @synthesize correctedSpeech=_correctedSpeech;
@property(copy, nonatomic) NSString *handoffNotification; // @synthesize handoffNotification=_handoffNotification;
@property(nonatomic) _Bool handoffRequiresUserInteraction; // @synthesize handoffRequiresUserInteraction=_handoffRequiresUserInteraction;
@property(copy, nonatomic) NSString *handoffURLString; // @synthesize handoffURLString=_handoffURLString;
@property(copy, nonatomic) NSData *handoffRequestData; // @synthesize handoffRequestData=_handoffRequestData;
@property(copy, nonatomic) NSString *handoffOriginDeviceName; // @synthesize handoffOriginDeviceName=_handoffOriginDeviceName;
@property(copy, nonatomic) NSString *legacyDirectActionIdentifier; // @synthesize legacyDirectActionIdentifier=_legacyDirectActionIdentifier;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSNumber *notifyState; // @synthesize notifyState=_notifyState;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) AFRequestCompletionOptions *requestCompletionOptions; // @synthesize requestCompletionOptions=_requestCompletionOptions;
@property(copy, nonatomic) NSUUID *turnIdentifier; // @synthesize turnIdentifier=_turnIdentifier;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isSpeechRequest;
- (_Bool)requiresUserInteraction;
- (id)initWithTimestamp:(unsigned long long)arg1;
- (id)init;

@end

