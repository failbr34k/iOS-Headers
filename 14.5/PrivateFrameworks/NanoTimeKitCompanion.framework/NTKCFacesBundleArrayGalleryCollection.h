//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFacesArrayGalleryCollection.h>

@class CLKDevice, NTKFaceBundle;

@interface NTKCFacesBundleArrayGalleryCollection : NTKCFacesArrayGalleryCollection
{
    CLKDevice *_device;
    NTKFaceBundle *_faceBundle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NTKFaceBundle *faceBundle; // @synthesize faceBundle=_faceBundle;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (void)loadFaces;
- (id)initWithDevice:(id)arg1 faceBundle:(id)arg2;

@end

