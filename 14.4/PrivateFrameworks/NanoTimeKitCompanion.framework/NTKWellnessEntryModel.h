//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

#import <NanoTimeKitCompanion/CLKTimelineEntry-Protocol.h>
#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class HKQuantity, NSArray, NSDate, NSString;

@interface NTKWellnessEntryModel : NTKTimelineEntryModel <NSCopying, CLKTimelineEntry>
{
    _Bool _wheelchairUser;
    _Bool _databaseLoading;
    _Bool _deviceLocked;
    _Bool _areFitnessAppsRestricted;
    long long _activityMoveMode;
    HKQuantity *_activeEnergyTotal;
    HKQuantity *_activeEnergyGoal;
    double _appleMoveTimeTotal;
    double _appleMoveTimeGoal;
    double _appleExerciseTimeTotal;
    double _appleExerciseTimeGoal;
    long long _appleStandHoursTotal;
    long long _appleStandHoursGoal;
    NSArray *_activeEnergyChartData;
    NSArray *_appleMoveTimeChartData;
    NSArray *_appleExerciseTimeChartData;
    NSArray *_appleStandHourChartData;
}

+ (id)_LocalizedStringWithActiveEnergy:(id)arg1;
+ (id)formattingManager;
+ (id)_signatureRectangleFromModel:(id)arg1;
+ (id)_signatureBezelFromModel:(id)arg1;
+ (id)_signatureCornerFromModel:(id)arg1;
+ (id)largeUtility:(id)arg1;
+ (id)largeModular:(id)arg1;
+ (id)_activityTemplateWithFamily:(long long)arg1 entryModel:(id)arg2;
+ (id)idealizedEntryModel;
+ (id)lockedEntryModel;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool areFitnessAppsRestricted; // @synthesize areFitnessAppsRestricted=_areFitnessAppsRestricted;
@property(readonly, nonatomic) _Bool deviceLocked; // @synthesize deviceLocked=_deviceLocked;
@property(nonatomic) _Bool databaseLoading; // @synthesize databaseLoading=_databaseLoading;
@property(retain, nonatomic) NSArray *appleStandHourChartData; // @synthesize appleStandHourChartData=_appleStandHourChartData;
@property(retain, nonatomic) NSArray *appleExerciseTimeChartData; // @synthesize appleExerciseTimeChartData=_appleExerciseTimeChartData;
@property(retain, nonatomic) NSArray *appleMoveTimeChartData; // @synthesize appleMoveTimeChartData=_appleMoveTimeChartData;
@property(retain, nonatomic) NSArray *activeEnergyChartData; // @synthesize activeEnergyChartData=_activeEnergyChartData;
@property(nonatomic) long long appleStandHoursGoal; // @synthesize appleStandHoursGoal=_appleStandHoursGoal;
@property(nonatomic) long long appleStandHoursTotal; // @synthesize appleStandHoursTotal=_appleStandHoursTotal;
@property(nonatomic) _Bool wheelchairUser; // @synthesize wheelchairUser=_wheelchairUser;
@property(nonatomic) double appleExerciseTimeGoal; // @synthesize appleExerciseTimeGoal=_appleExerciseTimeGoal;
@property(nonatomic) double appleExerciseTimeTotal; // @synthesize appleExerciseTimeTotal=_appleExerciseTimeTotal;
@property(nonatomic) double appleMoveTimeGoal; // @synthesize appleMoveTimeGoal=_appleMoveTimeGoal;
@property(nonatomic) double appleMoveTimeTotal; // @synthesize appleMoveTimeTotal=_appleMoveTimeTotal;
@property(retain, nonatomic) HKQuantity *activeEnergyGoal; // @synthesize activeEnergyGoal=_activeEnergyGoal;
@property(retain, nonatomic) HKQuantity *activeEnergyTotal; // @synthesize activeEnergyTotal=_activeEnergyTotal;
@property(nonatomic) long long activityMoveMode; // @synthesize activityMoveMode=_activityMoveMode;
- (id)loggingString;
@property(retain, nonatomic, setter=tl_setEntryDate:) NSDate *tl_entryDate;
- (id)date;
- (void)setDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)availabilityState;
- (double)appleStandHourCompletionPercentage;
- (double)appleExerciseTimeCompletionPercentage;
- (double)appleMoveTimeCompletionPercentage;
- (double)activeEnergyCompletionPercentage;
@property(readonly, nonatomic) _Bool userHasDoneActivitySetup;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)templateForComplicationFamily:(long long)arg1;
- (_Bool)tl_validate:(id *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

