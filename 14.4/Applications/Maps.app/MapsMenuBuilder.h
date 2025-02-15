//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MapsMenuBuilder : NSObject
{
}

+ (id)addAMissingPlaceMenu;
+ (id)sendToDeviceAndShareMenuWithSendToDeviceEnabled:(_Bool)arg1;
+ (id)disabledAddMenu;
+ (id)addMenu;
+ (id)debugMenu;
+ (id)performanceTestsMenu;
+ (id)visibleAttributesSubMenu;
+ (id)currentLocationSubMenu;
+ (id)zoomSubMenu;
+ (id)zoomSubMenuCommands;
+ (id)mapModeSubMenu;
+ (id)mapModeSubMenuCommands;
+ (id)findSubMenu;
+ (id)editMenu;
+ (id)dropPinKeyCommand;
+ (id)fileMenuEnd;
+ (id)fileMenuStart;
+ (id)applicationMenu;
+ (id)preferencesMenu;
+ (void)buildMenuWithBuilder:(id)arg1 sendToDeviceEnabled:(_Bool)arg2;

@end

