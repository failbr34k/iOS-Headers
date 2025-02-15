//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/NSCopying-Protocol.h>
#import <AVFCore/NSMutableCopying-Protocol.h>
#import <AVFCore/NSSecureCoding-Protocol.h>

@class AVVideoCompositionLayerInstructionInternal;

@interface AVVideoCompositionLayerInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    AVVideoCompositionLayerInstructionInternal *_layerInstruction;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (void)_setValuesFromDictionary:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (id)dictionaryRepresentationWithTimeRange:(CDStruct_e83c9415)arg1;
- (_Bool)getCropRectangleRampForTime:(CDStruct_1b6d18a9)arg1 startCropRectangle:(struct CGRect *)arg2 endCropRectangle:(struct CGRect *)arg3 timeRange:(CDStruct_e83c9415 *)arg4;
- (void)setCropRectangleRampFromStartCropRectangle:(struct CGRect)arg1 toEndCropRectangle:(struct CGRect)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)setCropRectangle:(struct CGRect)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_setCropRectangleRampFromStartCropRectangle:(struct CGRect)arg1 toEndCropRectangle:(struct CGRect)arg2 timeRange:(CDStruct_e83c9415)arg3 selector:(SEL)arg4;
- (_Bool)getOpacityRampForTime:(CDStruct_1b6d18a9)arg1 startOpacity:(float *)arg2 endOpacity:(float *)arg3 timeRange:(CDStruct_e83c9415 *)arg4;
- (void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)setOpacity:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(CDStruct_e83c9415)arg3 selector:(SEL)arg4;
- (_Bool)getTransformRampForTime:(CDStruct_1b6d18a9)arg1 startTransform:(struct CGAffineTransform *)arg2 endTransform:(struct CGAffineTransform *)arg3 timeRange:(CDStruct_e83c9415 *)arg4;
- (void)setTransformRampFromStartTransform:(struct CGAffineTransform)arg1 toEndTransform:(struct CGAffineTransform)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)setTransform:(struct CGAffineTransform)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_setTransformRampFromStartTransform:(struct CGAffineTransform)arg1 toEndTransform:(struct CGAffineTransform)arg2 timeRange:(CDStruct_e83c9415)arg3 selector:(SEL)arg4;
- (void)_setCropRectangleRamps:(id)arg1;
- (void)_setOpacityRamps:(id)arg1;
- (void)_setTransformRamps:(id)arg1;
- (void)setTrackID:(int)arg1;
@property(readonly, nonatomic) int trackID;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

