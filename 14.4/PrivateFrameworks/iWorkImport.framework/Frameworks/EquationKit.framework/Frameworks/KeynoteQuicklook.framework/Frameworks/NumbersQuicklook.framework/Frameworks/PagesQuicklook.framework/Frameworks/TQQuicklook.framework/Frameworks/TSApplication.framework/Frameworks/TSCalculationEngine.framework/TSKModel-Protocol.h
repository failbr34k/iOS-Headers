//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCalculationEngine/NSObject-Protocol.h>

@class NSEnumerator, NSString;
@protocol TSKModel, TSKModelVisitor;

@protocol TSKModel <NSObject>

@optional
- (void)acceptVisitor:(id <TSKModelVisitor>)arg1;
- (NSString *)modelPathComponentForChild:(id <TSKModel>)arg1;
- (NSEnumerator *)childEnumeratorForUserFlags:(unsigned long long)arg1;
- (NSEnumerator *)childEnumeratorForUserSearch;
- (NSEnumerator *)childEnumerator;
@end

