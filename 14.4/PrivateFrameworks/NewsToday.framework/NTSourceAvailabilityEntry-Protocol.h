//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsToday/NSObject-Protocol.h>

@protocol NTSourceAvailabilityEntry <NSObject>
@property(copy, nonatomic) CDUnknownBlockType availabilityChangedNotificationBlock;
@property(readonly, nonatomic, getter=isLikelyAvailable) _Bool likelyAvailable;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
@property(readonly, nonatomic) Class todayResultsFetchDescriptorClass;
@end

