//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WBSDictionaryKeyValueStore;

@interface WBSForYouDataSourceWeightManager : NSObject
{
    id <WBSDictionaryKeyValueStore> _store;
}

- (void).cxx_destruct;
- (void)clear;
- (double)weightForSource:(unsigned long long)arg1;
- (void)downvoteSource:(unsigned long long)arg1;
- (id)initWithKeyValueStore:(id)arg1;

@end

