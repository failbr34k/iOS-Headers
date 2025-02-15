//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/NSObject-Protocol.h>

@class TSPObject, TSPObjectUUIDMap;

@protocol TSPObjectUUIDMapDelegate <NSObject>
- (void)objectUUIDMap:(TSPObjectUUIDMap *)arg1 didUpdateWithObjectIdentifierAddedToDocument:(long long)arg2 objectIdentifierRemovedFromDocument:(long long)arg3;
- (TSPObject *)objectUUIDMap:(TSPObjectUUIDMap *)arg1 needsObjectForIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 onlyIfLoaded:(_Bool)arg4;
@end

