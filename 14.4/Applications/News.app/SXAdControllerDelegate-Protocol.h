//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ADBannerView, NSError, NSString, SXAdController;

@protocol SXAdControllerDelegate <NSObject>

@optional
- (void)adController:(SXAdController *)arg1 componentWithIdentifier:(NSString *)arg2 didUnloadBannerView:(ADBannerView *)arg3 withError:(NSError *)arg4;
- (void)adController:(SXAdController *)arg1 componentWithIdentifier:(NSString *)arg2 didLoadBannerView:(ADBannerView *)arg3;
- (void)adController:(SXAdController *)arg1 componentWithIdentifier:(NSString *)arg2 failedToLoadBannerView:(ADBannerView *)arg3 error:(NSError *)arg4;
@end

