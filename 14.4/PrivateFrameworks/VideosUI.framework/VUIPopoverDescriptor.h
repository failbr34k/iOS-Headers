//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKImageElement, IKViewElement, NSArray, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface VUIPopoverDescriptor : NSObject
{
    IKImageElement *_imageElement;
    IKViewElement *_buttonElement;
    IKViewElement *_popoverElement;
    UIColor *_tintColor;
    NSString *_title;
    unsigned long long _type;
    NSArray *_popoverEntries;
    struct CGSize _popoverSize;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *popoverEntries; // @synthesize popoverEntries=_popoverEntries;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) struct CGSize popoverSize; // @synthesize popoverSize=_popoverSize;
@property(readonly, nonatomic) IKViewElement *popoverElement; // @synthesize popoverElement=_popoverElement;
@property(readonly, nonatomic) IKViewElement *buttonElement; // @synthesize buttonElement=_buttonElement;
- (void)_populateWithElement:(id)arg1;
- (id)_init;
- (id)init;
- (id)initWithViewElement:(id)arg1;

@end

