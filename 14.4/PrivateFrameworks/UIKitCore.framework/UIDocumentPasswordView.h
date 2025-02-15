//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UITextFieldDelegate-Protocol.h>

@class NSObject, NSString, UIDocumentPasswordField, UILabel, UITextField;
@protocol UIDocumentPasswordViewDelegate;

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate>
{
    UIDocumentPasswordField *_passwordTextField;
    UILabel *_label;
    NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;
}

@property(readonly, nonatomic) UITextField *passwordField; // @synthesize passwordField=_passwordTextField;
@property(nonatomic) NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate; // @synthesize passwordDelegate;
- (double)_textFieldWidth;
- (double)_labelHorizontalOffset;
- (id)_labelTextColor;
- (id)_labelFont;
- (void)_passwordEntered:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)_canDrawContent;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithDocumentName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

