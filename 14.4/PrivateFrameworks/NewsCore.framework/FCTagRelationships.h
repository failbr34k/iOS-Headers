//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FCTagRelationships : NSObject
{
    NSArray *_relatedTopicsForOnboarding;
    NSArray *_relatedChannelsForOnboarding;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *relatedChannelsForOnboarding; // @synthesize relatedChannelsForOnboarding=_relatedChannelsForOnboarding;
@property(readonly, copy, nonatomic) NSArray *relatedTopicsForOnboarding; // @synthesize relatedTopicsForOnboarding=_relatedTopicsForOnboarding;
- (id)initWithRelatedTopicsForOnboarding:(id)arg1 relatedChannelsForOnboarding:(id)arg2;

@end

