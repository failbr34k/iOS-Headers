//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VFX/MTLDrawable-Protocol.h>

@class CAMetalLayer;
@protocol MTLTexture;

@protocol CAMetalDrawable <MTLDrawable>
@property(nonatomic, readonly) CAMetalLayer *layer;
@property(nonatomic, readonly) id <MTLTexture> texture;
@end

