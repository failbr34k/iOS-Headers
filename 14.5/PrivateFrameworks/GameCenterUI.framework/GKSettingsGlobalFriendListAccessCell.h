//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSwitchTableCell.h>

@class PSSpecifier;

@interface GKSettingsGlobalFriendListAccessCell : PSSwitchTableCell
{
    PSSpecifier *_specfier;
}

- (void).cxx_destruct;
@property(nonatomic) __weak PSSpecifier *specfier; // @synthesize specfier=_specfier;
- (_Bool)globalFriendListAccess;
- (_Bool)canReload;
- (void)controlChanged:(id)arg1;
- (id)getSwitch;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end

