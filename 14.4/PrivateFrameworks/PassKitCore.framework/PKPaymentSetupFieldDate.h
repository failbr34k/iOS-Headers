//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupFieldText.h>

@class NSCalendar, NSDate, NSDateFormatter, NSLocale, NSString;

@interface PKPaymentSetupFieldDate : PKPaymentSetupFieldText
{
    NSDateFormatter *_displayDateFormatter;
    _Bool _showsDay;
    _Bool _showsMonth;
    _Bool _showsYear;
    NSString *_submissionFormat;
    NSCalendar *_calendar;
    NSLocale *_locale;
    NSDate *_defaultDate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *defaultDate; // @synthesize defaultDate=_defaultDate;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(copy, nonatomic) NSString *submissionFormat; // @synthesize submissionFormat=_submissionFormat;
@property(nonatomic) _Bool showsYear; // @synthesize showsYear=_showsYear;
@property(nonatomic) _Bool showsMonth; // @synthesize showsMonth=_showsMonth;
@property(nonatomic) _Bool showsDay; // @synthesize showsDay=_showsDay;
- (unsigned long long)fieldType;
- (void)_commonUpdate;
- (void)updateWithConfiguration:(id)arg1;
- (_Bool)submissionStringMeetsAllRequirements;
- (id)_defaultValueAsDateForCurrentLocale;
- (id)_submissionStringForValue:(id)arg1;
- (id)displayString;
@property(copy, nonatomic) NSDate *currentValue; // @dynamic currentValue;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;

@end

