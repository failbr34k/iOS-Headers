//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditItemDelegate-Protocol.h>

@class EKEventAutocompleteResultsEditItem, EKUIAutocompleteSearchResult;

@protocol EKEventAutocompleteResultsEditItemDelegate <EKCalendarItemEditItemDelegate>

@optional
- (void)autocompleteResultsEditItem:(EKEventAutocompleteResultsEditItem *)arg1 resultSelected:(EKUIAutocompleteSearchResult *)arg2;
- (void)autocompleteResultsEditItemDidHideResults:(EKEventAutocompleteResultsEditItem *)arg1;
- (void)autocompleteResultsEditItemDidShowResults:(EKEventAutocompleteResultsEditItem *)arg1;
@end

