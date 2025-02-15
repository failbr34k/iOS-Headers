//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLFunctionConstantValues, NSString;

@interface MTLFunctionDescriptor : NSObject <NSCopying>
{
    struct MTLFunctionDescriptorPrivate _private;
}

+ (id)functionDescriptor;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(nonatomic) unsigned long long options; // @dynamic options;
@property(copy, nonatomic) MTLFunctionConstantValues *constantValues; // @dynamic constantValues;
@property(copy, nonatomic) NSString *specializedName; // @dynamic specializedName;
@property(copy, nonatomic) NSString *name; // @dynamic name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

