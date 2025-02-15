//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedLayoutBlueprintBookmark-Protocol.h"

@class FCFeedViewport, FCFeedViewportBookmark, NSString;
@protocol FRFeedLayoutBlueprintBookmark;

@interface FRFeedLayoutBlueprintBookmarkInternal : NSObject <FRFeedLayoutBlueprintBookmark>
{
    NSObject<FRFeedLayoutBlueprintBookmark> *_blueprintBookmark;
    FCFeedViewport *_feedViewport;
    FCFeedViewportBookmark *_feedViewportBookmark;
    FCFeedViewport *_prefetchedFeedViewport;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) FCFeedViewport *prefetchedFeedViewport; // @synthesize prefetchedFeedViewport=_prefetchedFeedViewport;
@property(copy, nonatomic) FCFeedViewportBookmark *feedViewportBookmark; // @synthesize feedViewportBookmark=_feedViewportBookmark;
@property(retain, nonatomic) FCFeedViewport *feedViewport; // @synthesize feedViewport=_feedViewport;
@property(copy, nonatomic) NSObject<FRFeedLayoutBlueprintBookmark> *blueprintBookmark; // @synthesize blueprintBookmark=_blueprintBookmark;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)layoutInfoIDInBlueprint:(id)arg1;
@property(readonly, copy, nonatomic) NSString *layoutInfoIDInLastBlueprint;
@property(readonly, nonatomic) _Bool hasPrefetchedViewport;
@property(readonly, nonatomic, getter=isAggregate) _Bool aggregate;
@property(readonly, nonatomic) struct CGSize viewportSize;
@property(readonly, nonatomic) unsigned long long offsetType;
@property(readonly, nonatomic) double scrollOffsetFromCenter;
@property(readonly, copy, nonatomic) NSString *headlineTileInfoBookmarkableID;
@property(readonly, copy, nonatomic) NSString *sectionID;
- (id)initWithBlueprintBookmark:(id)arg1 feedViewport:(id)arg2 feedViewportBookmark:(id)arg3 prefetchedFeedViewport:(id)arg4;
- (id)init;

@end

