//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKit/SKOverlayConfiguration.h>

@class ASOOverlayAppClipConfiguration, NSString;

@interface SKOverlayAppClipConfiguration : SKOverlayConfiguration
{
}

- (id)additionalValueForKey:(id)arg1;
- (void)setAdditionalValue:(id)arg1 forKey:(id)arg2;
@property(nonatomic) long long position; // @dynamic position;
@property(retain, nonatomic) NSString *providerToken;
@property(retain, nonatomic) NSString *campaignToken; // @dynamic campaignToken;
- (id)initWithBacking:(id)arg1;
- (id)_init;
- (id)initWithPosition:(long long)arg1;

// Remaining properties
@property(readonly, retain, nonatomic) ASOOverlayAppClipConfiguration *_backing; // @dynamic _backing;

@end

