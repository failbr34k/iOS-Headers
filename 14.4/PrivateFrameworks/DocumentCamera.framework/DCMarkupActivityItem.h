//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDocCamDocumentInfo, ICDocCamImageCache;

__attribute__((visibility("hidden")))
@interface DCMarkupActivityItem : NSObject
{
    ICDocCamDocumentInfo *_documentInfo;
    ICDocCamImageCache *_imageCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICDocCamImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) ICDocCamDocumentInfo *documentInfo; // @synthesize documentInfo=_documentInfo;
- (id)initWithDocumentInfo:(id)arg1 imageCache:(id)arg2;

@end

