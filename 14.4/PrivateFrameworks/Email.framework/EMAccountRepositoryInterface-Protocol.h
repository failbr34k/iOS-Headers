//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/NSObject-Protocol.h>

@protocol EMAccountRepositoryObserver;

@protocol EMAccountRepositoryInterface <NSObject>
- (void)registerObserver:(id <EMAccountRepositoryObserver>)arg1 completionHandler:(void (^)(NSArray *, id <EFCancelable>, NSError *))arg2;
@end

