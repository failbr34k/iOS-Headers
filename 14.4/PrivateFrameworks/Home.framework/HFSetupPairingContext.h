//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMSetupAccessoryDescription;
@protocol HMSetupRemoteService;

@interface HFSetupPairingContext : NSObject
{
    _Bool _isTrustedOrigin;
    HMSetupAccessoryDescription *_setupAccessoryDescription;
    id <HMSetupRemoteService> _setupRemoteService;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTrustedOrigin; // @synthesize isTrustedOrigin=_isTrustedOrigin;
@property(nonatomic) __weak id <HMSetupRemoteService> setupRemoteService; // @synthesize setupRemoteService=_setupRemoteService;
@property(retain, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription; // @synthesize setupAccessoryDescription=_setupAccessoryDescription;
- (id)init;
- (id)initWithSetupAccessoryDescription:(id)arg1 setupRemoteService:(id)arg2 isTrustedOrigin:(_Bool)arg3;

@end

