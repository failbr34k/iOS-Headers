//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _PASLock;
@protocol OS_dispatch_source;

@interface ATXCacheReader : NSObject
{
    _PASLock *_lock;
    NSString *_cacheBasePath;
    NSObject<OS_dispatch_source> *_vnodeSource;
}

- (void).cxx_destruct;
- (void)_handleDirChange;
- (id)readCacheFileForCachePath:(id)arg1;
- (id)readCacheFileForConsumerSubtype:(unsigned char)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCacheBasePath:(id)arg1;

@end

