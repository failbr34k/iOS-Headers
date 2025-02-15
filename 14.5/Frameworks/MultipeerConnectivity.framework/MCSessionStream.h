//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCPeerID, MCResourceDownloader, MCResourceProgressObserver, NSMutableData, NSProgress, NSString, NSURL;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MCSessionStream : NSObject
{
    NSObject<OS_dispatch_source> *_source;
    _Bool _sourceSuspended;
    _Bool _progressUnbounded;
    unsigned int _streamID;
    int state;
    int _fd;
    MCPeerID *_peerID;
    NSString *_name;
    NSMutableData *_incomingBuffer;
    NSURL *_url;
    NSProgress *_progress;
    CDUnknownBlockType _completionHandler;
    MCResourceDownloader *_urlDownloader;
    MCResourceProgressObserver *_observer;
}

@property(retain, nonatomic) MCResourceProgressObserver *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) MCResourceDownloader *urlDownloader; // @synthesize urlDownloader=_urlDownloader;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool progressUnbounded; // @synthesize progressUnbounded=_progressUnbounded;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableData *incomingBuffer; // @synthesize incomingBuffer=_incomingBuffer;
@property(nonatomic) _Bool sourceSuspended; // @synthesize sourceSuspended=_sourceSuspended;
@property(nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(nonatomic) int fd; // @synthesize fd=_fd;
@property(nonatomic) int state; // @synthesize state;
@property(nonatomic) unsigned int streamID; // @synthesize streamID=_streamID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) MCPeerID *peerID; // @synthesize peerID=_peerID;
- (void)dealloc;

@end

