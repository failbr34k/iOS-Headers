//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString, NSURL;

@interface CHSScreenshotManager : NSObject
{
    NSURL *_baseURL;
    NSString *_fileUTI;
    NSString *_fileExtension;
    NSFileManager *_fileManager;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(readonly, nonatomic) NSString *fileUTI; // @synthesize fileUTI=_fileUTI;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (id)finalFileNameForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3;
- (id)indexingDirectoryNameForWidget:(id)arg1;
- (id)URLForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3 createIntermediateDirectories:(_Bool)arg4;
- (id)contentIdentifierForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3;
- (id)URLIfScreenshotExistsForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3;
- (void)deleteAllCachedScreenshots;
- (id)initWithDirectory:(id)arg1 fileUTI:(id)arg2 fileExtension:(id)arg3 fileManager:(id)arg4;
- (id)initWithDirectory:(id)arg1 fileUTI:(id)arg2 fileExtension:(id)arg3;
- (id)initWithDirectory:(id)arg1 fileType:(id)arg2 fileManager:(id)arg3;
- (id)initWithDirectory:(id)arg1 fileType:(id)arg2;

@end

