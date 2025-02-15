//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WDTableViewSectionDelegate;

@interface WDTableViewSection : NSObject
{
    id <WDTableViewSectionDelegate> _delegate;
    unsigned long long _section;
}

@property(readonly, nonatomic) unsigned long long section; // @synthesize section=_section;
@property(readonly, nonatomic) id <WDTableViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)willSelectRow:(id)arg1;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (void)accessoryButtonTappedForRow:(unsigned long long)arg1;
- (double)heightForRow:(unsigned long long)arg1;
- (double)estimatedHeightForRow:(unsigned long long)arg1;
- (double)heightForFooter;
- (double)heightForHeader;
- (unsigned long long)numberOfRows;
- (id)titleForFooter;
- (id)viewForFooter:(id)arg1;
- (id)titleForHeader;
- (id)viewForHeader:(id)arg1;
- (void)reloadAnimated:(_Bool)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)viewWillAppear:(_Bool)arg1;
- (void)deactivate;
- (void)activate;
- (void)setUpWithTableViewController:(id)arg1;
- (id)initWithDelegate:(id)arg1 atSection:(unsigned long long)arg2;

@end

