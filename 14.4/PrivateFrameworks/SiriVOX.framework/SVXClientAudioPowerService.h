//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/AFAudioPowerUpdaterDelegate-Protocol.h>
#import <SiriVOX/SVXClientAudioPowerServicing-Protocol.h>
#import <SiriVOX/SVXClientServiceConsuming-Protocol.h>

@class AFAudioPowerUpdater, NSString;
@protocol AFAudioPowerProviding, SVXClientAudioPowerServiceDelegate, SVXClientServiceProviding, SVXPerforming;

__attribute__((visibility("hidden")))
@interface SVXClientAudioPowerService : NSObject <AFAudioPowerUpdaterDelegate, SVXClientServiceConsuming, SVXClientAudioPowerServicing>
{
    id <SVXPerforming> _performer;
    long long _type;
    id <SVXClientServiceProviding> _clientServiceProvider;
    _Bool _wantsUpdate;
    long long _frequency;
    id <AFAudioPowerProviding> _provider;
    AFAudioPowerUpdater *_updater;
    id <SVXClientAudioPowerServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SVXClientAudioPowerServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_destroyUpdater;
- (void)_createUpdater;
- (void)_handleDidEndUpdateAudioPower;
- (void)_handleWillBeginUpdateAudioPowerWithProvider:(id)arg1;
- (void)_endUpdate;
- (void)_beginUpdateWithFrequency:(long long)arg1;
- (void)audioPowerUpdaterDidUpdate:(id)arg1 averagePower:(float)arg2 peakPower:(float)arg3;
- (void)endUpdate;
- (void)beginUpdateWithFrequency:(long long)arg1;
- (void)clientServiceDidChange;
- (id)initWithClientServiceProvider:(id)arg1 performer:(id)arg2;
- (void)handleDidEndUpdateAudioPower;
- (void)handleWillBeginUpdateAudioPowerWithProvider:(id)arg1;
- (id)initWithType:(long long)arg1 clientServiceProvider:(id)arg2 performer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

