//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface APRequestHandler : NSObject
{
}

+ (void)didReceiveStorePushNotificationWithPayload:(id)arg1;
+ (void)presentProductPageWithTitle:(id)arg1 body:(id)arg2 approve:(id)arg3 decline:(id)arg4 itemIdentifier:(id)arg5 previewURL:(id)arg6;
+ (void)startDaemon;
+ (void)resetAccountWithType:(long long)arg1;
+ (void)updateRequestWithIdentifier:(id)arg1 action:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)localApproveRequestWithItemIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)addRequestWithURL:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

