//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHPerson, UIImage;

@interface PXPersonItem : NSObject
{
    int _faceImageRequestID;
    PHPerson *_modelObject;
    CDUnknownBlockType _faceImageLoadingCompletionBlock;
    CDUnknownBlockType _fastDisplayBlock;
    UIImage *_faceImage;
}

- (void).cxx_destruct;
@property __weak UIImage *faceImage; // @synthesize faceImage=_faceImage;
@property(copy) CDUnknownBlockType fastDisplayBlock; // @synthesize fastDisplayBlock=_fastDisplayBlock;
@property(copy) CDUnknownBlockType faceImageLoadingCompletionBlock; // @synthesize faceImageLoadingCompletionBlock=_faceImageLoadingCompletionBlock;
@property int faceImageRequestID; // @synthesize faceImageRequestID=_faceImageRequestID;
@property(retain, nonatomic) PHPerson *modelObject; // @synthesize modelObject=_modelObject;
- (void)updateWithModel:(id)arg1;
- (id)initWithPerson:(id)arg1;

@end

