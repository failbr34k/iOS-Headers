//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface NTKTimelineEntryModel : NSObject
{
    NSDate *_entryDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *entryDate; // @synthesize entryDate=_entryDate;
- (id)entryForComplicationFamily:(long long)arg1;
- (id)templateForComplicationFamily:(long long)arg1;

@end

