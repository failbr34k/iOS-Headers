//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CPAnalyticsSystemProperties : NSObject
{
    NSMutableDictionary *_systemProperties;
    NSMutableDictionary *_dynamicProperties;
}

+ (id)dynamicPhotoLibraryProperties;
+ (id)staticPhotoLibraryProperties;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dynamicProperties; // @synthesize dynamicProperties=_dynamicProperties;
@property(retain, nonatomic) NSMutableDictionary *systemProperties; // @synthesize systemProperties=_systemProperties;
- (void)removePhotoLibraryProperties;
- (id)propertyForKey:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3;
- (void)addDynamicProperty:(id)arg1 withProvider:(id)arg2;
- (void)addProperty:(id)arg1 withValue:(id)arg2;
- (id)init;

@end

