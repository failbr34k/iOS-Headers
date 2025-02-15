//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsAnalytics/FCFeedPersonalizingItem-Protocol.h>
#import <NewsAnalytics/NSObject-Protocol.h>

@class NSString;
@protocol FCChannelProviding;

@protocol FCFeedTransformationItem <NSObject, FCFeedPersonalizingItem>
@property(nonatomic, readonly) _Bool canBePurchased;
@property(nonatomic, readonly) long long publisherArticleVersion;
@property(nonatomic, readonly) long long minimumNewsVersion;
- (_Bool)isExplicitContent;
- (_Bool)isFromBlockedStorefront;
@property(nonatomic, readonly) double globalUserFeedback;
@property(nonatomic, readonly) unsigned long long feedHalfLifeMilliseconds;
@property(nonatomic, readonly) unsigned long long publishDateMilliseconds;
@property(nonatomic, readonly) NSString *sourceChannelID;
@property(nonatomic, readonly) unsigned long long order;
@property(nonatomic, readonly) unsigned long long contentType;
@property(nonatomic, readonly) NSString *clusterID;
@property(nonatomic, readonly) NSString *articleID;
@property(nonatomic, readonly) NSString *feedID;

@optional
@property(nonatomic, readonly) id <FCChannelProviding> sourceChannel;

// Remaining properties
@property(nonatomic, readonly) _Bool explicitContent;
@property(nonatomic, readonly) _Bool fromBlockedStorefront;
@end

