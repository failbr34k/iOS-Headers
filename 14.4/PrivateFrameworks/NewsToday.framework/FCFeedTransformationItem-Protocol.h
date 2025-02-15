//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsToday/FCFeedPersonalizingItem-Protocol.h>
#import <NewsToday/NSObject-Protocol.h>

@class NSString;
@protocol FCChannelProviding;

@protocol FCFeedTransformationItem <NSObject, FCFeedPersonalizingItem>
@property(readonly, nonatomic) _Bool canBePurchased;
@property(readonly, nonatomic) long long publisherArticleVersion;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property(readonly, nonatomic, getter=isFromBlockedStorefront) _Bool fromBlockedStorefront;
@property(readonly, nonatomic) double globalUserFeedback;
@property(readonly, nonatomic) unsigned long long feedHalfLifeMilliseconds;
@property(readonly, nonatomic) unsigned long long publishDateMilliseconds;
@property(readonly, copy, nonatomic) NSString *sourceChannelID;
@property(readonly, nonatomic) unsigned long long order;
@property(readonly, nonatomic) unsigned long long contentType;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, copy, nonatomic) NSString *feedID;

@optional
@property(readonly, copy, nonatomic) id <FCChannelProviding> sourceChannel;
@end

