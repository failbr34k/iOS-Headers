//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEODataURLSessionTask.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface GEODataURLSessionDownloadTask : GEODataURLSessionTask
{
    NSURL *_downloadedFileURL;
}

- (void).cxx_destruct;
- (void)didFinishDownloadingToURL:(id)arg1;
- (id)downloadedFileURL;
- (id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2;

@end

