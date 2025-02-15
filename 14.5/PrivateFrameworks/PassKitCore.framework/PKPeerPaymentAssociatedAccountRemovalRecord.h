//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface PKPeerPaymentAssociatedAccountRemovalRecord : NSObject <NSSecureCoding>
{
    _Bool _hasPresentedNotification;
    NSString *_altDSID;
    long long _reason;
    NSDate *_date;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasPresentedNotification; // @synthesize hasPresentedNotification=_hasPresentedNotification;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

