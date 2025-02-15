//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLAssetsdPrivacySupportServiceProtocol-Protocol.h>

@class NSString, PLAssetsdConnectionAuthorization;

@interface PLAssetsdPrivacySupportService : NSObject <PLAssetsdPrivacySupportServiceProtocol>
{
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

- (void).cxx_destruct;
- (void)setClientPrivacyOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)presentLimitedLibraryPickerReprompt:(CDUnknownBlockType)arg1;
- (id)initWithConnectionAuthorization:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

