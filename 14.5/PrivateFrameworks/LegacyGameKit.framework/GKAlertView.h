//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertView.h>

@class UIView;

@interface GKAlertView : UIAlertView
{
    UIView *_clipView;
    UIView *_contentView;
}

+ (struct CGSize)preferredContentViewSize;
+ (void)initialize;
- (void)setContentView:(id)arg1 animated:(_Bool)arg2;
- (id)contentView;
- (void)_replaceContentView:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_canDrawContent;
- (void)layoutAnimated:(_Bool)arg1 withDuration:(double)arg2;
- (void)layoutAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)initAlertView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

@end

