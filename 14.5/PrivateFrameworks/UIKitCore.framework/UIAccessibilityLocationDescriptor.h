//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIView;

@interface UIAccessibilityLocationDescriptor : NSObject
{
    UIView *_view;
    NSAttributedString *_attributedName;
    struct CGPoint _point;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSAttributedString *attributedName; // @synthesize attributedName=_attributedName;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) struct CGPoint point; // @synthesize point=_point;
- (id)initWithAttributedName:(id)arg1 point:(struct CGPoint)arg2 inView:(id)arg3;
- (id)initWithName:(id)arg1 point:(struct CGPoint)arg2 inView:(id)arg3;
- (id)initWithName:(id)arg1 view:(id)arg2;

@end

