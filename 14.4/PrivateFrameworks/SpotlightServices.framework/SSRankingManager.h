//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSSet, NSString, PRSRankingConfiguration;

@interface SSRankingManager : NSObject
{
    _Bool _isCancelled;
    _Bool _bullseyeRankingEnabled;
    PRSRankingConfiguration *_rankingConfiguration;
    NSMutableString *_logValues;
    double _blendingTime;
    NSString *_query;
    NSSet *_allowedTopHitSections;
}

+ (void)reloadRankingParametersFromTrial;
+ (id)getSuggestionsRankingThresholds;
+ (void)reloadLocaleSpecificMatchingParameters;
+ (void)reloadRecencyThresholds;
+ (id)keyForIntervalType:(long long)arg1;
+ (void)reloadSuggestionsRankingThresholds;
+ (void)reloadCommittedSearchParametersFromTrial;
+ (void)reloadTopHitsParametersFromTrial;
+ (void)determineTopHitsForSafariSection:(id)arg1 forQuery:(id)arg2;
+ (void)initialize;
+ (void)moveSafariTopHitsToTopOfSection:(id)arg1;
+ (void)fetchDuetValues;
- (void).cxx_destruct;
@property(nonatomic) _Bool bullseyeRankingEnabled; // @synthesize bullseyeRankingEnabled=_bullseyeRankingEnabled;
@property _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain) NSSet *allowedTopHitSections; // @synthesize allowedTopHitSections=_allowedTopHitSections;
@property(retain) NSString *query; // @synthesize query=_query;
@property(nonatomic) double blendingTime; // @synthesize blendingTime=_blendingTime;
@property(retain, nonatomic) NSMutableString *logValues; // @synthesize logValues=_logValues;
@property(retain, nonatomic) PRSRankingConfiguration *rankingConfiguration; // @synthesize rankingConfiguration=_rankingConfiguration;
- (void)updateWithNewRankingInfo:(id)arg1;
- (id)keyForSection:(id)arg1;
- (id)rankAppsAtTopForScopedSearchWithSections:(id)arg1;
- (id)groupSectionsByCategory:(id)arg1 genreMap:(id)arg2 topSections:(id)arg3;
- (void)sendTTRLogsWithSections:(id)arg1 searchString:(id)arg2 queryKind:(unsigned long long)arg3 isCommittedSearch:(_Bool)arg4 parsecCameLaterThanSRT:(_Bool)arg5;
- (void)finalizeLog;
- (void)addCEPValuesForTTR;
- (void)updateServerScoresUsingBlockOrder:(id)arg1 bundleFeatures:(id)arg2;
- (id)applyTopSectionPolicy:(id)arg1 withTopHitSection:(id)arg2 isPeopleSearch:(_Bool)arg3 queryKind:(unsigned long long)arg4 correction:(id)arg5 queryLength:(unsigned long long)arg6 ranker:(id)arg7;
- (void)refineSectionShowingVisibleResultsWithBetterTextMatches:(id)arg1;
- (id)rankSectionsUsingBundleIDToSectionMapping:(id)arg1 withRanker:(id)arg2 preferredBundleIds:(id)arg3 isPeopleSearch:(_Bool)arg4 isScopedAppSearch:(_Bool)arg5 queryId:(unsigned long long)arg6 isCJK:(_Bool)arg7 isBullseyeNonCommittedSearch:(_Bool)arg8 isBullseyeCommittedSearch:(_Bool)arg9;
- (long long)compareDate:(id)arg1 withDate:(id)arg2;
- (id)initWithQuery:(id)arg1;
- (id)removeBlockListedSectionsForMapping:(id)arg1;
- (id)makeTopHitSectionUsingSections:(id)arg1 withItemRanker:(id)arg2 sectionHeader:(id)arg3 shortcutResult:(id)arg4 isBullseyeNonCommittedSearch:(_Bool)arg5 isBullseyeCommittedSearch:(_Bool)arg6 parsecEnabled:(_Bool)arg7 maxNumAppsInTopHitSection:(unsigned long long)arg8;
- (_Bool)sectionsContainsShortcutResult:(id)arg1 shortcutResult:(id)arg2;
- (_Bool)sectionsContainsOnlyOneAppSection:(id)arg1;
- (_Bool)sectionContainsOnlyStaleApps:(id)arg1;
- (void)applyTopHitRankingPolicyToSection:(id)arg1 topResultSection:(id)arg2 maxTopHitCount:(long long)arg3 isShortcut:(_Bool)arg4;
- (id)relativeRankWithAbsRank:(id)arg1 numberValues:(unsigned long long)arg2;
- (id)removeBlockListedSectionsForMapping:(id)arg1 withRankingConfiguration:(id)arg2;
- (double)roundedValueForScore:(double)arg1;
- (void)cancel;

@end

