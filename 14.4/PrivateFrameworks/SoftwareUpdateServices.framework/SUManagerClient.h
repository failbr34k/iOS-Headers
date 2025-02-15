//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/SUInstallationConstraintObserverDelegate-Protocol.h>
#import <SoftwareUpdateServices/SUManagerClientInterface-Protocol.h>
#import <SoftwareUpdateServices/SUPreferencesObserver-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection, SUDescriptor;
@protocol OS_dispatch_queue, SUManagerClientDelegate;

@interface SUManagerClient : NSObject <SUManagerClientInterface, SUInstallationConstraintObserverDelegate, SUPreferencesObserver>
{
    NSXPCConnection *_serverConnection;
    id <SUManagerClientDelegate> _delegate;
    _Bool _connected;
    _Bool _serverIsExiting;
    int _clientType;
    _Bool _installing;
    SUDescriptor *_installDescriptor;
    SUDescriptor *_scanDescriptor;
    NSMutableDictionary *_installOperationIDsToOperationHandler;
    NSMutableSet *_installationConstraintObservers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)_shouldDisallowAvailabilityNotifications;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SUDescriptor *scanDescriptor; // @synthesize scanDescriptor=_scanDescriptor;
@property(retain, nonatomic) SUDescriptor *installDescriptor; // @synthesize installDescriptor=_installDescriptor;
@property(nonatomic) int clientType; // @synthesize clientType=_clientType;
@property(nonatomic) __weak id <SUManagerClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)autoInstallOperationPasscodePolicyChanged:(id)arg1 passcodePolicyType:(unsigned long long)arg2;
- (void)autoInstallOperationIsReadyToInstall:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)autoInstallOperationDidConsent:(id)arg1;
- (void)autoInstallOperationDidExpire:(id)arg1 withError:(id)arg2;
- (void)autoInstallOperationWasCancelled:(id)arg1;
- (void)managedInstallationRequested:(id)arg1;
- (void)installPolicyDidChange:(id)arg1;
- (void)installDidFinish:(id)arg1;
- (void)installDidFail:(id)arg1 withError:(id)arg2;
- (void)installDidStart:(id)arg1;
- (void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg1;
- (void)downloadDidFinish:(id)arg1 withInstallPolicy:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)downloadDidFail:(id)arg1 withError:(id)arg2;
- (void)downloadProgressDidChange:(id)arg1;
- (void)downloadDidStart:(id)arg1;
- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2;
- (void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2;
- (void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3;
- (void)scanRequestDidStartForOptions:(id)arg1;
- (void)noteServerExiting;
- (void)noteConnectionDropped;
- (void)connectToServerIfNecessary;
- (void)_invalidateConnection;
- (id)_remoteSynchronousInterfaceWithErrorHandler:(CDUnknownBlockType)arg1 connectIfNecessary:(_Bool)arg2;
- (id)_remoteInterfaceWithErrorHandler:(CDUnknownBlockType)arg1 connectIfNecessary:(_Bool)arg2;
- (id)_remoteInterfaceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteInterface;
- (id)_bundleIdentifier;
- (void)_invalidateConstraintObserver:(id)arg1 withError:(id)arg2;
- (void)_invalidateAllInstallationConstraintObserversForDownload;
- (void)preference:(id)arg1 didChange:(id)arg2;
- (void)installationConstraintObserverDidRemoveAllObserverBlocks:(id)arg1;
- (void)installationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2;
- (void)scheduleDateActivity:(long long)arg1;
- (void)demoteApps:(unsigned long long)arg1;
- (void)_cancelAutoInstallOperation:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)_consentAutoInstallOperation:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)_unregisterAutoInstallOperationClientHandler:(id)arg1;
- (void)_registerAutoInstallOperationClientHandler:(id)arg1;
- (_Bool)isAutomaticDownloadEnabled;
- (void)enableAutomaticDownload:(_Bool)arg1;
- (_Bool)isAutomaticUpdateV2Enabled;
- (void)enableAutomaticUpdateV2:(_Bool)arg1;
- (void)getMandatorySoftwareUpdateDictionary:(CDUnknownBlockType)arg1;
- (void)setMandatorySoftwareUpdateDictionary:(id)arg1;
- (void)delayEndDate:(CDUnknownBlockType)arg1;
- (void)isDelayingUpdates:(CDUnknownBlockType)arg1;
- (void)slaVersion:(CDUnknownBlockType)arg1;
- (_Bool)isInstallationKeybagRequired;
- (_Bool)createInstallationKeybag:(id)arg1 forUnattendedInstall:(_Bool)arg2;
- (_Bool)createInstallationKeybag:(id)arg1;
- (void)installUpdate:(CDUnknownBlockType)arg1;
- (void)installUpdateWithOptions:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)installUpdateWithInstallOptions:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)isUpdateReadyForInstallation:(CDUnknownBlockType)arg1;
- (void)registerCSInstallPredicatesOnDate:(id)arg1;
- (id)observeInstallationConstraintChangesForDownload:(id)arg1 observer:(CDUnknownBlockType)arg2;
- (id)_getExistingAutoInstallOperationFromModel:(id)arg1;
- (void)presentAutoUpdateBanner:(CDUnknownBlockType)arg1;
- (_Bool)isAutoUpdateScheduled;
- (void)isAutoUpdateScheduled:(CDUnknownBlockType)arg1;
- (void)isAutoUpdateEnabled:(CDUnknownBlockType)arg1;
- (void)currentPasscodePolicy:(CDUnknownBlockType)arg1;
- (void)currentAutoInstallOperation:(_Bool)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)extraSpaceNeededForDownloadWithoutAppPurging:(CDUnknownBlockType)arg1;
- (void)deviceHasSufficientSpaceForDownload:(CDUnknownBlockType)arg1;
- (void)downloadAndInstallState:(CDUnknownBlockType)arg1;
- (void)download:(CDUnknownBlockType)arg1;
- (void)purgeDownload:(CDUnknownBlockType)arg1;
- (void)updateDownloadMetadata:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)updateDownloadOptions:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)resumeDownload:(CDUnknownBlockType)arg1;
- (void)pauseDownload:(CDUnknownBlockType)arg1;
- (void)cancelDownload:(CDUnknownBlockType)arg1;
- (void)startDownloadWithMetadata:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)startDownloadWithOptions:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)startDownload:(CDUnknownBlockType)arg1;
- (void)isDownloading:(CDUnknownBlockType)arg1;
- (unsigned long long)totalPurgeableSpace;
- (void)descriptor:(CDUnknownBlockType)arg1;
- (void)autoScanAndDownloadIfAvailable:(CDUnknownBlockType)arg1;
- (void)scanForUpdates:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)isScanning:(CDUnknownBlockType)arg1;
- (void)_setClientType;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 clientType:(int)arg3;
- (id)initWithDelegate:(id)arg1 clientType:(int)arg2;
- (id)initWithDelegate:(id)arg1 andQueue:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

