//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SXEmbedDataProvider-Protocol.h"

@class NSString, SXJSONDictionary;

@interface FRFlintEmbedConfiguration : NSObject <SXEmbedDataProvider>
{
    SXJSONDictionary *_embedConfiguration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SXJSONDictionary *embedConfiguration; // @synthesize embedConfiguration=_embedConfiguration;
- (id)embedForType:(id)arg1;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

