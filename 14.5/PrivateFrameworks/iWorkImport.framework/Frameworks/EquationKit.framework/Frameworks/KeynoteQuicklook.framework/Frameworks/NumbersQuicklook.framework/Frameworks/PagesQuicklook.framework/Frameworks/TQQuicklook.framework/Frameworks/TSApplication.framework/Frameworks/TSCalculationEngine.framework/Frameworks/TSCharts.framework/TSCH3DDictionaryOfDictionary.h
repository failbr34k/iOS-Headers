//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TSCH3DDictionaryOfDictionary : NSObject
{
    NSMutableDictionary *_dictionary;
}

- (void).cxx_destruct;
- (void)addEntriesFromDictionaryOfDictionary:(id)arg1;
- (void)removeObjectForFirstLevelKey:(id)arg1 secondLevelKey:(id)arg2;
- (id)objectForFirstLevelKey:(id)arg1 secondLevelKey:(id)arg2;
- (void)setObject:(id)arg1 forFirstLevelKey:(id)arg2 secondLevelKey:(id)arg3;
- (id)description;
- (id)init;

@end

