//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface SBSwitcherModelRemovalRequest : NSObject
{
    NSMutableDictionary *_appLayoutToAction;
}

- (void).cxx_destruct;
- (void)setAction:(id)arg1 forAppLayout:(id)arg2;
- (id)actionForAppLayout:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *appLayouts;

@end

