//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDFitnessMachineDataCharacteristicBase.h>

#import <HealthDaemon/HDDatumRendering-Protocol.h>

@class HDFitnessMachineCharacteristicDoubleField, HDFitnessMachineCharacteristicUInt16Field, HDFitnessMachineCharacteristicUInt24Field, HDFitnessMachineCharacteristicUInt8Field, NSDate;

@interface HDTreadmillData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering>
{
    HDFitnessMachineCharacteristicDoubleField *_instantaneousSpeedField;
    HDFitnessMachineCharacteristicDoubleField *_averageSpeedField;
    HDFitnessMachineCharacteristicUInt24Field *_totalDistanceField;
    HDFitnessMachineCharacteristicDoubleField *_inclinationField;
    HDFitnessMachineCharacteristicDoubleField *_rampSettingField;
    HDFitnessMachineCharacteristicDoubleField *_positiveElevationGainField;
    HDFitnessMachineCharacteristicDoubleField *_negativeElevationGainField;
    HDFitnessMachineCharacteristicDoubleField *_instantaneousPaceField;
    HDFitnessMachineCharacteristicDoubleField *_averagePaceField;
    HDFitnessMachineCharacteristicUInt16Field *_totalEnergyField;
    HDFitnessMachineCharacteristicUInt16Field *_energyPerHourField;
    HDFitnessMachineCharacteristicUInt8Field *_energyPerMinuteField;
    HDFitnessMachineCharacteristicUInt8Field *_heartRateField;
    HDFitnessMachineCharacteristicUInt8Field *_metabolicEquivalentField;
    HDFitnessMachineCharacteristicUInt16Field *_elapsedTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_remainingTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_forceOnBeltField;
    HDFitnessMachineCharacteristicUInt16Field *_powerOutputField;
}

+ (id)unitTest_fakeTreadmillDataForDistance:(unsigned int)arg1 energy:(unsigned short)arg2 elapsedTime:(unsigned short)arg3;
+ (unsigned char)flagFieldLength;
+ (id)uuid;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned short powerOutput;
@property(readonly, nonatomic) _Bool powerOutputIsSet;
@property(readonly, nonatomic) unsigned short forceOnBelt;
@property(readonly, nonatomic) _Bool forceOnBeltIsSet;
@property(readonly, nonatomic) unsigned short remainingTime;
@property(readonly, nonatomic) _Bool remainingTimeIsSet;
@property(readonly, nonatomic) unsigned short elapsedTime;
@property(readonly, nonatomic) _Bool elapsedTimeIsSet;
@property(readonly, nonatomic) unsigned char metabolicEquivalent;
@property(readonly, nonatomic) _Bool metabolicEquivalentIsSet;
@property(readonly, nonatomic) unsigned char heartRate;
@property(readonly, nonatomic) _Bool heartRateIsSet;
@property(readonly, nonatomic) unsigned char energyPerMinute;
@property(readonly, nonatomic) _Bool energyPerMinuteIsSet;
@property(readonly, nonatomic) unsigned short energyPerHour;
@property(readonly, nonatomic) _Bool energyPerHourIsSet;
@property(readonly, nonatomic) unsigned short totalEnergy;
@property(readonly, nonatomic) _Bool totalEnergyIsSet;
@property(readonly, nonatomic) double averagePace;
@property(readonly, nonatomic) _Bool averagePaceIsSet;
@property(readonly, nonatomic) double instantaneousPace;
@property(readonly, nonatomic) _Bool instantaneousPaceIsSet;
@property(readonly, nonatomic) double negativeElevationGain;
@property(readonly, nonatomic) _Bool negativeElevationGainIsSet;
@property(readonly, nonatomic) double positiveElevationGain;
@property(readonly, nonatomic) _Bool positiveElevationGainIsSet;
@property(readonly, nonatomic) double rampSetting;
@property(readonly, nonatomic) _Bool rampSettingIsSet;
@property(readonly, nonatomic) double inclination;
@property(readonly, nonatomic) _Bool inclinationIsSet;
@property(readonly, nonatomic) unsigned int totalDistance;
@property(readonly, nonatomic) _Bool totalDistanceIsSet;
@property(readonly, nonatomic) double averageSpeed;
@property(readonly, nonatomic) _Bool averageSpeedIsSet;
@property(readonly, nonatomic) double instantaneousSpeed;
@property(readonly, nonatomic) _Bool instantaneousSpeedIsSet;
- (id)description;
- (id)_init;
- (id)allFields;
- (id)generateDatums:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSDate *updateTime;

@end

