//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SeymourUI/NSObject-Protocol.h>

@class NSString, UIImage;
@protocol UINamedLayerContentProvider;

@protocol UINamedLayerImage <NSObject>
@property(readonly, nonatomic) int blendMode;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSString *name;

@optional
@property(readonly, nonatomic) id <UINamedLayerContentProvider> contentProvider;
@property(nonatomic) _Bool fixedFrame;
- (UIImage *)imageObj;
@end

