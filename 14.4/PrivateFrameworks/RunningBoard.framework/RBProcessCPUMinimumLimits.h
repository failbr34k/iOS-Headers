//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RBProcessCPUMinimumLimits : NSObject
{
    unsigned long long _percentage;
    unsigned long long _duration;
}

@property(readonly, nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned long long percentage; // @synthesize percentage=_percentage;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)unionLimit:(id)arg1;
- (id)initWithPercentage:(unsigned long long)arg1 duration:(unsigned long long)arg2;

@end

