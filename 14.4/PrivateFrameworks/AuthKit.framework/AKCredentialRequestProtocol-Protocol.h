//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSObject-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@protocol AKCredentialRequestProtocol <NSObject, NSSecureCoding, NSCopying>
@property(readonly, copy, nonatomic) NSUUID *transactionID;
@property(readonly, copy, nonatomic) NSUUID *requestIdentifier;
@property(readonly, copy, nonatomic) NSString *altDSID;
@property(copy, nonatomic) NSString *userIdentifier;
@end

