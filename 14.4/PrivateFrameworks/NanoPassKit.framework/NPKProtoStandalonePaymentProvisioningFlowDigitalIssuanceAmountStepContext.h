//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandalonePaymentSetupProduct;

@interface NPKProtoStandalonePaymentProvisioningFlowDigitalIssuanceAmountStepContext : PBCodable <NSCopying>
{
    NPKProtoStandalonePaymentSetupProduct *_product;
    _Bool _allowsReaderModeEntry;
    struct {
        unsigned int allowsReaderModeEntry:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowsReaderModeEntry; // @synthesize allowsReaderModeEntry=_allowsReaderModeEntry;
@property(retain, nonatomic) NPKProtoStandalonePaymentSetupProduct *product; // @synthesize product=_product;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAllowsReaderModeEntry;
@property(readonly, nonatomic) _Bool hasProduct;

@end

