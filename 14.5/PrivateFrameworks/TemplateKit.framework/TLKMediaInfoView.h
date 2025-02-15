//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKView.h>

@class NSArray, TLKContentsContainerView, TLKImage, TLKImageView;

@interface TLKMediaInfoView : TLKView
{
    TLKImage *_image;
    NSArray *_contents;
    TLKImageView *_imageView;
    TLKContentsContainerView *_contentsContainer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TLKContentsContainerView *contentsContainer; // @synthesize contentsContainer=_contentsContainer;
@property(retain, nonatomic) TLKImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) TLKImage *image; // @synthesize image=_image;
- (id)detailLabelStrings;
- (id)titleLabelStrings;
- (_Bool)imageViewIsHidden;
- (void)observedPropertiesChanged;
- (id)setupContentView;

@end

