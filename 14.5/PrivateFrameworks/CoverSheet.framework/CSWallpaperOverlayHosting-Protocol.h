//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/NSObject-Protocol.h>

@class UIView;
@protocol SBUIWallpaperOverlay;

@protocol CSWallpaperOverlayHosting <NSObject>
- (UIView<SBUIWallpaperOverlay> *)relinquishHostingOfWallpaperOverlay;
- (void)startHostingWallpaperOverlay:(UIView<SBUIWallpaperOverlay> *)arg1;
@end

