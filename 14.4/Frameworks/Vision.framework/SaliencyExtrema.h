//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SaliencyExtrema : NSObject
{
    struct CGPoint _extrema[4];
    float _extremeValues[4];
}

- (struct CGRect)computeRectFromExtremaUsingThreshold:(float)arg1 vImage:(struct vImage_Buffer)arg2;
- (void)updateExtrema:(float)arg1 x:(int)arg2 y:(int)arg3;
- (id)init;

@end

