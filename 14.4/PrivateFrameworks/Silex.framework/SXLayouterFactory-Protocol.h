//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXContainerComponentBlueprint;
@protocol SXLayouter, SXLayouterDelegate;

@protocol SXLayouterFactory <NSObject>
- (id <SXLayouter>)layouterForContainerComponentBlueprint:(SXContainerComponentBlueprint *)arg1 delegate:(id <SXLayouterDelegate>)arg2;
@end

