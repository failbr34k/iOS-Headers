//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUStructuredPageViewController.h>

@class SUButtonAccessoryView;

@interface SUReviewsListingViewController : SUStructuredPageViewController
{
    SUButtonAccessoryView *_accessoryView;
}

- (void)_reloadHeaderView;
- (id)_headerItem;
- (_Bool)_canWriteReview;
- (id)_accessoryView;
- (void)_writeAReview:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)newTermsAndConditionsFooter;
- (void)reloadForChangedRowCount:(long long)arg1;
- (void)reloadData;
- (void)loadView;
- (void)dealloc;

@end

