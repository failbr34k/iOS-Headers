//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface PSDIDSServiceStatisticsCollection : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_statistics;
    NSString *_channelName;
}

+ (id)knownChannelNames;
+ (id)statisticsCollectionWithChannelName:(id)arg1 statisticsDictionary:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
- (id)description;
- (id)statisticsCollectionByDiffingStatisticsCollection:(id)arg1;
- (void)addServiceStatistics:(id)arg1;
- (id)statisticsForServiceName:(id)arg1;
- (void)enumerateServiceStatisticsWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

