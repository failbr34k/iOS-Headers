//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SwiftUI/NSUserActivityDelegate-Protocol.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI24UserActivityTrackingInfo : NSObject <NSUserActivityDelegate>
{
    MISSING_TYPE *userActivity;
    MISSING_TYPE *handlers;
    MISSING_TYPE *sceneBridge;
    MISSING_TYPE *activityType;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (void)userActivityWillSave:(id)arg1;

@end

