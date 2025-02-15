//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CARSettingsCollectionPanel.h"

@class CARDebugCollectionConfig, CARSettingsCellSpecifier, NSArray;

@interface CARDebugSettingsCollectionPanel : CARSettingsCollectionPanel
{
    CARSettingsCellSpecifier *_cellSpecifier;
    NSArray *_colors;
    CARDebugCollectionConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CARDebugCollectionConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (struct UIEdgeInsets)sectionInset;
- (unsigned long long)numberOfRows;
- (unsigned long long)numberOfColumns;
- (id)cellSpecifiers;
- (void)_refreshConfig;
- (void)invalidate;
- (id)initWithPanelController:(id)arg1;
- (id)cellSpecifier;

@end

