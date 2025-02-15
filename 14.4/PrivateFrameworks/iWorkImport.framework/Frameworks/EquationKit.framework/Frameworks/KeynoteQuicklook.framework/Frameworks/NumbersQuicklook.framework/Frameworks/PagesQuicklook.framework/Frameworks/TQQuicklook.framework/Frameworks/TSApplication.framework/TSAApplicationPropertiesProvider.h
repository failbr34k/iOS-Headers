//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDApplicationPropertiesProvider.h>

@class NSArray, NSString;

@interface TSAApplicationPropertiesProvider : TSDApplicationPropertiesProvider
{
}

@property(readonly, nonatomic) _Bool supportsTabNavigationOfCanvasObjects;
- (unsigned long long)webVideoRequiredDocumentWriteVersion;
- (_Bool)supportsWebVideos;
- (void)setAppTextDefaults:(id)arg1 passphraseVerifier:(id)arg2;
- (id)iWorkTextDefaultsPassphraseVerifier;
- (id)appTextDefaults;
@property(readonly, nonatomic) NSString *appTextDefaultsKey;
- (_Bool)isReadableDocumentType:(id)arg1;
@property(readonly, nonatomic) NSArray *importableDocumentTypes;
@property(readonly, nonatomic) NSArray *readableDocumentTypes;
@property(readonly, nonatomic) NSArray *nativeDocumentTypes;
@property(readonly, nonatomic) NSString *nativeSFFDocumentType;
@property(readonly, nonatomic) NSString *tangierEditingFormatDocumentType;
@property(readonly, nonatomic) NSString *templateDocumentExtension;
@property(readonly, nonatomic) NSString *templateSFFDocumentType;
@property(readonly, nonatomic) NSString *templateDocumentType;
@property(readonly, nonatomic) NSString *nativeDocumentExtension;
@property(readonly, nonatomic) NSString *nativeDocumentType;

@end

