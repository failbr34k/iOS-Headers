//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, UIImage;

@interface LUILogScreenshotItem : NSObject
{
    UIImage *_screenshotImage;
    NSDate *_screenshotDate;
    struct _NSRange _visibleRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *screenshotDate; // @synthesize screenshotDate=_screenshotDate;
@property(nonatomic) struct _NSRange visibleRange; // @synthesize visibleRange=_visibleRange;
@property(retain, nonatomic) UIImage *screenshotImage; // @synthesize screenshotImage=_screenshotImage;

@end

