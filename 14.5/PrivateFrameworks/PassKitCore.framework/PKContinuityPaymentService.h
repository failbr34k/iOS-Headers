//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKContinuityPaymentServiceExportedInterface-Protocol.h>

@class NSArray, PKXPCService;
@protocol OS_dispatch_queue, PKContinuityPaymentServiceDelegate;

@interface PKContinuityPaymentService : NSObject <PKContinuityPaymentServiceExportedInterface>
{
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct os_unfair_lock_s _remoteDeviceLock;
    NSArray *_remoteDevices;
    id <PKContinuityPaymentServiceDelegate> _delegate;
}

+ (id)sharedService;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PKContinuityPaymentServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;
- (void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceiveUpdatedPaymentDevices:(id)arg1;
- (void)promptDetailsForVirtualCard:(id)arg1 showNotification:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendPaymentSetupRequest:(id)arg1 appDisplayName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setRemoteDevices:(id)arg1;
@property(readonly, nonatomic) NSArray *remoteDevices; // @synthesize remoteDevices=_remoteDevices;
- (_Bool)canMakePaymentsWithRemoteDevices;
- (_Bool)hasRemoteDevices;
- (void)cancelRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentContinuityPaymentInterfaceWithRequestIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestInstrumentThumbnail:(id)arg1 forRemoteDevice:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendPaymentStatus:(long long)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendPaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendPayment:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendPaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendPaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePaymentDevices;
- (void)noteAccountDeleted;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (id)init;

@end

