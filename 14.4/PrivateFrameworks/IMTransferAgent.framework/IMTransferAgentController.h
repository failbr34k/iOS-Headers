//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MMCSController;

@interface IMTransferAgentController : NSObject
{
    MMCSController *_controller;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) MMCSController *controller; // @synthesize controller=_controller;
- (void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 fileSize:(unsigned long long)arg7 sourceAppID:(id)arg8 progressBlock:(CDUnknownBlockType)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 allowReauthorize:(_Bool)arg7 fileSize:(unsigned long long)arg8 sourceAppID:(id)arg9 progressBlock:(CDUnknownBlockType)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (_Bool)_isWhiteListedURL:(id)arg1;
- (id)_defaultMMCSWhiteList;
- (void)cancelSendTransferID:(id)arg1;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 sourceAppID:(id)arg4 userInfo:(id)arg5 progressBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 sourceAppID:(id)arg4 retryAttemptCount:(unsigned long long)arg5 userInfo:(id)arg6 progressBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (_Bool)_shouldRetryUploadGivenMMCSError:(id)arg1 retryAttemptCount:(unsigned long long)arg2;
- (void)dealloc;

@end

