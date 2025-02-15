//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class NSDictionary;

@interface SagaSetItemPropertyOperation : CloudLibraryOperation
{
    unsigned int _sagaID;
    NSDictionary *_properties;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)main;
- (_Bool)isPersistent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 sagaID:(unsigned int)arg2 properties:(id)arg3;
- (id)initWithSagaID:(unsigned int)arg1 properties:(id)arg2;

@end

