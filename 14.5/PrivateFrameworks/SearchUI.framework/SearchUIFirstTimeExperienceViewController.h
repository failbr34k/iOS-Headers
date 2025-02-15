//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SearchUI/UITextViewDelegate-Protocol.h>

@class NSString;
@protocol SearchUIFirstTimeExperienceDelegate;

@interface SearchUIFirstTimeExperienceViewController : UIViewController <UITextViewDelegate>
{
    id <SearchUIFirstTimeExperienceDelegate> _delegate;
    unsigned long long _supportedDomains;
    NSString *_explanationText;
    NSString *_learnMoreText;
    NSString *_continueButtonTitle;
    NSString *_bundleIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *continueButtonTitle; // @synthesize continueButtonTitle=_continueButtonTitle;
@property(retain, nonatomic) NSString *learnMoreText; // @synthesize learnMoreText=_learnMoreText;
@property(retain, nonatomic) NSString *explanationText; // @synthesize explanationText=_explanationText;
@property(nonatomic) unsigned long long supportedDomains; // @synthesize supportedDomains=_supportedDomains;
@property(nonatomic) __weak id <SearchUIFirstTimeExperienceDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;
- (void)showPrivacyView;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)continueButtonPressed;
- (void)makeViews;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithSupportedDomains:(unsigned long long)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4;
- (id)initWithStyle:(unsigned long long)arg1 supportedDomains:(unsigned long long)arg2 explanationText:(id)arg3 learnMoreText:(id)arg4 continueButtonTitle:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

