//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface BSAuditHistoryItem : NSObject <BSXPCCoding, NSSecureCoding>
{
    NSDate *_date;
    NSString *_description;
}

+ (_Bool)supportsSecureCoding;
+ (id)itemWithWithFormat:(id)arg1;
+ (id)itemWithString:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *value; // @synthesize value=_description;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

