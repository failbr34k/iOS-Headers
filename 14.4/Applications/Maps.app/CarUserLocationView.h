//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UserLocationView.h"

__attribute__((visibility("hidden")))
@interface CarUserLocationView : UserLocationView
{
    _Bool _overrideIsStale;
}

+ (double)outerRingWidth;
+ (double)innerDiameter;
+ (double)baseDiameter;
@property(nonatomic) _Bool overrideIsStale; // @synthesize overrideIsStale=_overrideIsStale;
- (_Bool)_isSelectable;
- (_Bool)_isLocationStale:(id)arg1;
- (void)setMode:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

