//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSPFileManager : NSObject
{
}

+ (void)copyDataFromReadChannel:(id)arg1 size:(unsigned long long)arg2 toWriteChannel:(id)arg3 synchronous:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)ioCompletionQueue;
+ (void)transcodeReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 synchronous:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)copyDataFromReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 synchronous:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)copyDataFromReadChannel:(id)arg1 decryptionInfo:(id)arg2 toWriteChannel:(id)arg3 encryptionInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (_Bool)copyDataFromReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(unsigned long long)arg3 toWriteChannel:(id)arg4 encryptionInfo:(id)arg5 encodedLength:(unsigned long long *)arg6 error:(id *)arg7;
+ (_Bool)linkOrCopyItemAtURL:(id)arg1 decryptionInfo:(id)arg2 toURL:(id)arg3 encryptionInfo:(id)arg4 canLink:(_Bool)arg5 encodedLength:(unsigned long long *)arg6 error:(id *)arg7;
+ (_Bool)linkOrCloneItemAtURL:(id)arg1 toURL:(id)arg2 canLink:(_Bool)arg3 canClone:(_Bool)arg4 error:(id *)arg5;
+ (_Bool)linkOrCloneItemAtURL:(id)arg1 toURL:(id)arg2 canLink:(_Bool)arg3 error:(id *)arg4;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 sourcePath:(id)arg3 targetPath:(id)arg4;

@end

