//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber;

@interface HMDHomeConfigurationModel : HMDBackingStoreModelObject
{
    _Bool _homeHasLocalChanges;
}

+ (id)properties;
@property(nonatomic) _Bool homeHasLocalChanges; // @synthesize homeHasLocalChanges=_homeHasLocalChanges;

// Remaining properties
@property(retain, nonatomic) NSNumber *configurationVersion; // @dynamic configurationVersion;

@end

