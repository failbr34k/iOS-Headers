//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSString;

@interface FCManagedResourceConfiguration : NSObject <NSCopying>
{
    NSString *_resourceID;
    long long _refreshRate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long refreshRate; // @synthesize refreshRate=_refreshRate;
@property(readonly, copy, nonatomic) NSString *resourceID; // @synthesize resourceID=_resourceID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResourceID:(id)arg1 refreshRate:(long long)arg2;
- (id)init;

@end

