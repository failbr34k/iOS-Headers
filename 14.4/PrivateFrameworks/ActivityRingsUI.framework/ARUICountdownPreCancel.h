//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityRingsUI/ARUICountdownDefaultAnimation.h>

#import <ActivityRingsUI/ARUICountdownAnimation-Protocol.h>

__attribute__((visibility("hidden")))
@interface ARUICountdownPreCancel : ARUICountdownDefaultAnimation <ARUICountdownAnimation>
{
}

+ (id)identifier;
- (void)applyToCountdownView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)identifier;
- (_Bool)cancelable;
- (double)duration;
- (double)delay;

@end

