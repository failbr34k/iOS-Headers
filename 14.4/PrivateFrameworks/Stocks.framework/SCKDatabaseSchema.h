//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainerID, NSArray, NSString;

@interface SCKDatabaseSchema : NSObject
{
    NSString *_name;
    long long _environment;
    NSArray *_zoneSchemas;
    long long _security;
}

- (void).cxx_destruct;
@property(nonatomic) long long security; // @synthesize security=_security;
@property(copy, nonatomic) NSArray *zoneSchemas; // @synthesize zoneSchemas=_zoneSchemas;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)schemaForZoneName:(id)arg1;
@property(readonly, nonatomic) _Bool requiresDeviceToDeviceEncryption;
@property(readonly, copy, nonatomic) NSArray *zoneIDs;
@property(readonly, copy, nonatomic) CKContainerID *containerID;
- (id)initWithName:(id)arg1 environment:(long long)arg2 security:(long long)arg3 zoneSchemas:(id)arg4;

@end

