//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBSURLCompletionMatchData-Protocol.h"

@class NSString, WebBookmark;

@interface URLCompletionMatchBookmarkData : NSObject <WBSURLCompletionMatchData>
{
    _Bool _shouldPreload;
    WebBookmark *_bookmark;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, nonatomic) _Bool shouldPreload; // @synthesize shouldPreload=_shouldPreload;
- (float)_topSitesScoreAtTime:(double)arg1;
- (float)topSitesScoreForPageTitleAtTime:(double)arg1;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (_Bool)matchesAutocompleteTrigger:(id)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePageTitlesUsingBlock:(CDUnknownBlockType)arg1;
- (id)matchDataByMergingWithMatchData:(id)arg1;
@property(readonly, nonatomic) _Bool lastVisitWasFailure;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) _Bool containsBookmark;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;
- (id)pageTitleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *originalURLString;
- (id)_userVisibleURLString;
- (id)initWithBookmark:(id)arg1 shouldPreload:(_Bool)arg2;
- (id)initWithBookmark:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long visitCount;

@end

