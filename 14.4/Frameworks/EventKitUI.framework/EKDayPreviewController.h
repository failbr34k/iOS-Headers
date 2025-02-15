//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/EKDayViewDataSource-Protocol.h>
#import <EventKitUI/EKEditItemViewControllerProtocol-Protocol.h>

@class EKDayView, EKEvent, NSArray, NSDate, NSString, UIView;
@protocol EKEditItemViewControllerDelegate;

@interface EKDayPreviewController : UIViewController <EKDayViewDataSource, EKEditItemViewControllerProtocol>
{
    _Bool _firstshow;
    _Bool _userHasTappedToExpand;
    _Bool _isAnimating;
    NSArray *_cachedTimedEvents;
    UIView *_roundedView;
    EKDayView *_dayView;
    NSDate *_date;
    NSDate *_originalEventStartDate;
    NSDate *_originalEventEndDate;
    _Bool _hasOverriddenEventDates;
    NSDate *_overriddenEventStartDate;
    NSDate *_overriddenEventEndDate;
    long long _overriddenParticipantStatus;
    _Bool _hasOverriddenStatus;
    _Bool _requireScrollPositionCorrection;
    _Bool _hidesAllDayEvents;
    _Bool _respectsSelectedCalendarsFilter;
    unsigned long long _style;
    UIViewController *_hostingViewController;
    EKEvent *_event;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(nonatomic) _Bool respectsSelectedCalendarsFilter; // @synthesize respectsSelectedCalendarsFilter=_respectsSelectedCalendarsFilter;
@property(nonatomic) _Bool hidesAllDayEvents; // @synthesize hidesAllDayEvents=_hidesAllDayEvents;
@property(nonatomic) __weak UIViewController *hostingViewController; // @synthesize hostingViewController=_hostingViewController;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) long long overriddenParticipantStatus; // @synthesize overriddenParticipantStatus=_overriddenParticipantStatus;
- (void)renderPressHighlight:(_Bool)arg1;
- (void)toggleExpandedState;
- (_Bool)_shouldShowAllVisibleEvents;
- (struct CGSize)preferredContentSize;
- (double)_dayViewHeight;
- (struct _NSRange)_displayedHoursRange;
- (id)_hourMaskForEvents:(id)arg1;
- (id)_dateForFirstHourMarker;
- (_Bool)_eventOccursOnThisDay:(id)arg1;
- (void)_scrollDayViewToCorrectOffsetAnimated:(_Bool)arg1;
- (void)_setNewVisibleHourLabels;
- (id)_anchorEvent;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (id)_selectedCalendars;
- (id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;
- (void)_setupAutoLayout;
- (void)_setupDayView;
- (void)reload;
- (void)reloadWithNewDate:(id)arg1 overriddenEventStartDate:(id)arg2 overriddenEventEndDate:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithDate:(id)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;
@property(nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool presentModally;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useCustomBackButton;

@end

