//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSSet;

@protocol CRKSettingsPaneInfoProvider <NSObject>
@property(readonly, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseIdentifiers;
@property(readonly, copy, nonatomic) NSSet *acceptedInvitationIdentifiers;
@property(readonly, copy, nonatomic) NSArray *courseInvitations;
@property(readonly, copy, nonatomic) NSArray *courses;
@end

