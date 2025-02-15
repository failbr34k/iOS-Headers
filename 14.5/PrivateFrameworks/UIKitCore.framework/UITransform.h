//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDescriptionProviding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>

@class NSString;

@interface UITransform : NSObject <BSDescriptionProviding, NSCopying>
{
    struct CGAffineTransform _transform;
}

+ (id)scale:(double)arg1;
+ (id)scaleX:(double)arg1 scaleY:(double)arg2;
+ (id)translation:(struct CGPoint)arg1;
+ (id)rotationWithRadians:(double)arg1;
+ (id)rotationWithDegrees:(long long)arg1;
+ (id)transformWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (id)identity;
@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)_initWithTransform:(struct CGAffineTransform)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

