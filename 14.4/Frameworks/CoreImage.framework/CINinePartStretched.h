//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CINinePartStretched : CIFilter
{
    CIImage *inputImage;
    CIVector *inputBreakpoint0;
    CIVector *inputBreakpoint1;
    CIVector *inputGrowAmount;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIVector *inputGrowAmount; // @synthesize inputGrowAmount;
@property(retain, nonatomic) CIVector *inputBreakpoint1; // @synthesize inputBreakpoint1;
@property(retain, nonatomic) CIVector *inputBreakpoint0; // @synthesize inputBreakpoint0;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;

@end

