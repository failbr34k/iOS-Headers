//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/TROperationHandler-Protocol.h>

@class NSString, TRCompanionAuthOperationHandler, TRProxyAuthOperationHandler;

@interface TRAuthenticationOperationHandler : NSObject <TROperationHandler>
{
    TRCompanionAuthOperationHandler *_companionAuthHandler;
    TRProxyAuthOperationHandler *_proxyAuthHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TRProxyAuthOperationHandler *proxyAuthHandler; // @synthesize proxyAuthHandler=_proxyAuthHandler;
@property(retain, nonatomic) TRCompanionAuthOperationHandler *companionAuthHandler; // @synthesize companionAuthHandler=_companionAuthHandler;
- (void)registerMessageHandlersForSession:(id)arg1;
- (id)initWithCompanionAuthHandlerWithError:(CDUnknownBlockType)arg1 proxyAuthHandler:(CDUnknownBlockType)arg2;
- (id)initWithCompanionAuthHandler:(CDUnknownBlockType)arg1 proxyAuthHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

