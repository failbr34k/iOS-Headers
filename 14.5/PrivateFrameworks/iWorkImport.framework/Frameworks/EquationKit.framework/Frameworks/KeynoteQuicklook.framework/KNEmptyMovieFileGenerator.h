//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface KNEmptyMovieFileGenerator : NSObject
{
    double _duration;
    NSURL *_generatedFileURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *generatedFileURL; // @synthesize generatedFileURL=_generatedFileURL;
- (void)generateFileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithGeneratedFileURL:(id)arg1 duration:(double)arg2;

@end

