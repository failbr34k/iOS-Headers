//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptMultilineLabelCell.h>

@class IMBalloonPluginDataSource, NSString, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface CKPluginMessageStatusCell : CKTranscriptMultilineLabelCell
{
    NSString *_balloonBundleID;
    IMBalloonPluginDataSource *_dataSource;
    UIView *_previousPluginSnapshot;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *previousPluginSnapshot; // @synthesize previousPluginSnapshot=_previousPluginSnapshot;
@property(retain, nonatomic) IMBalloonPluginDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSString *balloonBundleID; // @synthesize balloonBundleID=_balloonBundleID;
- (void)performInsertion:(CDUnknownBlockType)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)prepareForReuse;
- (void)_updateBalloonPluginIconImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;

@end

