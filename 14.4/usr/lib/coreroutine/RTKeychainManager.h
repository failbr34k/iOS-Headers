//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/RTDiagnosticProvider-Protocol.h>

@class NSString;

@interface RTKeychainManager : NSObject <RTDiagnosticProvider>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)sendDiagnosticsToURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)updateKeyWithIdentifier:(id)arg1 keyData:(id)arg2 keySize:(long long)arg3 error:(id *)arg4;
- (id)encryptionKeyWithSize:(long long)arg1 identifier:(id)arg2 error:(id *)arg3;
- (_Bool)removeEncryptionKeyWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)createSymmetricKeyWithSize:(long long)arg1 identifier:(id)arg2 storeInKeychain:(_Bool)arg3 error:(id *)arg4;
- (_Bool)_updateKey:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)_removeItemWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)_setKey:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
- (id)_keyForIdentifier:(id)arg1 error:(id *)arg2;
- (id)_randomKeyWithSpecifier:(id)arg1 error:(id *)arg2;
- (id)_keySpecifierWithBitSize:(long long)arg1;
- (int)_deleteSecItemMatchingQuery:(id)arg1;
- (int)_addSecItemWithAttributes:(id)arg1 result:(id *)arg2;
- (int)_updateSecItemMatchingQuery:(id)arg1 attributes:(id)arg2;
- (int)_copySecItemMatchingQuery:(id)arg1 result:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

