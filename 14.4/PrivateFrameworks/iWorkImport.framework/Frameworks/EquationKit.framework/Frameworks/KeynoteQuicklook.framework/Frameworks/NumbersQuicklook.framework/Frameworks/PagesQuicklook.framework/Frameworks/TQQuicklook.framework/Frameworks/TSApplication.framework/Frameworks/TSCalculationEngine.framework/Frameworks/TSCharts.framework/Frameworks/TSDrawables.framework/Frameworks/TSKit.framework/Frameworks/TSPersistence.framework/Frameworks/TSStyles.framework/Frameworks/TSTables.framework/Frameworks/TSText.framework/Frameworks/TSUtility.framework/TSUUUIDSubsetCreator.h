//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TSUUUIDSetStore;

@interface TSUUUIDSubsetCreator : NSObject
{
    TSUUUIDSetStore *_uuidSetStore;
    vector_4dc5f307 _baseUuidVector;
    NSMutableDictionary *_createdSubsetsByRange;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) TSUUUIDSetStore *uuidSetStore; // @synthesize uuidSetStore=_uuidSetStore;
@property(readonly) const vector_4dc5f307 *baseUuidVector; // @synthesize baseUuidVector=_baseUuidVector;
- (unsigned int)uuidSetStoreIndexForIndexesInRange:(struct _NSRange)arg1;
- (id)initWithUuidSetStore:(id)arg1 baseUuidVector:(const vector_4dc5f307 *)arg2;

@end

