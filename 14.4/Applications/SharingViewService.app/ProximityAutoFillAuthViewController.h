//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ProximityAutoFillBaseViewController.h"

@class PINEntryView, UIActivityIndicatorView, UILabel, UIView;

@interface ProximityAutoFillAuthViewController : ProximityAutoFillBaseViewController
{
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_infoLabel;
    PINEntryView *_pinEntryView;
    UILabel *_pinLabel1;
    UILabel *_pinLabel2;
    UILabel *_pinLabel3;
    UILabel *_pinLabel4;
    UIView *_pinWell1;
    UIView *_pinWell2;
    UIView *_pinWell3;
    UIView *_pinWell4;
    _Bool _viewBottomConstantValid;
    double _viewBottomConstant;
}

- (void).cxx_destruct;
- (void)showWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)_handlePINEntered:(id)arg1;
- (void)_handleKeyboardWillShow:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

