//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/SUOptionsBase.h>

#import <SoftwareUpdateServices/NSCopying-Protocol.h>
#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class NSObject, SUDescriptor;
@protocol OS_dispatch_queue, SUDownloadPolicy;

@interface SUDownloadOptions : SUOptionsBase <NSSecureCoding, NSCopying>
{
    _Bool _downloadOnly;
    _Bool _autoDownload;
    int _downloadFeeAgreementStatus;
    int _termsAndConditionsAgreementStatus;
    SUDescriptor *_downloadDescriptor;
    int _activeDownloadPolicyType;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) SUDescriptor *downloadDescriptor; // @synthesize downloadDescriptor=_downloadDescriptor;
@property(nonatomic) int termsAndConditionsAgreementStatus; // @synthesize termsAndConditionsAgreementStatus=_termsAndConditionsAgreementStatus;
@property(nonatomic) int downloadFeeAgreementStatus; // @synthesize downloadFeeAgreementStatus=_downloadFeeAgreementStatus;
@property(nonatomic, getter=isAutoDownload) _Bool autoDownload; // @synthesize autoDownload=_autoDownload;
@property(nonatomic, getter=isDownloadOnly) _Bool downloadOnly; // @synthesize downloadOnly=_downloadOnly;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isEnabledOnBatteryPower) _Bool enabledOnBatteryPower;
@property(readonly, nonatomic, getter=isEnabledForWifi) _Bool enabledForWifi;
@property(readonly, nonatomic, getter=isEnabledForCellular) _Bool enabledForCellular;
@property(readonly, nonatomic, getter=isEnabledForCellularRoaming) _Bool enabledForCellularRoaming;
@property(readonly, nonatomic, getter=isEnabledForExpensiveNetwork) _Bool enabledForExpensiveNetwork;
- (_Bool)allowExpensiveNetwork;
- (_Bool)allowCellular;
@property(retain, nonatomic) id <SUDownloadPolicy> activeDownloadPolicy;
@property(nonatomic) int activeDownloadPolicyType;
- (id)initWithMetadata:(id)arg1 andDescriptor:(id)arg2;
- (id)initWithDescriptor:(id)arg1;

@end

