//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface TSCH3DShaderVariable : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_type;
    NSString *_precision;
    unsigned long long _arraySize;
    struct TSCH3DShaderType _shaderType;
    _Bool _isSpecial;
    TSCH3DShaderVariable *_genericName;
    NSArray *_elements;
    unsigned long long _componentCount;
}

+ (id)variableWithName:(id)arg1 type:(id)arg2 precision:(id)arg3 arraySize:(unsigned long long)arg4 shaderType:(struct TSCH3DShaderType)arg5 isSpecial:(_Bool)arg6 generic:(id)arg7;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSCH3DShaderVariable *genericName; // @synthesize genericName=_genericName;
@property(readonly, nonatomic) _Bool isSpecial; // @synthesize isSpecial=_isSpecial;
@property(readonly, nonatomic) struct TSCH3DShaderType shaderType; // @synthesize shaderType=_shaderType;
@property(readonly, nonatomic) unsigned long long arraySize; // @synthesize arraySize=_arraySize;
@property(readonly, nonatomic) NSString *precision; // @synthesize precision=_precision;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)variableAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct TSCH3DShaderType initialLinkType;
@property(readonly, nonatomic) unsigned long long componentCount;
@property(readonly, nonatomic) NSString *commonShaderType;
@property(readonly, nonatomic) _Bool isTexture;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 type:(id)arg2 precision:(id)arg3 arraySize:(unsigned long long)arg4 shaderType:(struct TSCH3DShaderType)arg5 isSpecial:(_Bool)arg6 generic:(id)arg7;

@end

