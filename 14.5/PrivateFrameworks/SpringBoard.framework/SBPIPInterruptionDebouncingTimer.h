//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/BSTimer.h>

@class SBPIPInterruptionAssertion;

@interface SBPIPInterruptionDebouncingTimer : BSTimer
{
    SBPIPInterruptionAssertion *_debouncedAssertion;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SBPIPInterruptionAssertion *debouncedAssertion; // @synthesize debouncedAssertion=_debouncedAssertion;

@end

