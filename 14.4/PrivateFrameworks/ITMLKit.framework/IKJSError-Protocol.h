//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKJSError, NSDictionary, NSNumber, NSString;

@protocol IKJSError <JSExport>
@property(readonly, nonatomic) IKJSError *underlyingError;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) NSString *recoverySuggestion;
@property(readonly, nonatomic) NSString *failureReason;
@property(readonly, nonatomic) NSString *description;
@property(readonly, nonatomic) NSString *domain;
@property(readonly, nonatomic) NSNumber *code;
@end

