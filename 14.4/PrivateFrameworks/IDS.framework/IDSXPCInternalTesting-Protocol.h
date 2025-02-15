//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/NSObject-Protocol.h>

@class IDSURI, NSData, NSDictionary, NSString;

@protocol IDSXPCInternalTesting <NSObject>
- (void)assertTransportThreadRealTimeMode:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchStoredUserDescriptions:(void (^)(NSString *))arg1;
- (void)deviceChangedForDeviceID:(NSString *)arg1 isNearby:(_Bool)arg2 isConnected:(_Bool)arg3 isCloudConnected:(_Bool)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)removeConnectionWithConnectionName:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)nukeTransparencyStateWithCompletion:(void (^)(NSError *))arg1;
- (void)nukeCloudKitTransparencyStateWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchCloudKitTransparencyStateWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchVerifierAccountKeyPublicDataWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)fetchVerifierAccountKeyTrustedDevicesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchVerifierCloudKitTrustedDevicesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchVerifierTrustedDevicesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)kickVerificationForServiceIdentifier:(NSString *)arg1 localURI:(IDSURI *)arg2 remoteURI:(IDSURI *)arg3 completion:(void (^)(NSError *))arg4;
- (void)performOutstandingKeyTransparencyVerificationWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchTransparentEndpointsForServiceIdentifier:(NSString *)arg1 localURI:(IDSURI *)arg2 remoteURI:(IDSURI *)arg3 verifyAgainstTrustCircle:(_Bool)arg4 completion:(void (^)(NSArray *, NSError *))arg5;
- (void)fetchEndpointCacheStateForServiceIdentifier:(NSString *)arg1 localURI:(IDSURI *)arg2 remoteURI:(IDSURI *)arg3 completion:(void (^)(IDSQueryKeyTransparencyContext *, NSArray *, NSError *))arg4;
- (void)autoBugCaptureWithCompletion:(void (^)(NSError *))arg1;
- (void)popupPromptWithTitle:(NSString *)arg1 message:(NSString *)arg2 defaultButton:(NSString *)arg3 defaultUrl:(NSString *)arg4 alternateButton:(NSString *)arg5 alternatrUrl:(NSString *)arg6 completion:(void (^)(void))arg7;
- (void)tapToRadarWithTitle:(NSString *)arg1 message:(NSString *)arg2 context:(NSDictionary *)arg3 completion:(void (^)(void))arg4;
- (void)checkServerStorageForService:(NSString *)arg1 withCompletion:(void (^)(void))arg2;
- (void)setECVersion:(unsigned int)arg1 withCompletion:(void (^)(void))arg2;
- (void)currentECVersionWithBlock:(void (^)(unsigned int))arg1;
- (void)setForceKeyRoll:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (void)triggerKeyRollWithCompletion:(void (^)(NSArray *))arg1;
- (void)registeredIdentityTimestampsWithBlock:(void (^)(NSArray *))arg1;
- (void)oneToOneECCQuicktestEncryptionWithData:(NSData *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
@end

