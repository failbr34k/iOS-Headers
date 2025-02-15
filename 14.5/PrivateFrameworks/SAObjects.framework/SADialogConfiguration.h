//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseAceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;
@protocol SAAceSerializable;

@interface SADialogConfiguration : SABaseAceObject <SAAceSerializable>
{
}

@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSString *gender;
@property(retain, nonatomic) id <SAAceSerializable> context;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

