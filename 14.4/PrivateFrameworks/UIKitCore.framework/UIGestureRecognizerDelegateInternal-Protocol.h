//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizerDelegatePrivate-Protocol.h>

@class UIGestureRecognizer;

@protocol UIGestureRecognizerDelegateInternal <UIGestureRecognizerDelegatePrivate>

@optional
- (_Bool)gestureRecognizer:(UIGestureRecognizer *)arg1 canBePreventedByGestureRecognizer:(UIGestureRecognizer *)arg2;
- (_Bool)gestureRecognizer:(UIGestureRecognizer *)arg1 canPreventGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)_gestureRecognizerFailed:(UIGestureRecognizer *)arg1;
@end

