//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKView.h>

@class TLKLabel, TLKMultilineText;

@interface TLKEnlargedTitleView : TLKView
{
    TLKMultilineText *_title;
    TLKMultilineText *_subtitle;
    TLKLabel *_titleLabel;
    TLKLabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TLKLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) TLKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TLKMultilineText *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) TLKMultilineText *title; // @synthesize title=_title;
- (id)subtitleLabelText;
- (id)titleLabelText;
- (void)observedPropertiesChanged;
- (id)setupContentView;

@end

