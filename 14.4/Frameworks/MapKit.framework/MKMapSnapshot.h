//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage, UITraitCollection, VKMapSnapshot;

@interface MKMapSnapshot : NSObject
{
    VKMapSnapshot *_snapshot;
    UIImage *_image;
    UITraitCollection *_traitCollection;
}

+ (id)createSnapshotWithOptions:(id)arg1 timeoutInSeconds:(long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (_Bool)_hasNoDataPlaceholders;
- (struct CLLocationCoordinate2D)_coordinateForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)_initWithSnapshot:(id)arg1 traitCollection:(id)arg2;
- (void)_displayAppleLogoForMapType:(unsigned long long)arg1 withScale:(double)arg2 forDarkMode:(_Bool)arg3;
- (void)_prepareForRenderWithAnnotationViews:(id)arg1;
- (id)snapshotWithAnnotationView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(struct CLLocationCoordinate2D)arg2;

@end

