//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCBundleSubscriptionProviderType-Protocol.h>
#import <NewsCore/FCPurchaseProviderType-Protocol.h>
#import <NewsCore/NFMutableCopying-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class FCBundleSubscription, NSArray, NSDictionary, NSNumber, NSSet;
@protocol FCDerivedPersonalizationData><NSCoding;

@protocol FCTodayPrivateData <NSObject, NFMutableCopying, FCPurchaseProviderType, FCBundleSubscriptionProviderType>
@property(readonly, copy, nonatomic) FCBundleSubscription *bundleSubscription;
@property(readonly, copy, nonatomic) NSNumber *onboardingVersion;
@property(readonly, copy, nonatomic) NSDictionary *recentlyReadHistoryItems;
@property(readonly, copy, nonatomic) NSArray *recentlySeenHistoryItems;
@property(readonly, copy, nonatomic) NSArray *rankedAllSubscribedTagIDs;
@property(readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property(readonly, copy, nonatomic) NSArray *autoFavoriteTagIDs;
@property(readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property(readonly, copy, nonatomic) id <FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData;
@end

