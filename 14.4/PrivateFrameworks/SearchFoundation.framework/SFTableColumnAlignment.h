//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFTableColumnAlignment-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFTableColumnAlignment : NSObject <SFTableColumnAlignment, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int columnAlignment:1;
        unsigned int dataAlignment:1;
        unsigned int isEqualWidth:1;
    } _has;
    _Bool _isEqualWidth;
    int _columnAlignment;
    int _dataAlignment;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isEqualWidth; // @synthesize isEqualWidth=_isEqualWidth;
@property(nonatomic) int dataAlignment; // @synthesize dataAlignment=_dataAlignment;
@property(nonatomic) int columnAlignment; // @synthesize columnAlignment=_columnAlignment;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasIsEqualWidth;
- (_Bool)hasDataAlignment;
- (_Bool)hasColumnAlignment;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

