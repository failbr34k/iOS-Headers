//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSData, NSURL;

@protocol PLAssetsdLibraryManagementServiceProtocol <NSObject>
- (void)closeAndDeletePhotoLibraryAtURL:(NSURL *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)getPhotoLibraryURLsWithLibraryURL:(NSURL *)arg1 reply:(void (^)(NSURL *, NSURL *, NSArray *, NSError *))arg2;
- (void)getActivePhotoLibrariesWithReply:(void (^)(NSSet *, NSError *))arg1;
- (void)setSystemPhotoLibraryURL:(NSURL *)arg1 sandboxExtension:(NSData *)arg2 options:(unsigned short)arg3 reply:(void (^)(NSError *))arg4;
@end

