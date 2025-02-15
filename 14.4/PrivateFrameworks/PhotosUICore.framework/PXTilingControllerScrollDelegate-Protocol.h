//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXTilingController, PXTilingLayout, PXTilingScrollInfo;

@protocol PXTilingControllerScrollDelegate <NSObject>

@optional
- (PXTilingScrollInfo *)tilingController:(PXTilingController *)arg1 scrollInfoForLayout:(PXTilingLayout *)arg2;
- (struct CGPoint)tilingController:(PXTilingController *)arg1 targetVisibleOriginForLayout:(PXTilingLayout *)arg2 proposedVisibleOrigin:(struct CGPoint)arg3;
- (struct CGPoint)tilingController:(PXTilingController *)arg1 initialVisibleOriginForLayout:(PXTilingLayout *)arg2;
@end

