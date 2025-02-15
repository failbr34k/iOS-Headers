//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface WKQLThumbnailLoadOperation : NSOperation
{
    struct RetainPtr<NSURL> _filePath;
    struct RetainPtr<NSString> _identifier;
    struct RetainPtr<NSFileWrapper> _fileWrapper;
    RetainPtr_337fe565 _thumbnail;
    _Bool _shouldWrite;
    _Bool _executing;
    _Bool _finished;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(readonly, getter=isAsynchronous) _Bool asynchronous;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, retain, nonatomic) UIImage *thumbnail;
- (void)start;
- (id)initWithURL:(id)arg1 identifier:(id)arg2;
- (id)initWithAttachment:(id)arg1 identifier:(id)arg2;

@end

