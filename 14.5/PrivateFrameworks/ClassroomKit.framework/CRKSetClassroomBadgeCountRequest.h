//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATTaskRequest.h>

@interface CRKSetClassroomBadgeCountRequest : CATTaskRequest
{
    long long _badgeCount;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

