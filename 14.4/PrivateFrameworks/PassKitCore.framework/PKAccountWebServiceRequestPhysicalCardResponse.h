//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKPhysicalCard;

@interface PKAccountWebServiceRequestPhysicalCardResponse : PKAccountWebServiceResponse
{
    PKPhysicalCard *_physicalCard;
    unsigned long long _shipmentQuoteMinimum;
    unsigned long long _shipmentQuoteMaximum;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long shipmentQuoteMaximum; // @synthesize shipmentQuoteMaximum=_shipmentQuoteMaximum;
@property(readonly, nonatomic) unsigned long long shipmentQuoteMinimum; // @synthesize shipmentQuoteMinimum=_shipmentQuoteMinimum;
@property(readonly, nonatomic) PKPhysicalCard *physicalCard; // @synthesize physicalCard=_physicalCard;
- (id)initWithData:(id)arg1;

@end

