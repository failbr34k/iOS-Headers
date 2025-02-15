//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _WKRemoteObjectRegistry : NSObject
{
    struct unique_ptr<WebKit::RemoteObjectRegistry, std::__1::default_delete<WebKit::RemoteObjectRegistry>> _remoteObjectRegistry;
    struct RetainPtr<NSMapTable> _remoteObjectProxies;
    struct HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>> _exportedObjects;
    struct HashMap<unsigned long long, PendingReply, WTF::DefaultHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<PendingReply>> _pendingReplies;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_releaseReplyWithID:(unsigned long long)arg1;
- (void)_callReplyWithID:(unsigned long long)arg1 blockInvocation:(const struct UserData *)arg2;
- (void)_invokeMethod:(const struct RemoteObjectInvocation *)arg1;
@property(readonly, nonatomic) struct RemoteObjectRegistry *remoteObjectRegistry;
- (void)_sendInvocation:(id)arg1 interface:(id)arg2;
- (void)_invalidate;
- (id)_initWithWebPageProxy:(NakedRef_0c67ce5b)arg1;
- (id)_initWithWebPage:(NakedRef_f43bc9c8)arg1;
- (id)remoteObjectProxyWithInterface:(id)arg1;
- (void)unregisterExportedObject:(id)arg1 interface:(id)arg2;
- (void)registerExportedObject:(id)arg1 interface:(id)arg2;

@end

