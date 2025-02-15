//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCColorGradient, NSArray, NSDate, NSDictionary, NSString;

@interface FCTopStoriesOperationResult : NSObject
{
    NSArray *_mandatoryHeadlinePairs;
    NSArray *_optionalHeadlines;
    NSArray *_todayFeedTopStoriesHeadlines;
    NSDate *_publishDate;
    NSDictionary *_topStoriesMetadataByArticleID;
    FCColorGradient *_backgroundColorGradient;
    FCColorGradient *_darkStyleBackgroundColorGradient;
    NSString *_subtitle;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) FCColorGradient *darkStyleBackgroundColorGradient; // @synthesize darkStyleBackgroundColorGradient=_darkStyleBackgroundColorGradient;
@property(copy, nonatomic) FCColorGradient *backgroundColorGradient; // @synthesize backgroundColorGradient=_backgroundColorGradient;
@property(copy) NSDictionary *topStoriesMetadataByArticleID; // @synthesize topStoriesMetadataByArticleID=_topStoriesMetadataByArticleID;
@property(copy) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(readonly, copy, nonatomic) NSArray *todayFeedTopStoriesHeadlines; // @synthesize todayFeedTopStoriesHeadlines=_todayFeedTopStoriesHeadlines;
@property(copy) NSArray *optionalHeadlines; // @synthesize optionalHeadlines=_optionalHeadlines;
@property(copy) NSArray *mandatoryHeadlinePairs; // @synthesize mandatoryHeadlinePairs=_mandatoryHeadlinePairs;
- (id)initWithTopStoriesGroupConfig:(id)arg1 mandatoryHeadlinePairs:(id)arg2 optionalHeadlines:(id)arg3 todayFeedTopStoriesHeadlines:(id)arg4 topStoriesMetadataByArticleID:(id)arg5 publishDate:(id)arg6 subtitle:(id)arg7;

@end

