//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

#import <CoreImage/_CIFilterProperties-Protocol.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIVibrance : CIFilter <_CIFilterProperties>
{
    CIImage *inputImage;
    NSNumber *inputAmount;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (id)outputImage;
- (id)_kernelPos;
- (id)_kernelNeg;
- (_Bool)_isIdentity;

@end

