//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCVideoRuleCollections.h>

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreen : VCVideoRuleCollections
{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;
- (_Bool)setupMacDecodingOnlyRules;
- (_Bool)setupH264Rules;
- (void)selectPreferredRule:(id)arg1 screenSize:(struct CGSize)arg2;
- (void)initSupportedPayloads;
- (id)initForMacDecodingOnly;
- (id)initWithHardwareSettings:(id)arg1;

@end

