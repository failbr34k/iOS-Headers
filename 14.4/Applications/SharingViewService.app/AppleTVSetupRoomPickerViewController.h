//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

@class NSArray, UIActivityIndicatorView, UIButton, UILabel, UIPickerView, UIView;

@interface AppleTVSetupRoomPickerViewController : SVSBaseViewController
{
    UILabel *_titleLabel;
    UIPickerView *_roomPickerView;
    UIButton *_chooseButton;
    _Bool _roomChosen;
    UIView *_progressView;
    UIActivityIndicatorView *_progressSpinner;
    UILabel *_progressLabel;
    long long _firstSuggestedIndex;
    NSArray *_rooms;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *rooms; // @synthesize rooms=_rooms;
@property(nonatomic) long long firstSuggestedIndex; // @synthesize firstSuggestedIndex=_firstSuggestedIndex;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)handleChooseButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

