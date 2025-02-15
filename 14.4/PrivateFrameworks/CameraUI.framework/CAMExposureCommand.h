//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMExposureCommand : CAMCaptureCommand
{
    long long __exposureMode;
    struct CGPoint __exposurePointOfInterest;
}

@property(readonly, nonatomic) struct CGPoint _exposurePointOfInterest; // @synthesize _exposurePointOfInterest=__exposurePointOfInterest;
@property(readonly, nonatomic) long long _exposureMode; // @synthesize _exposureMode=__exposureMode;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExposureMode:(long long)arg1 atPointOfInterest:(struct CGPoint)arg2;
- (id)initWithExposureMode:(long long)arg1;

@end

