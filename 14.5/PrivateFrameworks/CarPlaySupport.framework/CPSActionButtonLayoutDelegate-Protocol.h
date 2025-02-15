//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/NSObject-Protocol.h>

@class CPSActionButton, UIColor, UIFont;

@protocol CPSActionButtonLayoutDelegate <NSObject>

@optional
- (void)configureButton:(CPSActionButton *)arg1;
- (UIColor *)buttonImageTintColor;
- (_Bool)buttonsShouldFill;
- (double)buttonRadius;
- (UIColor *)buttonBackgroundColor;
- (UIFont *)font;
- (struct CGSize)buttonGlyphSize;
- (struct CGSize)buttonSize;
@end

