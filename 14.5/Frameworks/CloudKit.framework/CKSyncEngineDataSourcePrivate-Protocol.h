//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKSyncEngineDataSource-Protocol.h>

@class CKRecordZoneID, CKSyncEngine;

@protocol CKSyncEngineDataSourcePrivate <CKSyncEngineDataSource>

@optional
- (void)syncEngineDidEndFetchingChanges:(CKSyncEngine *)arg1;
- (void)syncEngineDidBeginFetchingChanges:(CKSyncEngine *)arg1;
- (_Bool)syncEngine:(CKSyncEngine *)arg1 shouldFetchChangesForZoneID:(CKRecordZoneID *)arg2;
@end

