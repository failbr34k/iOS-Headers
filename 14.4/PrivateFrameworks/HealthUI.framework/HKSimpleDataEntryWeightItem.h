//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKSimpleDataEntryItem.h>

#import <HealthUI/UIPickerViewDataSource-Protocol.h>
#import <HealthUI/UIPickerViewDelegate-Protocol.h>

@class HKSimpleDataEntryPlainTextCell, NSNumber, NSString, UIPickerView;

@interface HKSimpleDataEntryWeightItem : HKSimpleDataEntryItem <UIPickerViewDelegate, UIPickerViewDataSource>
{
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    UIPickerView *_picker;
    long long _localWeightUnit;
    long long _numberOfRowsForPicker;
    NSNumber *_defaultValue;
    NSNumber *_kilogramValue;
}

- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)_setWeightValueForSelectedRow:(long long)arg1;
- (void)localeDidChange:(id)arg1;
- (void)_updateLocaleDependentValues;
- (double)_defaultKilogramValue;
- (void)_valueDidChange;
- (void)_setTextForInputTextField:(id)arg1;
- (void)_setupPlaceholder;
- (void)beginEditing;
- (id)_formattedValueForDisplay;
- (void)updateCellDisplay;
- (id)cell;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 weightInKg:(id)arg3 defaultWeightInKg:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

