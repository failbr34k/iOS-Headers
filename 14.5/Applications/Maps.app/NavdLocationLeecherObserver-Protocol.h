//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, NSError, NavdLocationLeecher;

@protocol NavdLocationLeecherObserver <NSObject>
- (void)locationLeecher:(NavdLocationLeecher *)arg1 errorLeechingLocation:(NSError *)arg2;
- (void)locationLeecher:(NavdLocationLeecher *)arg1 receivedLocation:(CLLocation *)arg2;

@optional
- (void)locationLeecher:(NavdLocationLeecher *)arg1 didChangeCoarseMode:(_Bool)arg2;
- (void)locationLeecher:(NavdLocationLeecher *)arg1 didChangeAuthorization:(int)arg2;
@end

