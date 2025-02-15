//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface WLKPlaybackSummary : NSObject <NSSecureCoding>
{
    _Bool _isAlwaysLive;
    _Bool _isTimerDerived;
    NSString *_bundleID;
    NSString *_channelID;
    NSDate *_timestamp;
    NSDate *_currentPlaybackDate;
    NSNumber *_duration;
    NSNumber *_elapsedTime;
    NSNumber *_featureDuration;
    NSNumber *_featureElapsedTime;
    NSString *_accountID;
    NSString *_externalProfileID;
    NSString *_contentID;
    NSString *_serviceID;
    long long _playbackState;
    NSNumber *_playbackRate;
    long long _completionState;
    long long _playbackType;
}

+ (_Bool)supportsSecureCoding;
+ (id)_debugStringForPlaybackType:(long long)arg1;
+ (id)debugStringForPlaybackState:(long long)arg1;
+ (id)EBSSummaryWithBundleID:(id)arg1 channelID:(id)arg2 contentID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 playbackState:(long long)arg7 playbackRate:(id)arg8 currentPlaybackDate:(id)arg9;
+ (id)liveSummaryWithBundleID:(id)arg1 channelID:(id)arg2 serviceID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 playbackState:(long long)arg7 playbackRate:(id)arg8 currentPlaybackDate:(id)arg9;
+ (id)VODSummaryWithBundleID:(id)arg1 channelID:(id)arg2 contentID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 duration:(id)arg7 elapsedTime:(id)arg8 featureDuration:(id)arg9 featureElapsedTime:(id)arg10 playbackState:(long long)arg11 playbackRate:(id)arg12 completionState:(long long)arg13;
+ (id)VODSummaryWithBundleID:(id)arg1 channelID:(id)arg2 contentID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 duration:(id)arg7 elapsedTime:(id)arg8 playbackState:(long long)arg9 playbackRate:(id)arg10 completionState:(long long)arg11;
+ (id)debugStringForCompletionState:(long long)arg1;
+ (long long)completionStateForDuration:(double)arg1 elapsedTime:(double)arg2;
+ (double)playedThresholdTimeForDuration:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isTimerDerived; // @synthesize isTimerDerived=_isTimerDerived;
@property(nonatomic) _Bool isAlwaysLive; // @synthesize isAlwaysLive=_isAlwaysLive;
@property(readonly, nonatomic) long long playbackType; // @synthesize playbackType=_playbackType;
@property(readonly, nonatomic) long long completionState; // @synthesize completionState=_completionState;
@property(readonly, nonatomic) NSNumber *playbackRate; // @synthesize playbackRate=_playbackRate;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(readonly, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property(readonly, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(readonly, nonatomic) NSString *externalProfileID; // @synthesize externalProfileID=_externalProfileID;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSNumber *featureElapsedTime; // @synthesize featureElapsedTime=_featureElapsedTime;
@property(readonly, nonatomic) NSNumber *featureDuration; // @synthesize featureDuration=_featureDuration;
@property(readonly, nonatomic) NSNumber *elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *currentPlaybackDate; // @synthesize currentPlaybackDate=_currentPlaybackDate;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (_Bool)_isValid;
- (_Bool)_validate:(id)arg1 identifier:(id)arg2 expectedClass:(Class)arg3;
- (_Bool)_compareOptional:(id)arg1 with:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sanitizedCopy;
- (id)JSONRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)shortDescription;
- (_Bool)isLiveType;
- (unsigned long long)hash;
- (_Bool)isSameContent:(id)arg1;
- (_Bool)isEqualToSummaryExcludingTimestamp:(id)arg1;
- (_Bool)isEqualToSummaryExcludingCursor:(id)arg1;
- (_Bool)isEqualToSummary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSNumber *accountIDAsNumber;
- (id)initWithMediaRemoteDictionary:(id)arg1 bundleID:(id)arg2 accountID:(id)arg3;
- (id)initWithBundleID:(id)arg1 timestamp:(id)arg2 duration:(id)arg3 elapsedTime:(id)arg4 featureDuration:(id)arg5 featureElapsedTime:(id)arg6 externalProfileID:(id)arg7 contentID:(id)arg8 accountID:(id)arg9 playbackState:(long long)arg10 playbackRate:(id)arg11 completionState:(long long)arg12 isAlwaysLive:(_Bool)arg13 serviceID:(id)arg14 currentPlaybackDate:(id)arg15 playbackType:(long long)arg16 isTimerDerived:(_Bool)arg17 channelID:(id)arg18;
- (void)resolveChannelID:(CDUnknownBlockType)arg1;
- (id)elapsedTimeSummaryWithPlaybackState:(long long)arg1 timerDerived:(_Bool)arg2;

@end

