//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPVoteStats : NSObject
{
    long long _votes;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long votes; // @synthesize votes=_votes;
- (float)rate;
- (id)initWithVotes:(long long)arg1 andCount:(long long)arg2;

@end

