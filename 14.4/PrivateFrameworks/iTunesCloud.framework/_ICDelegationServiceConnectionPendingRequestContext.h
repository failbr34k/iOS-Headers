//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICPBDGSRequest;

@interface _ICDelegationServiceConnectionPendingRequestContext : NSObject
{
    ICPBDGSRequest *_request;
    CDUnknownBlockType _responseHandler;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, nonatomic) ICPBDGSRequest *request; // @synthesize request=_request;
- (id)initWithRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;

@end

