//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BCSAction-Protocol.h"

@class CPSClipMetadataRequest, NSArray, NSDictionary, NSString;

@protocol BCSActionPrivate <BCSAction>
@property(retain, nonatomic) CPSClipMetadataRequest *clipMetadataRequest;
@property(readonly, nonatomic) long long codeType;
@property(readonly, nonatomic) _Bool isWiFiAction;
@property(readonly, nonatomic) _Bool isInvalidDataAction;
@property(readonly, copy, nonatomic) NSArray *appLinks;
@property(readonly, copy, nonatomic) NSString *extraPreviewText;
@property(readonly, copy, nonatomic) NSDictionary *debugDescriptionDictionary;
@end

