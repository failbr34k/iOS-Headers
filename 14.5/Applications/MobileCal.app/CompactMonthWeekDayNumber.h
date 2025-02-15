//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, CompactMonthWeekDayOverlay, CompactMonthWeekTodayCircle, CompactMonthWeekView, EKCalendarDate, NSCalendar;

@interface CompactMonthWeekDayNumber : NSObject
{
    CALayer *_layer;
    double _offsetX;
    CompactMonthWeekView *_weekView;
    EKCalendarDate *_calendarDate;
    NSCalendar *_calendar;
    CompactMonthWeekTodayCircle *_attachedTodayCircle;
    CompactMonthWeekDayOverlay *_overlay;
    CALayer *_eventMarker;
    CALayer *_secondaryEventMarker;
    double _fontSize;
    double _overlayFontSize;
    struct CGRect _frame;
}

+ (id)dayNumberFontForSize:(double)arg1;
+ (id)_generateImageWithString:(id)arg1 color:(id)arg2 fontSize:(double)arg3;
+ (id)_standardLabelForFontSize:(double)arg1;
+ (double)baselineOffsetFromTopOfLayerForFontSize:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) double overlayFontSize; // @synthesize overlayFontSize=_overlayFontSize;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) CALayer *secondaryEventMarker; // @synthesize secondaryEventMarker=_secondaryEventMarker;
@property(retain, nonatomic) CALayer *eventMarker; // @synthesize eventMarker=_eventMarker;
@property(retain, nonatomic) CompactMonthWeekDayOverlay *overlay; // @synthesize overlay=_overlay;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) CompactMonthWeekTodayCircle *attachedTodayCircle; // @synthesize attachedTodayCircle=_attachedTodayCircle;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) EKCalendarDate *calendarDate; // @synthesize calendarDate=_calendarDate;
- (id)_weekendImageForDayNumberString:(id)arg1;
- (id)_weekdayImageForDayNumberString:(id)arg1;
- (_Bool)_calendarDateIsOnWeekend;
@property(readonly, nonatomic) _Bool representsActualDate;
- (void)updateDayNumber;
@property(readonly, nonatomic) double offsetX;
@property(readonly, nonatomic) CALayer *layer;
- (void)hideOverlayAndNumber:(_Bool)arg1;
- (void)updateOverlay;
- (id)description;
- (id)init;
- (id)initWithWeekView:(id)arg1 andCalendar:(id)arg2;

@end

