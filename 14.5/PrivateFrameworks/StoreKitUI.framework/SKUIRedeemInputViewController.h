//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIRedeemStepViewController.h>

#import <StoreKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, SKUIRedeemITunesPassLockup, SKUIRedeemTextField, UIBarButtonItem, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIRedeemInputViewController : SKUIRedeemStepViewController <UITextFieldDelegate>
{
    long long _category;
    SKUIRedeemTextField *_field;
    UIImageView *_imageView;
    NSString *_initialCode;
    SKUIRedeemITunesPassLockup *_passbookLockup;
    UIBarButtonItem *_redeemButton;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *initialCode; // @synthesize initialCode=_initialCode;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (void)_toggleActivityIndicatorBarButtonItem:(_Bool)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1;
- (void)_termsButtonAction:(id)arg1;
- (void)_redeemAction:(id)arg1;
- (void)_passbookLockupAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_textFieldTextDidChange:(id)arg1;
- (void)_redeemConfigurationImagesDidLoad:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithRedeemCategory:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

