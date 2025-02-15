//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableSet, NSTimer, UILabel, UIPDFDocument;

__attribute__((visibility("hidden")))
@interface UIPDFWidget : UIView
{
    int queueIndex;
    int queueCount;
    struct {
        int byteCount;
        int currentPageCount;
        int renderJobsCount;
        _Bool memWarning;
    } queueData[60];
    int currentPageCount;
    int totalPageCount;
    int renderJobsCount;
    NSTimer *heartbeatTimer;
    UILabel *infoLabel;
    UIPDFDocument *activeDocument;
    NSMutableSet *trackedPages;
}

- (void)removedPageView:(int)arg1;
- (void)addedPageView:(int)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)heartbeat;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withDocument:(id)arg2;

@end

