//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFAttachmentCapabilities : NSObject
{
}

+ (id)capabilitiesDictionary;
+ (_Bool)placeholdersAvailable;
+ (unsigned long long)currentPlaceholderThreshold;
+ (id)allowedMailDropDownloadDomains;
+ (id)mailDropPreferences;
+ (double)mailDropExpiration;
+ (_Bool)mailDropAvailable;
+ (_Bool)mailDropAvailableForAccount:(id)arg1;
+ (_Bool)mailDropConfigured;
+ (unsigned long long)_mailDropLimit;
+ (unsigned long long)mailDropThreshold;
+ (_Bool)_isMailDropDevice;
+ (unsigned long long)currentUploadLimitForAccount:(id)arg1;
+ (unsigned long long)currentUploadLimit;
+ (unsigned long long)currentDownloadLimit;
+ (unsigned long long)currentMessageLimit;

@end

