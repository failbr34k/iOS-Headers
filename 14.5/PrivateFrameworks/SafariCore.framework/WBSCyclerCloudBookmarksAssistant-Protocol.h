//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariCore/NSObject-Protocol.h>

@protocol WBSCyclerCloudBookmarksAssistant <NSObject>
- (void)migrateToCloudKitWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)clearLocalDataIncludingMigrationState:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)resetToDAVDatabaseWithCompletionHandler:(void (^)(NSError *))arg1;
@end

