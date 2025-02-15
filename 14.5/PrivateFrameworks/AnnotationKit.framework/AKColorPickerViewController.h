//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AnnotationKit/AKTextAttributesUserInterfaceItem-Protocol.h>

@class AKColorPaletteView, AKController, NSString, UIColor;

@interface AKColorPickerViewController : UIViewController <AKTextAttributesUserInterfaceItem>
{
    UIColor *_color;
    long long _colorAttributeTag;
    AKController *_controller;
    AKColorPaletteView *_colorPalette;
    long long _tag;
}

- (void).cxx_destruct;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(retain, nonatomic) AKColorPaletteView *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(nonatomic) __weak AKController *controller; // @synthesize controller=_controller;
@property(nonatomic) long long colorAttributeTag; // @synthesize colorAttributeTag=_colorAttributeTag;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)syncTextAttributesToUI:(id)arg1;
- (id)convertTextAttributes:(id)arg1;
- (void)valueChanged:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

