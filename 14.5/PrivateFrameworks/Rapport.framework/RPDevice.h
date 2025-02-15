//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>

@class CUMobileDevice, CUPairedPeer, CURangingMeasurement, NSData, NSDictionary, NSString, NSUUID, SFDevice;

@interface RPDevice : NSObject <NSSecureCoding>
{
    _Bool _idsDeviceIdentifierConflict;
    unsigned char _deviceActionType;
    _Bool _needsSetup;
    int _activityLevel;
    unsigned int _flags;
    int _proximity;
    unsigned int _blePairState;
    int _rawRSSI;
    int _smoothedRSSI;
    unsigned int _systemPairState;
    unsigned int _wifiDeviceIEFlags;
    NSString *_accountID;
    NSData *_bleAuthTag;
    NSString *_contactID;
    NSString *_identifier;
    NSString *_idsDeviceIdentifier;
    NSString *_model;
    NSString *_name;
    CURangingMeasurement *_relativeLocation;
    SFDevice *_bleDevice;
    CUMobileDevice *_mobileDevice;
    NSData *_authTag;
    NSData *_bleAdvertisementData;
    NSData *_bleDeviceAddress;
    NSUUID *_identifierUUID;
    CUPairedPeer *_pairedPeer;
    NSUUID *_pairingIdentifier;
    NSData *_txtData;
    NSDictionary *_txtDictionary;
    NSString *_udid;
    NSData *_wifiAddress;
    NSData *_wifiBSSID;
    NSData *_wifiDeviceIEDeviceID;
    NSData *_wifiDeviceIEName;
    NSData *_wifiIEData;
    id _wifiPlatformObject;
    NSString *_wifiSSID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *wifiSSID; // @synthesize wifiSSID=_wifiSSID;
@property(retain, nonatomic) id wifiPlatformObject; // @synthesize wifiPlatformObject=_wifiPlatformObject;
@property(copy, nonatomic) NSData *wifiIEData; // @synthesize wifiIEData=_wifiIEData;
@property(copy, nonatomic) NSData *wifiDeviceIEName; // @synthesize wifiDeviceIEName=_wifiDeviceIEName;
@property(readonly, nonatomic) unsigned int wifiDeviceIEFlags; // @synthesize wifiDeviceIEFlags=_wifiDeviceIEFlags;
@property(copy, nonatomic) NSData *wifiDeviceIEDeviceID; // @synthesize wifiDeviceIEDeviceID=_wifiDeviceIEDeviceID;
@property(copy, nonatomic) NSData *wifiBSSID; // @synthesize wifiBSSID=_wifiBSSID;
@property(copy, nonatomic) NSData *wifiAddress; // @synthesize wifiAddress=_wifiAddress;
@property(copy, nonatomic) NSString *udid; // @synthesize udid=_udid;
@property(readonly, copy, nonatomic) NSDictionary *txtDictionary; // @synthesize txtDictionary=_txtDictionary;
@property(readonly, copy, nonatomic) NSData *txtData; // @synthesize txtData=_txtData;
@property(nonatomic) unsigned int systemPairState; // @synthesize systemPairState=_systemPairState;
@property(readonly, nonatomic) int smoothedRSSI; // @synthesize smoothedRSSI=_smoothedRSSI;
@property(readonly, nonatomic) int rawRSSI; // @synthesize rawRSSI=_rawRSSI;
@property(copy, nonatomic) NSUUID *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(retain, nonatomic) CUPairedPeer *pairedPeer; // @synthesize pairedPeer=_pairedPeer;
@property(readonly, nonatomic) _Bool needsSetup; // @synthesize needsSetup=_needsSetup;
@property(copy, nonatomic) NSUUID *identifierUUID; // @synthesize identifierUUID=_identifierUUID;
@property(readonly, nonatomic) unsigned char deviceActionType; // @synthesize deviceActionType=_deviceActionType;
@property(readonly, nonatomic) unsigned int blePairState; // @synthesize blePairState=_blePairState;
@property(readonly, copy, nonatomic) NSData *bleDeviceAddress; // @synthesize bleDeviceAddress=_bleDeviceAddress;
@property(readonly, copy, nonatomic) NSData *bleAdvertisementData; // @synthesize bleAdvertisementData=_bleAdvertisementData;
@property(readonly, copy, nonatomic) NSData *authTag; // @synthesize authTag=_authTag;
@property(retain, nonatomic) CUMobileDevice *mobileDevice; // @synthesize mobileDevice=_mobileDevice;
@property(retain, nonatomic) SFDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property(retain) CURangingMeasurement *relativeLocation; // @synthesize relativeLocation=_relativeLocation;
@property(readonly, nonatomic) int proximity; // @synthesize proximity=_proximity;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, nonatomic) _Bool idsDeviceIdentifierConflict; // @synthesize idsDeviceIdentifierConflict=_idsDeviceIdentifierConflict;
@property(readonly, copy, nonatomic) NSString *idsDeviceIdentifier; // @synthesize idsDeviceIdentifier=_idsDeviceIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSString *contactID; // @synthesize contactID=_contactID;
@property(readonly, copy, nonatomic) NSData *bleAuthTag; // @synthesize bleAuthTag=_bleAuthTag;
@property(readonly, nonatomic) int activityLevel; // @synthesize activityLevel=_activityLevel;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void)updateWithWiFiDevice:(id)arg1 changes:(unsigned int)arg2;
- (void)updateWithSystemInfo:(id)arg1;
- (unsigned int)updateWithSFDevice:(id)arg1 changes:(unsigned int)arg2;
- (unsigned int)updateWithMobileDevice:(id)arg1;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (void)_updateTXTDictionary:(id)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

