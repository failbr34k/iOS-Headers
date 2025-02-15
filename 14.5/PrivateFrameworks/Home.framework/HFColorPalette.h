//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAEquatable-Protocol.h>
#import <Home/NSCopying-Protocol.h>
#import <Home/NSMutableCopying-Protocol.h>

@class NSArray, NSString;

@interface HFColorPalette : NSObject <NAEquatable, NSCopying, NSMutableCopying>
{
    unsigned long long _paletteType;
    NSArray *_rawColors;
}

+ (id)defaultColorPaletteOfType:(unsigned long long)arg1;
+ (id)_defaultColorsOfType:(unsigned long long)arg1;
+ (id)_defaultTemperatureColors;
+ (id)_defaultRGBColors;
+ (id)warmWhiteColor;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *rawColors; // @synthesize rawColors=_rawColors;
@property(readonly, nonatomic) unsigned long long paletteType; // @synthesize paletteType=_paletteType;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)colorPaletteByAdjustingForColorProfile:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *colors;
- (_Bool)_isNaturalLightPalette;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 type:(unsigned long long)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)init;
- (id)initWithColors:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

