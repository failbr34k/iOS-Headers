//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PKPaymentSetupBrowseProductsModel : NSObject
{
    NSArray *_products;
    NSArray *_likelyFilteredProducts;
    NSArray *_unlikelyFilteredProducts;
    NSString *_filterString;
    unsigned long long _filterType;
    NSArray *_likelyProductIdentifiers;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *likelyProductIdentifiers; // @synthesize likelyProductIdentifiers=_likelyProductIdentifiers;
@property(nonatomic) unsigned long long filterType; // @synthesize filterType=_filterType;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
- (void)_updatedFilteredProducts;
@property(readonly, copy, nonatomic) NSArray *unifiedProducts;
- (id)unifiedProductAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfUnifiedProducts;
@property(readonly, copy, nonatomic) NSArray *unlikelyProducts;
- (id)unlikelyProductAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfUnlikelyProducts;
@property(readonly, copy, nonatomic) NSArray *likelyProducts;
- (id)likelyProductAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfLikelyProducts;
- (unsigned long long)unfilteredCountForType:(unsigned long long)arg1;
- (id)initWithProducts:(id)arg1;

@end

