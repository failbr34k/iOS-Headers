//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMBusinessUserAttributes, NSNumber, NSString;

@interface EDAMUserProfile : FATObject
{
    NSNumber *_id;
    NSString *_name;
    NSString *_email;
    NSString *_username;
    EDAMBusinessUserAttributes *_attributes;
    NSNumber *_joined;
    NSNumber *_photoLastUpdated;
    NSString *_photoUrl;
    NSNumber *_role;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *role; // @synthesize role=_role;
@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
@property(retain, nonatomic) NSNumber *photoLastUpdated; // @synthesize photoLastUpdated=_photoLastUpdated;
@property(retain, nonatomic) NSNumber *joined; // @synthesize joined=_joined;
@property(retain, nonatomic) EDAMBusinessUserAttributes *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;

@end

