//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelativeMotion/NSSecureCoding-Protocol.h>

@interface RMDummyData : NSObject <NSSecureCoding>
{
    CDStruct_3dce7055 _payload;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) CDStruct_3dce7055 payload; // @synthesize payload=_payload;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPayload:(CDStruct_3dce7055)arg1;

@end

