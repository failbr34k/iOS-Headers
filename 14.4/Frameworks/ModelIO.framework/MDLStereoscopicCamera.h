//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLCamera.h>

@interface MDLStereoscopicCamera : MDLCamera
{
    float _interPupillaryDistance;
    float _leftVergence;
    float _rightVergence;
    float _overlap;
}

@property(nonatomic) float overlap; // @synthesize overlap=_overlap;
@property(nonatomic) float rightVergence; // @synthesize rightVergence=_rightVergence;
@property(nonatomic) float leftVergence; // @synthesize leftVergence=_leftVergence;
@property(nonatomic) float interPupillaryDistance; // @synthesize interPupillaryDistance=_interPupillaryDistance;
@property(readonly, nonatomic) CDStruct_14d5dc5e rightProjectionMatrix;
@property(readonly, nonatomic) CDStruct_14d5dc5e leftProjectionMatrix;
@property(readonly, nonatomic) CDStruct_14d5dc5e rightViewMatrix;
@property(readonly, nonatomic) CDStruct_14d5dc5e leftViewMatrix;
- (id)init;

@end

