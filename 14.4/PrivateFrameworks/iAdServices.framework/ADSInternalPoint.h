//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAdServices/NSCopying-Protocol.h>
#import <iAdServices/NSSecureCoding-Protocol.h>

@interface ADSInternalPoint : NSObject <NSSecureCoding, NSCopying>
{
    float _x;
    float _y;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) float y; // @synthesize y=_y;
@property(nonatomic) float x; // @synthesize x=_x;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

