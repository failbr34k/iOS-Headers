//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAssistantColorCharacteristic : HMFObject
{
    _Bool _mandatory;
    NSString *_readCharacteristicType;
    NSString *_writeCharacteristicType;
    NSString *_format;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool mandatory; // @synthesize mandatory=_mandatory;
@property(readonly, nonatomic) NSString *format; // @synthesize format=_format;
@property(readonly, nonatomic) NSString *writeCharacteristicType; // @synthesize writeCharacteristicType=_writeCharacteristicType;
@property(readonly, nonatomic) NSString *readCharacteristicType; // @synthesize readCharacteristicType=_readCharacteristicType;
- (id)initWithReadCharacteristicType:(id)arg1 writeCharacteristicType:(id)arg2 format:(id)arg3 mandatory:(_Bool)arg4;

@end

