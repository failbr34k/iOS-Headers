//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UISlider;
@protocol WFTriggerPercentageSliderCellDelegate;

@interface WFTriggerPercentageSliderCell : UITableViewCell
{
    id <WFTriggerPercentageSliderCellDelegate> _delegate;
    UISlider *_slider;
    UILabel *_label;
    double _stepValue;
}

- (void).cxx_destruct;
@property(nonatomic) double stepValue; // @synthesize stepValue=_stepValue;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UISlider *slider; // @synthesize slider=_slider;
@property(nonatomic) __weak id <WFTriggerPercentageSliderCellDelegate> delegate; // @synthesize delegate=_delegate;
- (double)roundValue:(double)arg1 toNearestStep:(double)arg2;
@property(nonatomic) double sliderValue;
- (void)sliderValueChanged:(id)arg1;
- (void)configureWithInitialValue:(double)arg1 maximumValue:(double)arg2 minimumValue:(double)arg3 stepValue:(double)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

