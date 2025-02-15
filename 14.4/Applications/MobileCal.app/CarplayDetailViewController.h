//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DetailTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class EKEvent, NSMutableArray, NSString, UITableView;

@interface CarplayDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, DetailTableViewCellDelegate>
{
    EKEvent *_event;
    _Bool _showDayName;
    UITableView *_tableView;
    NSMutableArray *_actionIdentifiers;
}

- (void).cxx_destruct;
- (void)pushViewController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_donateUserActivity:(id)arg1;
- (void)updateViewWithEvent;
- (void)eventStoreChanged:(id)arg1;
- (_Bool)eventCanDialIn;
- (_Bool)organizerCanBeMessaged;
- (void)createAndActivateLayoutConstraints;
- (void)_initActionIdentifiers;
- (id)_createTableView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithEvent:(id)arg1 showDayName:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

