//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SQProfile : NSObject
{
    NSString *_partnerName;
    NSString *_token;
}

+ (id)profileWithPartnerName:(id)arg1 token:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *partnerName; // @synthesize partnerName=_partnerName;

@end

