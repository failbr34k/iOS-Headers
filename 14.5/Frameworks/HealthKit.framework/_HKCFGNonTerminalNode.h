//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKCFGNode.h>

@class NSArray, _HKCFGReplacementRule;

__attribute__((visibility("hidden")))
@interface _HKCFGNonTerminalNode : _HKCFGNode
{
    NSArray *_nodes;
    id _value;
    _HKCFGReplacementRule *_rule;
}

+ (id)nodeWithChildren:(id)arg1 rule:(id)arg2 rangeOfString:(struct _NSRange)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) _HKCFGReplacementRule *rule; // @synthesize rule=_rule;
- (id)evaluate;

@end

