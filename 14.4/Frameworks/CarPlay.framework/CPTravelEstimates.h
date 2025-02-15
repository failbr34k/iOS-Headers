//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/NSSecureCoding-Protocol.h>

@class NSMeasurement;

@interface CPTravelEstimates : NSObject <NSSecureCoding>
{
    NSMeasurement *_distanceRemaining;
    double _timeRemaining;
    unsigned long long _timeRemainingColor;
}

+ (id)_orangeColor;
+ (id)_redColor;
+ (id)_greenColor;
+ (id)timeRemainingColorForColor:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long timeRemainingColor; // @synthesize timeRemainingColor=_timeRemainingColor;
@property(readonly, nonatomic) double timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(readonly, copy, nonatomic) NSMeasurement *distanceRemaining; // @synthesize distanceRemaining=_distanceRemaining;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistanceRemaining:(id)arg1 timeRemaining:(double)arg2;
- (id)_init;

@end

