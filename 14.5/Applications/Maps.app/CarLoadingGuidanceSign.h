//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CarSpinnerGuidanceSign.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface CarLoadingGuidanceSign : CarSpinnerGuidanceSign
{
    NSTimer *_timedOutTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *timedOutTimer; // @synthesize timedOutTimer=_timedOutTimer;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithDestination:(unsigned long long)arg1;

@end

