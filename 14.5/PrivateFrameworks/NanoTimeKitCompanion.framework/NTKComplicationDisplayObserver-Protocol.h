//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@protocol NTKComplicationDisplay;

@protocol NTKComplicationDisplayObserver <NSObject>
- (void)complicationDisplay:(id <NTKComplicationDisplay>)arg1 renderStatsWithTime:(double)arg2 cost:(double)arg3;
- (void)complicationDisplayNeedsResize:(id <NTKComplicationDisplay>)arg1;
@end

