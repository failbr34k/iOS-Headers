//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserActivity, RideBookingApplication;

__attribute__((visibility("hidden")))
@interface RidesharingErrorAlertProvider : NSObject
{
    RideBookingApplication *_application;
    NSUserActivity *_activity;
    _Bool _superseded;
    long long _cause;
    CDUnknownBlockType _didSupersede;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didSupersede; // @synthesize didSupersede=_didSupersede;
@property(readonly, nonatomic) long long cause; // @synthesize cause=_cause;
- (id)description;
- (void)_supersede;
- (void)openApp;
@property(readonly, nonatomic) NSString *dismissCommandTitle;
@property(readonly, nonatomic) NSString *openAppCommandTitle;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) NSString *title;
- (id)_initWithCause:(long long)arg1 application:(id)arg2 activity:(id)arg3;

@end

