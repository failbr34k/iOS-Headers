//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAssetKeyCacheType-Protocol.h>

@class FCThreadSafeMutableDictionary, NSString;

@interface FCEphemeralAssetKeyCache : NSObject <FCAssetKeyCacheType>
{
    FCThreadSafeMutableDictionary *_dictionary;
}

- (void).cxx_destruct;
- (void)removeAllWrappingKeys;
- (void)setWrappingKey:(id)arg1 forWrappingKeyID:(id)arg2;
- (id)interestTokenForWrappingKeyIDs:(id)arg1;
- (id)wrappingKeyForWrappingKeyID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

