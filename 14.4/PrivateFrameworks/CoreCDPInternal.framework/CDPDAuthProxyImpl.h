//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDAuthProviderInternal-Protocol.h>

@class NSString;

@interface CDPDAuthProxyImpl : NSObject <CDPDAuthProviderInternal>
{
}

- (id)_authContextFromCDPContext:(id)arg1;
- (void)cdpContext:(id)arg1 persistMasterKeyVerifier:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

