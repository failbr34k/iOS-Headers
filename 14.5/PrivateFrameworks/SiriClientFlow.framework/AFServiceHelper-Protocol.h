//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriClientFlow/NSObject-Protocol.h>

@class AFEndpointInfo, AFInstanceInfo, AFPeerInfo, AFSpeechInfo, NSBundle, NSSet, NSString, NSURL, SABaseCommand;

@protocol AFServiceHelper <NSObject>
- (void)prepareForAudioHandoffFailedWithCompletion:(void (^)(void))arg1;
- (void)prepareForAudioHandoffWithCompletion:(void (^)(_Bool))arg1;
- (AFPeerInfo *)peerInfoForCurrentCommand;
- (_Bool)isTimeoutSuspended;
- (void)handleCommand:(SABaseCommand *)arg1 completion:(void (^)(SABaseCommand *, NSError *))arg2;
- (_Bool)isDeviceInCarDND;
- (_Bool)isDeviceInStarkMode;
- (_Bool)isDeviceLockedWithPasscode;
- (NSString *)assistantLocalizedStringForKey:(NSString *)arg1 table:(NSString *)arg2 bundle:(NSBundle *)arg3;
- (void)dismissAssistant;
- (_Bool)openSensitiveURL:(NSURL *)arg1;

@optional
- (AFSpeechInfo *)speechInfo;
- (AFInstanceInfo *)instanceInfo;
- (AFEndpointInfo *)endpointInfo;
- (void)fetchContextsForKeys:(NSSet *)arg1 includesNearbyDevices:(_Bool)arg2 completion:(void (^)(NSArray *))arg3;
@end

