//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@class SCRCMathExpression;

__attribute__((visibility("hidden")))
@interface SCRCMathLongDivisionExpression : SCRCMathArrayExpression
{
    SCRCMathExpression *_divisor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCRCMathExpression *divisor; // @synthesize divisor=_divisor;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)initWithDictionary:(id)arg1;

@end

