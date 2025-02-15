//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying>
{
    NSString *_groupName;
    NSString *_cacheControlKey;
}

+ (id)edgeCacheHintForEvergreenArticles;
+ (id)edgeCacheHintForLocalNews;
+ (id)edgeCacheHintForAudioContent;
+ (id)edgeCacheHintForMagazineContent;
+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForFeaturedArticles;
+ (id)edgeCacheHintForToday;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForTrending;
+ (id)edgeCacheHintForForYouConfig;
+ (id)edgeCacheHintForTopStories;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *cacheControlKey; // @synthesize cacheControlKey=_cacheControlKey;
@property(readonly, copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGroupName:(id)arg1 cacheControlKey:(id)arg2;

@end

