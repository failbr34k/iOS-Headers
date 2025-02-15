//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDKeyedObject-Protocol.h>

@class CHDDataLabel, CHDMarker, NSString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDDataValueProperties : NSObject <EDKeyedObject>
{
    CHDDataLabel *mDataLabel;
    CHDMarker *mMarker;
    unsigned long long mDataValueIndex;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)dataValueProperties;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setMarker:(id)arg1;
- (id)marker;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)setDataValueIndex:(unsigned long long)arg1;
- (unsigned long long)dataValueIndex;
- (void)setDataLabel:(id)arg1;
- (id)dataLabel;
- (long long)key;
- (id)shallowCopyWithIndex:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

