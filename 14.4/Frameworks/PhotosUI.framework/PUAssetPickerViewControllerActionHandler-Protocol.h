//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PHAsset, PHAssetCollection, UIViewController;

@protocol PUAssetPickerViewControllerActionHandler <NSObject>
- (void)viewController:(UIViewController *)arg1 didSelectAssetCollection:(PHAssetCollection *)arg2;
- (_Bool)viewController:(UIViewController *)arg1 didSelectAsset:(PHAsset *)arg2;
@end

