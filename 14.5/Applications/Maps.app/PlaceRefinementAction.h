//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ReverseGeocodeAction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PlaceRefinementAction : ReverseGeocodeAction
{
    NSString *_address;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
- (void)resolveMapItemWithTraits:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithLabel:(id)arg1 atCoordinate:(struct CLLocationCoordinate2D)arg2 address:(id)arg3;

@end

