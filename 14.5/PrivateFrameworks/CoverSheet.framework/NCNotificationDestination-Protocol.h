//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/NSObject-Protocol.h>

@class BSServiceConnectionEndpoint, NCNotificationRequest, NCNotificationSectionSettings, NSString;
@protocol NCNotificationDestinationDelegate;

@protocol NCNotificationDestination <NSObject>
@property(readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property(readonly, nonatomic) NSString *identifier;
@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate;
- (void)withdrawNotificationRequest:(NCNotificationRequest *)arg1;
- (void)modifyNotificationRequest:(NCNotificationRequest *)arg1;
- (void)postNotificationRequest:(NCNotificationRequest *)arg1;
- (_Bool)canReceiveNotificationRequest:(NCNotificationRequest *)arg1;

@optional
- (void)notificationsLoadedForSectionIdentifier:(NSString *)arg1;
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1 previousSectionSettings:(NCNotificationSectionSettings *)arg2;
- (_Bool)interceptsQueueRequest:(NCNotificationRequest *)arg1;
@end

