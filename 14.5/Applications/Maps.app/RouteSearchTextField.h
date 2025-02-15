//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

#import "MapsTheming-Protocol.h"

@class NSString, UITextRange;
@protocol RouteSearchTextFieldDelegate;

__attribute__((visibility("hidden")))
@interface RouteSearchTextField : UITextField <MapsTheming>
{
    _Bool _handlingTouch;
    _Bool _didBecomeFirstResponderWhileHandlingTouch;
    _Bool _hasSelectedTextRangeToSetOnResuming;
    UITextRange *_selectedTextRangeToSetOnResuming;
    UITextRange *_selectedTextRangeWhilePaused;
    _Bool _behavesAsAtom;
    _Bool _pauseSelectionUpdates;
    CDUnknownBlockType _textColorProvider;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isPausingSelectionUpdates) _Bool pauseSelectionUpdates; // @synthesize pauseSelectionUpdates=_pauseSelectionUpdates;
@property(copy, nonatomic) CDUnknownBlockType textColorProvider; // @synthesize textColorProvider=_textColorProvider;
@property(nonatomic) _Bool behavesAsAtom; // @synthesize behavesAsAtom=_behavesAsAtom;
- (void)_updateTextColors;
- (void)updateTheme;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)setSelectedTextRange:(id)arg1;
@property(readonly, nonatomic) UITextRange *selectedTextRangeFrozenIfPaused;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (int)textSelectionBehavior;
- (int)textLoupeVisibility;
- (id)selectionHighlightColor;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (double)_textMinimumTrailingMargin;
- (double)_textMinimumLeadingMargin;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)_hoverGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <RouteSearchTextFieldDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

