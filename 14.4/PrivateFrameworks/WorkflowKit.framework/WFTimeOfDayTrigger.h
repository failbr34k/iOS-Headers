//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDateComponents, NSNumber;

@interface WFTimeOfDayTrigger : WFTrigger <NSSecureCoding>
{
    unsigned long long _event;
    unsigned long long _timeOffset;
    NSDateComponents *_time;
    unsigned long long _mode;
    NSArray *_daysOfWeek;
    NSNumber *_dayOfMonth;
}

+ (id)localizedRecurrenceDescriptionForDaysOfWeek:(id)arg1 dayOfMonth:(id)arg2 mode:(unsigned long long)arg3;
+ (id)localizedSunriseSunsetDescriptionForTriggerEvent:(unsigned long long)arg1 timeOffset:(unsigned long long)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)dateFormatter;
+ (_Bool)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *dayOfMonth; // @synthesize dayOfMonth=_dayOfMonth;
@property(copy, nonatomic) NSArray *daysOfWeek; // @synthesize daysOfWeek=_daysOfWeek;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSDateComponents *time; // @synthesize time=_time;
@property(nonatomic) unsigned long long timeOffset; // @synthesize timeOffset=_timeOffset;
@property(nonatomic) unsigned long long event; // @synthesize event=_event;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedPastTenseDescription;
- (id)localizedDescriptionWithConfigurationSummary;
- (_Bool)hasValidConfiguration;
- (id)init;

@end

