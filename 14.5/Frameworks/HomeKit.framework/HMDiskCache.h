//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKit/HMPersistentCache-Protocol.h>

@class NSString;

@interface HMDiskCache : HMFObject <HMPersistentCache>
{
    NSString *_cachePath;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (id)loadCachedObjectsForCacheWithName:(id)arg1;
- (_Bool)storeCachedObjects:(id)arg1 forCacheName:(id)arg2;
- (id)initWithCachePath:(id)arg1;

@end

