//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPTableCollapsableCheckmarkSection.h"

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface RAPTableWhichLineSection : RAPTableCollapsableCheckmarkSection
{
    double _maxShieldWidth;
    NSMapTable *_shields;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *shields; // @synthesize shields=_shields;
@property(nonatomic) double maxShieldWidth; // @synthesize maxShieldWidth=_maxShieldWidth;
- (void)didSelectCellForRowAtIndex:(long long)arg1 tableIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forValue:(id)arg2;
- (void)setValues:(id)arg1;
- (Class)defaultCellClass;
- (id)initWithOwner:(id)arg1 selectableLines:(id)arg2 selectedValue:(id)arg3 selection:(CDUnknownBlockType)arg4;

@end

