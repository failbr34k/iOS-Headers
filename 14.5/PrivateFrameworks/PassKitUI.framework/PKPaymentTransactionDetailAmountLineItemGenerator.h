//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKPaymentTransactionDetailAmountLineItemGenerator : NSObject
{
}

- (id)_foreignExchangeLineItemsForExchangeInfo:(id)arg1;
- (id)_rewardsLineItemsForRewards:(id)arg1 currencyCode:(id)arg2;
- (id)_feeLineItemsForFees:(id)arg1;
- (id)_subtotalLineItemForTransaction:(id)arg1;
- (id)_totalReceivedLineItemForTransaction:(id)arg1;
- (id)_totalSentLineItemForTransaction:(id)arg1;
- (id)_totalTransferredItemForTransaction:(id)arg1;
- (id)_totalPaidLineItemForTransaction:(id)arg1 isUnqualified:(_Bool)arg2;
- (id)_primaryFundingSourceLineItemForTransaction:(id)arg1 transactionSourceCollection:(id)arg2;
- (id)_secondaryFundingSourceLineItemForTransaction:(id)arg1;
- (id)_lineItemsForPeerPaymentTransaction:(id)arg1 transactionSourceCollection:(id)arg2;
- (id)_lineItemsForPurchaseTransaction:(id)arg1 transactionSourceCollection:(id)arg2 associatedReceipt:(id)arg3;
- (id)_lineItemsForWithdrawalTransaction:(id)arg1 transactionSourceCollection:(id)arg2;
- (id)lineItemsForInstallmentPlan:(id)arg1;
- (id)lineItemsForTransaction:(id)arg1 transactionSourceCollection:(id)arg2 associatedTransaction:(id)arg3 associatedReceipt:(id)arg4;

@end

