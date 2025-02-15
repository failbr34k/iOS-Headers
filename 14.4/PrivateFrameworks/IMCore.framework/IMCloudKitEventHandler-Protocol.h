//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/NSObject-Protocol.h>

@class IMCloudKitEventNotificationManager, IMCloudKitSyncProgress, IMCloudKitSyncState, IMCloudKitSyncStatistics, NSError, NSString;

@protocol IMCloudKitEventHandler <NSObject>

@optional
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didPerformAdditionalStorageRequiredCheck:(_Bool)arg2 additionalStorageRequired:(unsigned long long)arg3 forAccountId:(NSString *)arg4 error:(NSError *)arg5;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 syncProgressDidUpdate:(IMCloudKitSyncProgress *)arg2;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didFetchSyncStatistics:(IMCloudKitSyncStatistics *)arg2 error:(NSError *)arg3;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 syncStateDidChange:(IMCloudKitSyncState *)arg2;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didChangeEnabled:(_Bool)arg2 error:(NSError *)arg3;
- (void)cloudKitEventNotificationManager:(IMCloudKitEventNotificationManager *)arg1 didDisableAllDevices:(_Bool)arg2 error:(NSError *)arg3;
@end

