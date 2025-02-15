//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class NSArray, NSDateComponents, NSString, UIDatePicker;
@protocol HUInlineDatePickerCellDelegate;

@interface HUInlineDatePickerCell : UITableViewCell <HUDisableableCellProtocol>
{
    _Bool _disabled;
    _Bool _hideTitleLabel;
    id <HUInlineDatePickerCellDelegate> _delegate;
    NSString *_title;
    double _leftMargin;
    UIDatePicker *_datePicker;
    NSArray *_allConstraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *allConstraints; // @synthesize allConstraints=_allConstraints;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) _Bool hideTitleLabel; // @synthesize hideTitleLabel=_hideTitleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <HUInlineDatePickerCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
- (void)_valueChanged:(id)arg1;
@property(retain, nonatomic) NSDateComponents *timeComponents;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

