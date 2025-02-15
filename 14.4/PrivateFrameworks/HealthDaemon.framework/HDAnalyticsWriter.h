//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSString;

@interface HDAnalyticsWriter : NSObject
{
    HDProfile *_profile;
    struct __SecCertificate *_certificate;
    NSString *_analyticsDirectory;
}

+ (id)_payloadIdentifierForBugType:(id)arg1;
- (void).cxx_destruct;
- (_Bool)_cleanAnalyticsDirectory:(id)arg1 error:(id *)arg2;
- (_Bool)_createAnalyticsDirectory:(id)arg1 error:(id *)arg2;
- (_Bool)_createAndCleanAnalyticsDirectoryWithError:(id *)arg1;
- (_Bool)_loadCertificateWithError:(id *)arg1;
- (id)_encryptAnalyticsData:(id)arg1 withConfig:(id)arg2 error:(id *)arg3;
- (id)_serializeAnalyticsData:(id)arg1 errorOut:(id *)arg2;
- (_Bool)_submitJSONAnalyticsData:(id)arg1 bugType:(id)arg2 customDirectory:(id)arg3 configuration:(id)arg4 error:(id *)arg5;
- (id)analyticsFilePathsWithError:(id *)arg1;
- (id)URLForAnalyticsFileWithName:(id)arg1;
- (_Bool)submitJSONAnalyticsData:(id)arg1 toDirectory:(id)arg2 withConfiguration:(id)arg3 error:(id *)arg4;
- (_Bool)submitJSONAnalyticsData:(id)arg1 bugType:(id)arg2 error:(id *)arg3;
- (id)init;
- (id)initWithProfile:(id)arg1;

@end

