//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSNumber, NSString, NSUUID;

@interface HMDTargetConfiguration : HMFObject
{
    NSUUID *_uuid;
    NSNumber *_identifier;
    NSString *_name;
    long long _category;
    NSArray *_buttonConfiguration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *buttonConfiguration; // @synthesize buttonConfiguration=_buttonConfiguration;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAccessory:(id)arg1 buttonConfiguration:(id)arg2;
- (id)description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(long long)arg3 buttonConfiguration:(id)arg4;
- (id)init;

@end

