//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>
#import <SafariShared/_SSURLCompletionMatch-Protocol.h>

@class NSDate, NSString, NSURL;

@interface WBSURLCompletionMatchSnapshot : NSObject <NSSecureCoding, _SSURLCompletionMatch>
{
    _Bool _topHit;
    _Bool _synthesizedTopHit;
    _Bool _topHitDueToTriggerMatch;
    NSURL *_url;
    NSString *_title;
    NSString *_userVisibleURLString;
    long long _matchLocation;
    long long _visitCount;
    NSDate *_lastVisitTime;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *lastVisitTime; // @synthesize lastVisitTime=_lastVisitTime;
@property(readonly, nonatomic) long long visitCount; // @synthesize visitCount=_visitCount;
@property(readonly, nonatomic, getter=isTopHitDueToTriggerMatch) _Bool topHitDueToTriggerMatch; // @synthesize topHitDueToTriggerMatch=_topHitDueToTriggerMatch;
@property(readonly, nonatomic, getter=isSynthesizedTopHit) _Bool synthesizedTopHit; // @synthesize synthesizedTopHit=_synthesizedTopHit;
@property(readonly, nonatomic, getter=isTopHit) _Bool topHit; // @synthesize topHit=_topHit;
@property(readonly, nonatomic) long long matchLocation; // @synthesize matchLocation=_matchLocation;
@property(readonly, copy, nonatomic) NSString *userVisibleURLString; // @synthesize userVisibleURLString=_userVisibleURLString;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithURL:(id)arg1 title:(id)arg2 matchLocation:(long long)arg3 isTopHit:(_Bool)arg4 isSynthesizedTopHit:(_Bool)arg5 isTopHitDueToTriggerMatch:(_Bool)arg6 visitCount:(long long)arg7 lastVisitTime:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

