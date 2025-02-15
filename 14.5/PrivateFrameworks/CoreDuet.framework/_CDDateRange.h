//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDDateRangeProtocol-Protocol.h>

@class NSDate;

@interface _CDDateRange : NSObject <_CDDateRangeProtocol>
{
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (id)periodWithStart:(id)arg1 end:(id)arg2;
+ (id)periodWithEnd:(id)arg1 duration:(double)arg2;
+ (id)periodWithStart:(id)arg1 duration:(double)arg2;
- (void).cxx_destruct;
@property(readonly) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)description;
- (_Bool)contains:(id)arg1;
@property(readonly) double duration;
- (id)initWithStart:(id)arg1 andEnd:(id)arg2;

@end

