//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreAutoLayout/NSObject-Protocol.h>

@class NSArray, _NSLayoutRuleNode;

@protocol _NSLayoutRuleNodeParent <NSObject>
@property(readonly, copy) NSArray *_childRuleNodes;
- (void)_removeChildRuleNode:(_NSLayoutRuleNode *)arg1;
- (void)_addChildRuleNode:(_NSLayoutRuleNode *)arg1;
@end

