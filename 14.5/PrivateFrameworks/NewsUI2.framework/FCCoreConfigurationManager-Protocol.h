//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/NSObject-Protocol.h>

@class OS_dispatch_queue;
@protocol FCCoreConfiguration, FCCoreConfigurationObserving;

@protocol FCCoreConfigurationManager <NSObject>
- (void)removeObserver:(id <FCCoreConfigurationObserving>)arg1;
- (void)addObserver:(id <FCCoreConfigurationObserving>)arg1;
- (void)fetchConfigurationIfNeededWithCompletionQueue:(OS_dispatch_queue *)arg1 completion:(void (^)(id <FCCoreConfiguration>, NSError *))arg2;
- (void)fetchConfigurationIfNeededWithCompletion:(void (^)(id <FCCoreConfiguration>, NSError *))arg1;
@property(nonatomic, readonly) id <FCCoreConfiguration> configuration;
@end

