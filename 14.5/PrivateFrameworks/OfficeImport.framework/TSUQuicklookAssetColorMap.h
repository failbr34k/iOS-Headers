//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TSUQuicklookAssetColorMap : NSObject
{
    NSMutableDictionary *mAssetMap;
    NSString *mAppAssetPath;
}

+ (id)locatorForSageChartTextureSet:(id)arg1 image:(id)arg2;
+ (id)colorForResource:(id)arg1;
+ (_Bool)hasAppAssets;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)quicklookAssetMap;
@property(retain, nonatomic) NSString *appAssetPath; // @synthesize appAssetPath=mAppAssetPath;
@property(retain, nonatomic) NSMutableDictionary *assetMap; // @synthesize assetMap=mAssetMap;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

