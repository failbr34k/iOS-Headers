//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKit/SKRequest.h>

@protocol SKProductsRequestDelegate;

@interface SKProductsRequest : SKRequest
{
    id _productsRequestInternal;
}

- (void).cxx_destruct;
- (id)_newResponseForProducts:(id)arg1 invalidIdentifiers:(id)arg2;
- (void)_start;
- (id)initWithProductIdentifiers:(id)arg1;
- (id)init;
- (void)_startWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(nonatomic) __weak id <SKProductsRequestDelegate> delegate; // @dynamic delegate;

@end

