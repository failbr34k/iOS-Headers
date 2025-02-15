//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUINotificationInAppSettingsTableViewCellDelegate-Protocol.h>
#import <AppleMediaServicesUI/UITableViewDataSource-Protocol.h>

@class NSArray, NSString;
@protocol AMSUINotificationSettingsViewModelDelegate;

__attribute__((visibility("hidden")))
@interface AMSUINotificationSettingsViewModel : NSObject <AMSUINotificationInAppSettingsTableViewCellDelegate, UITableViewDataSource>
{
    _Bool _showAllowNotificationsButton;
    id <AMSUINotificationSettingsViewModelDelegate> _delegate;
    NSArray *_sections;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showAllowNotificationsButton; // @synthesize showAllowNotificationsButton=_showAllowNotificationsButton;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <AMSUINotificationSettingsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notificationInAppSettingsTableViewCellDidToggleValue:(id)arg1 forItem:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

