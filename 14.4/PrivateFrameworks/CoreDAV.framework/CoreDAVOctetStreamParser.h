//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDAV/CoreDAVResponseBodyParser-Protocol.h>

@class NSError, NSMutableData, NSString;

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser>
{
    NSMutableData *_octetStreamData;
    NSError *_parserError;
}

+ (_Bool)canHandleContentType:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *octetStreamData; // @synthesize octetStreamData=_octetStreamData;
@property(readonly) NSError *parserError;
- (_Bool)processData:(id)arg1 forTask:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

