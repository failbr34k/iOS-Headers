//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UINavigationBar, UIToolbar;
@protocol FRBarStyle, FRStatusBarStyler;

@interface FRBarStyler : NSObject
{
    _Bool _ignoreNavigationBarBackgroundOpacity;
    id <FRBarStyle> _appliedBarStyle;
    UINavigationBar *_navigationBar;
    UIToolbar *_toolbar;
    id <FRStatusBarStyler> _statusBarStyler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <FRStatusBarStyler> statusBarStyler; // @synthesize statusBarStyler=_statusBarStyler;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) _Bool ignoreNavigationBarBackgroundOpacity; // @synthesize ignoreNavigationBarBackgroundOpacity=_ignoreNavigationBarBackgroundOpacity;
@property(retain, nonatomic) id <FRBarStyle> appliedBarStyle; // @synthesize appliedBarStyle=_appliedBarStyle;
- (id)_visualEffectsForStandardNavigationBarWithBarStyle:(id)arg1;
- (void)applyBarButtonTintColor;
- (void)styleToolbarWithBarStyle:(id)arg1;
- (void)styleNavigationStyleWithBarStyle:(id)arg1;
- (void)applyStyling:(id)arg1;
- (id)initWithNavigationBar:(id)arg1 toolbar:(id)arg2 statusBarStyler:(id)arg3;
- (id)init;

@end

