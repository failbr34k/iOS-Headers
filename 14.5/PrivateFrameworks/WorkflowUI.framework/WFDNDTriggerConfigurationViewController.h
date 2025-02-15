//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFTriggerConfigurationViewController.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>
#import <WorkflowUI/WFTriggerMultiSelectCellDelegate-Protocol.h>

@class NSArray, NSString, UITableView;

@interface WFDNDTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTriggerMultiSelectCellDelegate>
{
    UITableView *_tableView;
    NSArray *_sections;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)cell:(id)arg1 didSelectOptionWithLeftViewSelected:(_Bool)arg2 rightViewSelected:(_Bool)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)updateUI;
- (id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

