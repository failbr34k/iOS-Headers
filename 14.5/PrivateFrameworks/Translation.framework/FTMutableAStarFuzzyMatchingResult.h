//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTAStarFuzzyMatchingResult.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableAStarFuzzyMatchingResult : FTAStarFuzzyMatchingResult
{
}

@property(copy, nonatomic) NSString *debug_information;
@property(copy, nonatomic) NSArray *match_ids;
@property(nonatomic) int tm_score;
@property(nonatomic) long long total_score;
@property(copy, nonatomic) NSString *matched_result;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

