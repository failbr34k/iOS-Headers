//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOPrivacyManager : NSObject
{
    _Bool _lastKnownLocationServicesEnabled;
    _Bool _hasLastKnownLocationServicesEnabled;
}

- (void)_locationServicesStateChanged;
- (void)_fireResetLocationAndPrivacyNotification;
- (void)_fireRecentsClearedNotification;
- (void)dealloc;
- (id)init;

@end

