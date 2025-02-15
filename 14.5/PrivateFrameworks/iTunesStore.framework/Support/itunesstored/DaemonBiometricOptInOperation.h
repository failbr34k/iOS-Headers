//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSData;

@interface DaemonBiometricOptInOperation : ISOperation
{
    NSData *_authToken;
    _Bool _requiresStoreAuthentication;
    CDUnknownBlockType _resultBlock;
}

- (void).cxx_destruct;
- (_Bool)_updateTouchIDSettingsForAccount:(id)arg1;
- (id)_authenticateWithAccount:(id)arg1 error:(id *)arg2;
- (void)run;
@property(copy) CDUnknownBlockType resultBlock;
@property _Bool requiresStoreAuthentication;
- (id)init;

@end

