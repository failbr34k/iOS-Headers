//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSData, NSDate;

@interface HMCacheEntry : HMFObject <NSSecureCoding>
{
    NSData *_data;
    NSDate *_lastModificationDate;
}

+ (id)shortDescription;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly, copy) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1 lastModificationDate:(id)arg2;
@property(readonly) _Bool isExpired;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

