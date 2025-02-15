//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class NSError, SVXActivationContext, SVXDeactivationContext, SVXSessionManager;

@protocol SVXSessionActivationListening <NSObject>

@optional
- (void)sessionManager:(SVXSessionManager *)arg1 didDeactivateWithContext:(SVXDeactivationContext *)arg2;
- (void)sessionManager:(SVXSessionManager *)arg1 willDeactivateWithContext:(SVXDeactivationContext *)arg2;
- (void)sessionManager:(SVXSessionManager *)arg1 didNotActivateWithContext:(SVXActivationContext *)arg2 error:(NSError *)arg3;
- (void)sessionManager:(SVXSessionManager *)arg1 didActivateWithContext:(SVXActivationContext *)arg2;
- (void)sessionManager:(SVXSessionManager *)arg1 willActivateWithContext:(SVXActivationContext *)arg2;
@end

