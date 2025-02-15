//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecord, CKDPRecordSaveRequestConflictLoserUpdate, CKDPRecordSaveRequestShareIdUpdate, CKDPRequestedFields, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordSaveRequest : PBRequest <NSCopying>
{
    CKDPRecordSaveRequestConflictLoserUpdate *_conflictLoserUpdate;
    NSMutableArray *_conflictLosersToResolves;
    NSString *_etag;
    NSMutableArray *_fieldsToDeleteIfExistOnMerges;
    NSString *_parentChainProtectionInfoTag;
    CKDPRecord *_record;
    NSString *_recordProtectionInfoTag;
    CKDPRequestedFields *_requestedFields;
    int _saveSemantics;
    NSString *_shareEtag;
    CKDPRecordSaveRequestShareIdUpdate *_shareIDUpdate;
    NSString *_zoneProtectionInfoTag;
    _Bool _merge;
    struct {
        unsigned int saveSemantics:1;
        unsigned int merge:1;
    } _has;
}

+ (Class)conflictLosersToResolveType;
+ (Class)fieldsToDeleteIfExistOnMergeType;
+ (id)options;
- (void).cxx_destruct;
@property(retain, nonatomic) CKDPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) NSString *parentChainProtectionInfoTag; // @synthesize parentChainProtectionInfoTag=_parentChainProtectionInfoTag;
@property(retain, nonatomic) CKDPRecordSaveRequestShareIdUpdate *shareIDUpdate; // @synthesize shareIDUpdate=_shareIDUpdate;
@property(retain, nonatomic) NSString *shareEtag; // @synthesize shareEtag=_shareEtag;
@property(retain, nonatomic) NSMutableArray *conflictLosersToResolves; // @synthesize conflictLosersToResolves=_conflictLosersToResolves;
@property(retain, nonatomic) NSString *recordProtectionInfoTag; // @synthesize recordProtectionInfoTag=_recordProtectionInfoTag;
@property(retain, nonatomic) NSString *zoneProtectionInfoTag; // @synthesize zoneProtectionInfoTag=_zoneProtectionInfoTag;
@property(retain, nonatomic) CKDPRecordSaveRequestConflictLoserUpdate *conflictLoserUpdate; // @synthesize conflictLoserUpdate=_conflictLoserUpdate;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSMutableArray *fieldsToDeleteIfExistOnMerges; // @synthesize fieldsToDeleteIfExistOnMerges=_fieldsToDeleteIfExistOnMerges;
@property(nonatomic) _Bool merge; // @synthesize merge=_merge;
@property(retain, nonatomic) CKDPRecord *record; // @synthesize record=_record;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRequestedFields;
@property(readonly, nonatomic) _Bool hasParentChainProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasShareIDUpdate;
@property(readonly, nonatomic) _Bool hasShareEtag;
- (id)conflictLosersToResolveAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictLosersToResolvesCount;
- (void)addConflictLosersToResolve:(id)arg1;
- (void)clearConflictLosersToResolves;
@property(readonly, nonatomic) _Bool hasRecordProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasZoneProtectionInfoTag;
- (int)StringAsSaveSemantics:(id)arg1;
- (id)saveSemanticsAsString:(int)arg1;
@property(nonatomic) _Bool hasSaveSemantics;
@property(nonatomic) int saveSemantics; // @synthesize saveSemantics=_saveSemantics;
@property(readonly, nonatomic) _Bool hasConflictLoserUpdate;
@property(readonly, nonatomic) _Bool hasEtag;
- (id)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldsToDeleteIfExistOnMergesCount;
- (void)addFieldsToDeleteIfExistOnMerge:(id)arg1;
- (void)clearFieldsToDeleteIfExistOnMerges;
@property(nonatomic) _Bool hasMerge;
@property(readonly, nonatomic) _Bool hasRecord;

@end

