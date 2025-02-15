//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface GKImageContext : NSObject
{
    double _scale;
    struct CGContext *_CGContext;
    struct CGSize _size;
}

+ (id)imageFromRawPixelsAtURL:(id)arg1;
+ (id)imageDrawnWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (id)contextDrawnWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) struct CGContext *CGContext; // @synthesize CGContext=_CGContext;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (_Bool)writeRawPixelsToURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned int)arg3 data:(void *)arg4;

@end

