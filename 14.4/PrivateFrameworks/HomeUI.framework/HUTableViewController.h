//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <HomeUI/HUResizableCellDelegate-Protocol.h>

@class NSHashTable, NSMapTable, NSString;

@interface HUTableViewController : UITableViewController <HUResizableCellDelegate>
{
    _Bool _sectionContentInsetFollowsLayoutMargins;
    _Bool _viewLayingOut;
    NSHashTable *_childViewControllersAtViewWillAppearTime;
    NSHashTable *_childViewControllersAtViewWillDisappearTime;
    NSMapTable *_installedChildViewControllersKeyedByCell;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isViewLayingOut) _Bool viewLayingOut; // @synthesize viewLayingOut=_viewLayingOut;
@property(retain, nonatomic) NSMapTable *installedChildViewControllersKeyedByCell; // @synthesize installedChildViewControllersKeyedByCell=_installedChildViewControllersKeyedByCell;
@property(retain, nonatomic) NSHashTable *childViewControllersAtViewWillDisappearTime; // @synthesize childViewControllersAtViewWillDisappearTime=_childViewControllersAtViewWillDisappearTime;
@property(retain, nonatomic) NSHashTable *childViewControllersAtViewWillAppearTime; // @synthesize childViewControllersAtViewWillAppearTime=_childViewControllersAtViewWillAppearTime;
@property(nonatomic) _Bool sectionContentInsetFollowsLayoutMargins; // @synthesize sectionContentInsetFollowsLayoutMargins=_sectionContentInsetFollowsLayoutMargins;
- (void)didUpdateRequiredHeightForCell:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)contentSizeCategoryDidChange;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

