//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <AppSSO/SOExtensionContext-Protocol.h>
#import <AppSSO/SORemoteExtensionContextProtocol-Protocol.h>

@class ASAuthorizationProviderExtensionAuthorizationRequest, NSString, SOExtensionServiceConnection, SOExtensionViewService;
@protocol ASAuthorizationProviderExtensionAuthorizationRequestHandler;

__attribute__((visibility("hidden")))
@interface SORemoteExtensionContext : NSExtensionContext <SORemoteExtensionContextProtocol, SOExtensionContext>
{
    SOExtensionServiceConnection *_extensionServiceConnection;
    SOExtensionViewService *_viewService;
    ASAuthorizationProviderExtensionAuthorizationRequest *_extensionAuthorizationRequest;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
- (void).cxx_destruct;
@property(readonly, nonatomic) ASAuthorizationProviderExtensionAuthorizationRequest *extensionAuthorizationRequest; // @synthesize extensionAuthorizationRequest=_extensionAuthorizationRequest;
@property __weak SOExtensionViewService *viewService; // @synthesize viewService=_viewService;
- (void)_disableAppSSOInCFNetwork;
- (_Bool)canOpenURL:(id)arg1;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)synchronousHostContextWithError:(id *)arg1;
- (id)hostContextWithError:(id *)arg1;
@property(readonly, nonatomic) id <ASAuthorizationProviderExtensionAuthorizationRequestHandler> extensionViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

