//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BrightnessSystemClient, NSHashTable;

@interface PKBacklightController : NSObject
{
    BrightnessSystemClient *_brightnessClient;
    _Bool _foregroundActive;
    NSHashTable *_requesters;
    NSHashTable *_allowers;
    _Bool _isBacklightRamped;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateBacklightNits:(float)arg1 period:(double)arg2 disableWhitePointShift:(_Bool)arg3;
- (void)_changeBacklightMinimumEnabledIfNecessary;
- (void)endRequestingBacklightRamping:(id)arg1;
- (void)beginRequestingBacklightRamping:(id)arg1;
- (void)endAllowingBacklightRamping:(id)arg1;
- (void)beginAllowingBacklightRamping:(id)arg1;
- (id)init;

@end

