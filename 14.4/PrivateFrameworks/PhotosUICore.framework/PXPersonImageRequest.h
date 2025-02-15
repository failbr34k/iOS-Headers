//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol PXPerson;

@interface PXPersonImageRequest : NSObject
{
    id <PXPerson> _person;
    NSTimer *_imageLoadInvalidationTimer;
    unsigned long long _imageRequestTag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long imageRequestTag; // @synthesize imageRequestTag=_imageRequestTag;
@property(retain, nonatomic) NSTimer *imageLoadInvalidationTimer; // @synthesize imageLoadInvalidationTimer=_imageLoadInvalidationTimer;
@property(readonly, nonatomic) id <PXPerson> person; // @synthesize person=_person;
- (void)cancel;
- (void)requestImageWithTargetSize:(struct CGSize)arg1 cropFactor:(unsigned long long)arg2 cacheResult:(_Bool)arg3 boundFaceRect:(_Bool)arg4 timeout:(double)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)initWithPerson:(id)arg1;

@end

