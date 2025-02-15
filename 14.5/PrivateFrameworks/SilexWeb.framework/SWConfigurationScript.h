//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWScript-Protocol.h>

@class NSString, WKUserScript;

@interface SWConfigurationScript : NSObject <SWScript>
{
    WKUserScript *userScript;
    NSString *_configuration;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSString *executableScript;
@property(readonly, nonatomic) WKUserScript *userScript; // @synthesize userScript;
@property(readonly, nonatomic) _Bool queueable;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

