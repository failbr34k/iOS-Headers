//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSError, NSString;

@interface RequestThrottleRecord : NSObject <NSSecureCoding>
{
    NSError *_error;
    NSString *_externalVersionID;
    NSString *_itemID;
    NSDate *_requestDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(readonly) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly) NSString *externalVersionID; // @synthesize externalVersionID=_externalVersionID;
@property(readonly) NSError *error; // @synthesize error=_error;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)matchesExternalVersionID:(id)arg1;
- (double)ageRelativeToDate:(id)arg1;
- (id)initWithDate:(id)arg1 error:(id)arg2 itemID:(id)arg3 externalVersionID:(id)arg4;

@end

