//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKPaymentCommutePlanReminder : NSObject <NSSecureCoding>
{
    double _timeInterval;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeInterval:(double)arg1;

@end

