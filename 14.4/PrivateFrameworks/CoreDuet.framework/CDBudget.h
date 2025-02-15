//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CDBudget : NSObject
{
    NSString *_name;
    long long _type;
    unsigned long long _integerId;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long integerId; // @synthesize integerId=_integerId;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)forecastEffectiveOnDate:(id)arg1 error:(id *)arg2;
- (id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(long long)arg3 withOptions:(unsigned long long)arg4 error:(id *)arg5;
- (id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(long long)arg3 error:(id *)arg4;
- (_Bool)deleteWithError:(id *)arg1;
- (long long)creditsRemainingWithError:(id *)arg1;
- (_Bool)compareValueTo:(long long)arg1 swapOnMatchWithValue:(long long)arg2 error:(id *)arg3;
- (_Bool)decrementByValue:(long long)arg1 error:(id *)arg2;
- (_Bool)incrementByValue:(long long)arg1 error:(id *)arg2;
- (id)initWithSession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id *)arg5;

@end

