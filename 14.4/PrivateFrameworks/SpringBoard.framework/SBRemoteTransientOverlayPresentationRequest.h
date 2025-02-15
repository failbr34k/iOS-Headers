//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NSCopying-Protocol.h>

@class SBSRemoteAlertPresentationTarget, SBTransientOverlayViewController;

@interface SBRemoteTransientOverlayPresentationRequest : NSObject <NSCopying>
{
    _Bool _animated;
    _Bool _isScreenshotMarkup;
    _Bool _shouldDismissSiri;
    SBTransientOverlayViewController *_viewController;
    SBSRemoteAlertPresentationTarget *_presentationTarget;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldDismissSiri; // @synthesize shouldDismissSiri=_shouldDismissSiri;
@property(nonatomic) _Bool isScreenshotMarkup; // @synthesize isScreenshotMarkup=_isScreenshotMarkup;
@property(retain, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget; // @synthesize presentationTarget=_presentationTarget;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) SBTransientOverlayViewController *viewController; // @synthesize viewController=_viewController;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewController:(id)arg1;

@end

