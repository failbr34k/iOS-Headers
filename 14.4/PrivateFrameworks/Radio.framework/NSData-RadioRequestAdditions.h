//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (RadioRequestAdditions)
+ (id)dataForRadioRequestParameters:(id)arg1 protocolVersion:(int)arg2 isAsynchronousBackgroundRequest:(_Bool)arg3 error:(id *)arg4;
+ (id)dataForRadioRequestParameters:(id)arg1 isAsynchronousBackgroundRequest:(_Bool)arg2 error:(id *)arg3;
- (id)propertyListForRadioResponseReturningError:(id *)arg1 unparsedResponseDictionary:(id *)arg2;
- (id)propertyListForRadioResponseReturningError:(id *)arg1;
@end

