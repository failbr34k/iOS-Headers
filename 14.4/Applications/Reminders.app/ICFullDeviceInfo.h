//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ICMigrationDeviceInfo.h"

@class NSString;

@interface ICFullDeviceInfo : ICMigrationDeviceInfo
{
    NSString *_model;
    NSString *_modelDisplayName;
    NSString *_softwareVersion;
    struct ICDeviceHardwareInfo _hardwareInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(readonly, nonatomic) NSString *modelDisplayName; // @synthesize modelDisplayName=_modelDisplayName;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, nonatomic) struct ICDeviceHardwareInfo hardwareInfo; // @synthesize hardwareInfo=_hardwareInfo;
- (_Bool)shouldBeHidden;
- (unsigned long long)hardwareInfoNameFromString:(id)arg1;
- (struct ICDeviceHardwareInfo)hardwareInfoFromModelId:(id)arg1;
- (_Bool)upgraded;
- (_Bool)upgradedTo2019OSes;
- (_Bool)upgradedToMajor:(int)arg1 minor:(int)arg2;
- (_Bool)isHardwareInfoUpgradableTo2019OSes:(struct ICDeviceHardwareInfo)arg1;
- (_Bool)upgradableTo2019OSes;
- (_Bool)isHardwareInfoUpgradable:(struct ICDeviceHardwareInfo)arg1;
- (_Bool)isIOSDevice;
- (_Bool)isOSXDevice;
- (_Bool)upgradable;
- (id)description;
- (id)debugDescription;
- (id)initWithName:(id)arg1 model:(id)arg2 modelDisplayName:(id)arg3 softwareVersion:(id)arg4;

@end

