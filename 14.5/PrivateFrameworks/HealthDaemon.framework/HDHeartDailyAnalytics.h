//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HDHeartDailyAnalytics : NSObject
{
    NSMutableDictionary *_payload;
}

- (void).cxx_destruct;
- (void)updateCountMobileAssetsDownloadedPast24Hours:(long long)arg1;
- (void)updateCountAnalyzedTachogramsPast24Hours:(long long)arg1;
- (void)updateCountRecordedTachogramsPast24Hours:(long long)arg1;
- (void)updateWasWatchWornPast24Hours:(_Bool)arg1;
- (void)updateIRNOnboardingCountryCode:(id)arg1;
- (void)updateECGOnboardingCountryCode:(id)arg1;
- (void)updateECGUpdateVersionWatch:(id)arg1;
- (void)updateECGUpdateVersionPhone:(id)arg1;
- (void)updateECGActiveAlgorithmVersion:(id)arg1;
- (id)_ecgClassificationWithin24HoursPostIRNKeyFromClassification:(unsigned long long)arg1;
- (id)_ecgClassificationWithin24HoursKeyFromClassification:(unsigned long long)arg1;
- (id)_weeksBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (void)updateWithElectrocardiogramClassifications:(id)arg1 isWithin24HoursPostIRN:(_Bool)arg2;
- (void)updateWeeksSinceElectrocardiogramOnboardedWithFirstOnboardingCompletedDate:(id)arg1;
- (void)submit;
- (void)updateActiveWatchProductType:(id)arg1;
- (void)updateIsBradycardiaDetectionEnabled:(_Bool)arg1;
- (void)updateIsTachycardiaDetectionEnabled:(_Bool)arg1;
- (void)updateIrregularRhythmNotificationClassificationCount:(long long)arg1;
- (void)updateElectrocardiogramClassificationCount:(long long)arg1;
- (void)updateIsImproveHealthAndActivityAllowed:(_Bool)arg1;
- (void)updateIsIrnOnboarded:(_Bool)arg1;
- (void)updateIsEcgOnboarded:(_Bool)arg1;
- (id)init;

@end

