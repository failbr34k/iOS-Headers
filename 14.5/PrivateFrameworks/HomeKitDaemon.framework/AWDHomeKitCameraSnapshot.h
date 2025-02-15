//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitCameraIDSSessionSetup, AWDHomeKitCameraSnapshotIDSTransfer, AWDHomeKitCameraSnapshotMessaging, AWDHomeKitVendorInformation, NSString;

@interface AWDHomeKitCameraSnapshot : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _certified;
    AWDHomeKitCameraSnapshotMessaging *_controllerMessaging;
    unsigned int _errorCode;
    AWDHomeKitCameraIDSSessionSetup *_idsSessionSetup;
    AWDHomeKitCameraSnapshotIDSTransfer *_phoneToWatch;
    unsigned int _receivedSnapshotFromAccessory;
    AWDHomeKitCameraSnapshotMessaging *_residentMessaging;
    AWDHomeKitCameraSnapshotIDSTransfer *_residentToPhone;
    unsigned int _sentSnapshotRequestToAccessory;
    NSString *_sessionID;
    unsigned int _underlyingErrorCode;
    NSString *_underlyingErrorDomain;
    AWDHomeKitVendorInformation *_vendorDetails;
    AWDHomeKitCameraSnapshotMessaging *_watchMessaging;
    _Bool _forNotification;
    _Bool _isLocal;
    struct {
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int errorCode:1;
        unsigned int receivedSnapshotFromAccessory:1;
        unsigned int sentSnapshotRequestToAccessory:1;
        unsigned int underlyingErrorCode:1;
        unsigned int forNotification:1;
        unsigned int isLocal:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int underlyingErrorCode; // @synthesize underlyingErrorCode=_underlyingErrorCode;
@property(retain, nonatomic) NSString *underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;
@property(retain, nonatomic) AWDHomeKitCameraSnapshotIDSTransfer *phoneToWatch; // @synthesize phoneToWatch=_phoneToWatch;
@property(retain, nonatomic) AWDHomeKitCameraSnapshotIDSTransfer *residentToPhone; // @synthesize residentToPhone=_residentToPhone;
@property(retain, nonatomic) AWDHomeKitCameraSnapshotMessaging *residentMessaging; // @synthesize residentMessaging=_residentMessaging;
@property(retain, nonatomic) AWDHomeKitCameraSnapshotMessaging *controllerMessaging; // @synthesize controllerMessaging=_controllerMessaging;
@property(retain, nonatomic) AWDHomeKitCameraSnapshotMessaging *watchMessaging; // @synthesize watchMessaging=_watchMessaging;
@property(nonatomic) unsigned int receivedSnapshotFromAccessory; // @synthesize receivedSnapshotFromAccessory=_receivedSnapshotFromAccessory;
@property(nonatomic) unsigned int sentSnapshotRequestToAccessory; // @synthesize sentSnapshotRequestToAccessory=_sentSnapshotRequestToAccessory;
@property(retain, nonatomic) AWDHomeKitCameraIDSSessionSetup *idsSessionSetup; // @synthesize idsSessionSetup=_idsSessionSetup;
@property(nonatomic) _Bool forNotification; // @synthesize forNotification=_forNotification;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUnderlyingErrorCode;
@property(readonly, nonatomic) _Bool hasUnderlyingErrorDomain;
@property(readonly, nonatomic) _Bool hasPhoneToWatch;
@property(readonly, nonatomic) _Bool hasResidentToPhone;
@property(readonly, nonatomic) _Bool hasResidentMessaging;
@property(readonly, nonatomic) _Bool hasControllerMessaging;
@property(readonly, nonatomic) _Bool hasWatchMessaging;
@property(nonatomic) _Bool hasReceivedSnapshotFromAccessory;
@property(nonatomic) _Bool hasSentSnapshotRequestToAccessory;
@property(readonly, nonatomic) _Bool hasIdsSessionSetup;
@property(nonatomic) _Bool hasForNotification;
@property(nonatomic) _Bool hasIsLocal;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasTimestamp;
- (int)StringAsCertified:(id)arg1;
- (id)certifiedAsString:(int)arg1;
@property(nonatomic) _Bool hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
@property(readonly, nonatomic) _Bool hasVendorDetails;

@end

