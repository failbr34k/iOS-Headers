//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOXPCReply.h>

#import <GeoServices/GEOXPCReply-Protocol.h>

@class GEOETAResponse, NSString;

@interface GEOETAReplySimple : GEOXPCReply <GEOXPCReply>
{
    GEOETAResponse *_response;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GEOETAResponse *response; // @synthesize response=_response;
- (_Bool)isValid;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

