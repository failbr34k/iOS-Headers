//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSCopying-Protocol.h>
#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSData, NSString, UIImage;

@interface CRKImage : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _horizontallyFlipped;
    UIImage *_underlyingImage;
}

+ (_Bool)supportsSecureCoding;
+ (double)screenScale;
+ (struct CGImage *)resizedCGImageFromImage:(struct CGImage *)arg1 newSize:(struct CGSize)arg2;
+ (id)imageWithUnderlyingImage:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)templateImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)templateImageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageNamed:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isHorizontallyFlipped) _Bool horizontallyFlipped; // @synthesize horizontallyFlipped=_horizontallyFlipped;
@property(retain, nonatomic) UIImage *underlyingImage; // @synthesize underlyingImage=_underlyingImage;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqualToImage:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)flippedUnderlyingImage;
- (_Bool)isLargerThanSize:(struct CGSize)arg1;
- (id)JPEGRepresentationWithCompressionFactor:(double)arg1;
- (id)imageByAspectFittingToBox:(struct CGSize)arg1;
- (id)imageByEnlargingCanvasToSize:(struct CGSize)arg1;
- (id)imageByResizingToSize:(struct CGSize)arg1;
@property(copy, nonatomic) NSString *accessibilityDescription;
- (_Bool)layoutIsLeftToRight;
@property(readonly, nonatomic) CRKImage *localizedImage;
@property(readonly, nonatomic) struct CGImage *CGImage;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, copy, nonatomic) NSData *PNGRepresentation;
- (id)initWithUnderlyingImage:(id)arg1 horizontallyFlipped:(_Bool)arg2;
- (id)initWithUnderlyingImage:(id)arg1;

@end

