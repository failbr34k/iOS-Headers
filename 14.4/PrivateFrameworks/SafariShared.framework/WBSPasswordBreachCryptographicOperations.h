//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSPasswordBreachConfiguration;

@interface WBSPasswordBreachCryptographicOperations : NSObject
{
    WBSPasswordBreachConfiguration *_configuration;
    struct cc_blinding_keys_ctx *_blindingKeys;
}

+ (_Bool)isValidScryptHashWorkFactor:(unsigned long long)arg1 blockSizeR:(unsigned long long)arg2 parallelismFactorP:(unsigned long long)arg3;
- (void).cxx_destruct;
- (id)generateFakeEncodedPasswordForLowFrequencyBucket;
- (id)generateFakeEncodedPasswordForHighFrequencyBucket;
- (id)unblindHash:(id)arg1;
- (id)_blindPasswordHash:(id)arg1;
- (struct _CCECCryptor *)_hashToCurve:(id)arg1;
- (id)_exportHashToCurve:(id)arg1;
- (id)_exportKeyFromCryptor:(struct _CCECCryptor *)arg1;
- (id)encodePasswordForLowFrequencyBucket:(id)arg1;
- (id)_encodePasswordForLowFrequencyBucket:(id)arg1 withHashSmoothingBits:(unsigned char)arg2;
- (id)_bucketIdentifierWithBitCount:(unsigned long long)arg1 ofData:(id)arg2;
- (id)encodePasswordForHighFrequencyBucket:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

@end

