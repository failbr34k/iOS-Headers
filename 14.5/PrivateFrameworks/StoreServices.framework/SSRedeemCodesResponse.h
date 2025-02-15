//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SSRedeemCodesResponse : NSObject <SSXPCCoding>
{
    NSDictionary *_codeResponses;
    NSDictionary *_errors;
    NSDictionary *_redeemedCodes;
}

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setRedeemedCodes:(id)arg1;
- (void)setFailedCodes:(id)arg1;
- (void)setCodeResponses:(id)arg1;
- (id)responseDictionaryForCode:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *redeemedCodes;
@property(readonly, nonatomic) NSArray *failedCodes;
- (id)errorForCode:(id)arg1;
- (id)dictionaryForCode:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *codeResponses;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

