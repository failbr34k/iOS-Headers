//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _KSDeviceInfo : NSObject
{
    _Bool _needsUpdate;
    NSString *_name;
    NSString *_swVersion;
    NSString *_model;
    NSString *_modelDisplayName;
}

+ (id)ksDeviceWithName:(id)arg1 swVersion:(id)arg2;
+ (id)ksDeviceWithName:(id)arg1 needsUpgrade:(_Bool)arg2;
+ (id)ksDecviceWithName:(id)arg1 swVersion:(id)arg2 model:(id)arg3 modelDisplayName:(id)arg4;
+ (id)ksDecviceWithiCloudDeviceInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(copy, nonatomic) NSString *modelDisplayName; // @synthesize modelDisplayName=_modelDisplayName;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *swVersion; // @synthesize swVersion=_swVersion;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

