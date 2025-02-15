//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class SoftwareProperties;

@interface InstallSoftwareOperation : ISOperation
{
    SoftwareProperties *_softwareProperties;
}

- (_Bool)_verifyApplication:(id)arg1 error:(id *)arg2;
- (id)_newInstallationOptions;
- (_Bool)_installPackage:(id *)arg1;
- (void)run;
@property(readonly) SoftwareProperties *softwareProperties;
- (void)dealloc;
- (id)initWithSoftwareProperties:(id)arg1;

@end

