//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPZone.h>

__attribute__((visibility("hidden")))
@interface CPRotation : CPZone
{
    double rotationAngle;
}

- (struct CGRect)renderedBounds;
- (struct CGRect)bounds;
- (double)rotationAngle;
- (void)setRotationAngle:(double)arg1;
- (void)accept:(id)arg1;
- (id)init;

@end

