//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface HMFLogEventSessionVoucher : NSObject <NSSecureCoding>
{
    NSString *_serviceName;
    NSUUID *_uuid;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)initWithUUID:(id)arg1 serviceName:(id)arg2;

@end

