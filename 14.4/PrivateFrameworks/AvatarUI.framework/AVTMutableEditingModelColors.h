//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/AVTEditingModelColors.h>

@class NSMutableDictionary;

@interface AVTMutableEditingModelColors : AVTEditingModelColors
{
    NSMutableDictionary *_mutableStorage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *mutableStorage; // @synthesize mutableStorage=_mutableStorage;
- (void)setColor:(id)arg1 forSettingKind:(CDStruct_597dd055)arg2 identifier:(id)arg3;
- (id)initWithVariationStore:(id)arg1;
- (id)initWithStorage:(id)arg1 variationStore:(id)arg2;

@end

