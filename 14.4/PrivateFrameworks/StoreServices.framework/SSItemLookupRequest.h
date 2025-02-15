//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol SSItemLookupRequestDelegate;

@interface SSItemLookupRequest : SSRequest <SSXPCCoding>
{
    NSMutableDictionary *_parameters;
}

- (id)_errorForStatusCode:(long long)arg1;
- (id)_convertedValueForValue:(id)arg1;
- (id)_copyItemsFromResponse:(id)arg1 expirationDate:(id)arg2;
@property(readonly, copy) NSDictionary *parameters;
- (id)copyQueryStringParameters;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)start;
- (id)valueForParameter:(id)arg1;
- (void)startWithItemLookupBlock:(CDUnknownBlockType)arg1;
- (void)setValue:(id)arg1 forParameter:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <SSItemLookupRequestDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

