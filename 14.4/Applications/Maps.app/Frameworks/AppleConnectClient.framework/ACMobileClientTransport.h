//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleConnectClient/ACClientTransportProtocol-Protocol.h>

@class NSExtension, NSString;
@protocol ACMobileClientTransportConsumerProtocol;

__attribute__((visibility("hidden")))
@interface ACMobileClientTransport : NSObject <ACClientTransportProtocol>
{
    NSExtension *_extension;
    id <ACMobileClientTransportConsumerProtocol> consumer;
    id _request;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id request; // @synthesize request=_request;
@property(nonatomic) __weak id <ACMobileClientTransportConsumerProtocol> consumer; // @synthesize consumer;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void)__sendRequest:(id)arg1 didSend:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRequest:(id)arg1 didSend:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processRequestDidEndWithItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isBusy;
- (_Bool)extensionSupportsKeyedArchiving;
@property(readonly, nonatomic) NSString *fullVersion;
@property(readonly, nonatomic) NSString *bundleVersion;
@property(readonly, nonatomic) NSString *shortVersion;
@property(readonly, nonatomic) NSString *version;
- (id)loadIfNeeded;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

