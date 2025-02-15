//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIJSFakeXMLHTTPRequest-Protocol.h>

@class IKJSXMLDocument, NSData, NSDictionary, NSHTTPURLResponse, NSString;

__attribute__((visibility("hidden")))
@interface SKUIJSFakeXMLHTTPRequest : IKJSObject <SKUIJSFakeXMLHTTPRequest>
{
    NSData *_data;
    NSDictionary *_performanceMetrics;
    NSHTTPURLResponse *_response;
}

- (void).cxx_destruct;
@property(readonly, retain) NSString *statusText;
@property(readonly) unsigned int status;
@property(readonly) unsigned int responseType;
@property(readonly) IKJSXMLDocument *responseXML;
@property(readonly) NSString *responseText;
@property(readonly) id response;
@property(readonly) unsigned int readyState;
@property(readonly) NSDictionary *metrics;
- (id)getResponseHeader:(id)arg1;
- (id)getAllResponseHeaders;
- (id)initWithAppContext:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;

@end

