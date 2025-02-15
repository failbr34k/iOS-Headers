//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSMutableCopying-Protocol.h>

@class NSMutableDictionary;

@interface ICNetworkConstraints : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _dataAllowedFallbackValue;
    _Bool _cellularDataAllowedFallbackValue;
    _Bool _wiFiDataAllowedFallbackValue;
    NSMutableDictionary *_networkTypeToDataAllowed;
    NSMutableDictionary *_networkTypeToSizeLimit;
}

+ (id)constraintsForSystemApplicationType:(long long)arg1;
+ (id)mediaTypeNetworkConstraintsFromURLBag:(id)arg1;
- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone *)arg2;
- (id)sizeLimitForNetworkType:(long long)arg1;
- (_Bool)shouldAllowDataForWiFiNetworkTypes;
- (_Bool)shouldAllowDataForCellularNetworkTypes;
- (_Bool)shouldAllowDataForNetworkType:(long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)init;

@end

