//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MXMMachUtils : NSObject
{
}

+ (id)_processNameWithBundleIdentifier:(id)arg1;
+ (unsigned long long)_absoluteTimeWithNanoseconds:(double)arg1;
+ (double)_nanosecondsWithAbsoluteTime:(unsigned long long)arg1;
+ (struct mach_timebase_info *)_timebase;

@end

