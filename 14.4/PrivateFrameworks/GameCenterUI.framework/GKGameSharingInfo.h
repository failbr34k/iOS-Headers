//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

@interface GKGameSharingInfo : NSObject
{
    _Bool _complete;
    NSString *_gameName;
    NSString *_developerName;
    NSURL *_viewItemURL;
    NSURL *_shortViewItemURL;
    UIImage *_iconImage;
    NSString *_emailSubject;
    NSString *_emailBody;
}

@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(retain, nonatomic) NSString *emailBody; // @synthesize emailBody=_emailBody;
@property(retain, nonatomic) NSString *emailSubject; // @synthesize emailSubject=_emailSubject;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSURL *shortViewItemURL; // @synthesize shortViewItemURL=_shortViewItemURL;
@property(retain, nonatomic) NSURL *viewItemURL; // @synthesize viewItemURL=_viewItemURL;
@property(retain, nonatomic) NSString *developerName; // @synthesize developerName=_developerName;
@property(retain, nonatomic) NSString *gameName; // @synthesize gameName=_gameName;
- (id)subjectForEmailActivity;
- (id)itemsForActivityType:(id)arg1;
- (id)thumbnailForActivityType:(id)arg1;
- (id)operationThatBlocksUntilLoaded;
- (id)initWithGame:(id)arg1;
- (void)dealloc;

@end

