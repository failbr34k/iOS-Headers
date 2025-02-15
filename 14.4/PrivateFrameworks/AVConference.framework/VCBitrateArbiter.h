//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCBitrateArbiter : NSObject
{
    unsigned int _maxAllowedBitrate;
    unsigned int _maxAllowedBitrate2G;
    unsigned int _maxAllowedBitrate3G;
    unsigned int _maxAllowedBitrateLTE;
    unsigned int _maxAllowedBitrateHighRat;
    unsigned int _maxAllowedBitrateWifi;
    unsigned int _maxAllowedScreenShareBitrate2G;
    unsigned int _maxAllowedScreenShareBitrate3G;
    unsigned int _maxAllowedScreenShareBitrateLTE;
    unsigned int _maxAllowedScreenShareBitrateWifi;
    unsigned int _maxAllowedAudioOnlyBitrate2G;
    unsigned int _maxAllowedAudioOnlyBitrate3G;
    unsigned int _maxAllowedAudioOnlyBitrateLTE;
    unsigned int _maxAllowedAudioOnlyBitrateWifi;
    unsigned int _maxiBitrateIPadCompanionP2P;
    unsigned int _maxAllowedBitrateIPadCompanionUSB;
    NSMutableArray *supportedBitrateRules;
    unsigned int _maxAllowedBitrateP2P;
    unsigned int _maxAllowedBitrateUSB;
}

+ (void)updateMaxAllowedBitratePerConnection:(unsigned int *)arg1 connectionType:(int)arg2 bandwidthSettings:(id)arg3;
@property(readonly) unsigned int maxAllowedBitrateUSB; // @synthesize maxAllowedBitrateUSB=_maxAllowedBitrateUSB;
@property(readonly) unsigned int maxAllowedBitrateP2P; // @synthesize maxAllowedBitrateP2P=_maxAllowedBitrateP2P;
@property(readonly) unsigned int maxAllowedBitrateWifi; // @synthesize maxAllowedBitrateWifi=_maxAllowedBitrateWifi;
@property(readonly) unsigned int maxAllowedBitrateHighRat; // @synthesize maxAllowedBitrateHighRat=_maxAllowedBitrateHighRat;
@property(readonly) unsigned int maxAllowedBitrateLTE; // @synthesize maxAllowedBitrateLTE=_maxAllowedBitrateLTE;
@property(readonly) unsigned int maxAllowedBitrate3G; // @synthesize maxAllowedBitrate3G=_maxAllowedBitrate3G;
@property(readonly) unsigned int maxAllowedBitrate2G; // @synthesize maxAllowedBitrate2G=_maxAllowedBitrate2G;
@property(readonly) unsigned int maxAllowedBitrate; // @synthesize maxAllowedBitrate=_maxAllowedBitrate;
- (void)updateNegotiatedSettings:(id)arg1;
- (unsigned int)maxAllowedBitrateForConnectionType:(int)arg1 operatingMode:(int)arg2;
- (unsigned int)maxAllowedBitrateForVCConnection:(id)arg1 forLocalInterface:(_Bool)arg2 operatingMode:(int)arg3 encodeRule:(id)arg4;
- (id)maxAllowedBitrateRuleForConnection:(int)arg1;
- (unsigned int)maxAllowedAudioOnlyBitrateForConnection:(int)arg1;
- (unsigned int)maxAllowedScreenShareBitrateForConnection:(int)arg1;
- (unsigned int)maxAllowedBitrateForVCConnection:(id)arg1 forLocalInterface:(_Bool)arg2 encodeRule:(id)arg3;
- (unsigned int)maxAllowedBitrateForConnectionType:(int)arg1;
- (unsigned int)maxAllowedScreenShareCellularBitrate;
- (unsigned int)maxAllowedCellularBitrate;
- (void)readCarrierBundleValues;
- (void)updateMaxAllowedBitrate:(unsigned int *)arg1 key:(struct __CFString *)arg2 type:(id)arg3 isAudio:(_Bool)arg4 carrierBundleBitrates:(struct __CFDictionary *)arg5;
- (void)readStoreBagValues:(void *)arg1;
- (int)storeBagBitrateForKey:(id)arg1;
- (void)readHardwareValues;
- (void)addRuleForBitrate:(unsigned int)arg1 connectionType:(int)arg2 limitingRule:(id)arg3;
- (void)createSupportedBitrateRuleSets;
- (void)dealloc;
- (id)initWithDeviceRole:(int)arg1 callLogFile:(void *)arg2;

@end

