//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UASharedPasteboardIRManager : NSObject
{
    NSMutableDictionary *_lookupTable;
}

+ (id)sharedIRManager;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *lookupTable; // @synthesize lookupTable=_lookupTable;
- (id)converterForType:(id)arg1;
- (void)registerIRHandlerClass:(Class)arg1 forType:(id)arg2;
- (id)registeredConverters;
- (void)initializeConverters;
- (id)init;

@end

