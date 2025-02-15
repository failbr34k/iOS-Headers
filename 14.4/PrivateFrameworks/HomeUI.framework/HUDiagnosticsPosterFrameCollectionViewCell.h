//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSOperationQueue, UIImageView, UILabel;

@interface HUDiagnosticsPosterFrameCollectionViewCell : UICollectionViewCell
{
    NSOperationQueue *_diagnosticOperationQueue;
    UILabel *_textLabel;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak NSOperationQueue *diagnosticOperationQueue; // @synthesize diagnosticOperationQueue=_diagnosticOperationQueue;
- (void)updateHeroFrameWithCameraClip:(id)arg1 clipManager:(id)arg2;
- (void)updateWithPosterFrame:(id)arg1 cameraClip:(id)arg2 clipManager:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

