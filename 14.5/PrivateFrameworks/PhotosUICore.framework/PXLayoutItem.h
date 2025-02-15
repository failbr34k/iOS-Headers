//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXLayoutItemInput-Protocol.h>

@class NSString;

@interface PXLayoutItem : NSObject <PXLayoutItemInput>
{
    double _weight;
    struct CGSize _size;
    struct CGPoint _positionOffset;
    struct CGRect _preferredCropRect;
    struct CGRect _acceptableCropRect;
    struct CGAffineTransform _transform;
}

@property(nonatomic) struct CGRect acceptableCropRect; // @synthesize acceptableCropRect=_acceptableCropRect;
@property(nonatomic) struct CGRect preferredCropRect; // @synthesize preferredCropRect=_preferredCropRect;
@property(nonatomic) struct CGPoint positionOffset; // @synthesize positionOffset=_positionOffset;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (double)weightUsingCriterion:(long long)arg1;
- (id)initWithSize:(struct CGSize)arg1 weight:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

