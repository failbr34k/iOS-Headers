//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ASDPurgeableApp : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _systemApp;
    NSString *_bundleID;
    NSString *_purgeableReason;
    long long _staticDiskUsage;
    NSNumber *_storeItemID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, getter=isSystemApp) _Bool systemApp; // @synthesize systemApp=_systemApp;
@property(copy, nonatomic) NSNumber *storeItemID; // @synthesize storeItemID=_storeItemID;
@property(nonatomic) long long staticDiskUsage; // @synthesize staticDiskUsage=_staticDiskUsage;
@property(copy, nonatomic) NSString *purgeableReason; // @synthesize purgeableReason=_purgeableReason;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)diagnosticDescription;
- (id)description;

@end

