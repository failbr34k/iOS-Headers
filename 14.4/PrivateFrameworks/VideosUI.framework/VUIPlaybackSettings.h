//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VUIPlaybackSettings : NSObject
{
    int _preferencesNotifyToken;
    _Bool _preferencesNotifyTokenIsValid;
    _Bool _cellularDataPlaybackEnabled;
    _Bool _cellularDataDownloadEnabled;
    _Bool _preferAVAdapterCompatibility;
    _Bool _useDefaultSubtitleDownloadLanguages;
    NSString *_preferredAudioLanguageCode;
    long long _networkStatus;
    long long _preferredWifiPlaybackQuality;
    long long _preferredCellularPlaybackQuality;
    long long _preferredWifiDownloadQuality;
    long long _preferredCellularDownloadQuality;
    NSArray *_preferredAudioDownloadLanguages;
    NSArray *_preferredSubtitleDownloadLanguages;
}

+ (id)sharedSettings;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *preferredSubtitleDownloadLanguages; // @synthesize preferredSubtitleDownloadLanguages=_preferredSubtitleDownloadLanguages;
@property(nonatomic) _Bool useDefaultSubtitleDownloadLanguages; // @synthesize useDefaultSubtitleDownloadLanguages=_useDefaultSubtitleDownloadLanguages;
@property(retain, nonatomic) NSArray *preferredAudioDownloadLanguages; // @synthesize preferredAudioDownloadLanguages=_preferredAudioDownloadLanguages;
@property(nonatomic) long long preferredCellularDownloadQuality; // @synthesize preferredCellularDownloadQuality=_preferredCellularDownloadQuality;
@property(nonatomic) long long preferredWifiDownloadQuality; // @synthesize preferredWifiDownloadQuality=_preferredWifiDownloadQuality;
@property(nonatomic) long long preferredCellularPlaybackQuality; // @synthesize preferredCellularPlaybackQuality=_preferredCellularPlaybackQuality;
@property(nonatomic) long long preferredWifiPlaybackQuality; // @synthesize preferredWifiPlaybackQuality=_preferredWifiPlaybackQuality;
@property long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (id)_descriptionForExternalScreenType:(unsigned int)arg1;
- (long long)_downloadQualityForString:(id)arg1;
- (long long)_playbackQualityForString:(id)arg1 forCellular:(_Bool)arg2;
- (void)_updatePropertiesFromUserPrefs;
- (void)_registerObserverForUserPrefsChange;
- (void)_sceneWillConnect:(id)arg1;
- (void)_externalScreenTypeDidChange:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_networkTypeDidChange:(id)arg1;
- (void)_updateNetworkStatus;
@property(nonatomic) _Bool preferAVAdapterCompatibility; // @synthesize preferAVAdapterCompatibility=_preferAVAdapterCompatibility;
@property(retain, nonatomic) NSString *preferredAudioLanguageCode; // @synthesize preferredAudioLanguageCode=_preferredAudioLanguageCode;
@property(nonatomic) _Bool cellularDataDownloadEnabled; // @synthesize cellularDataDownloadEnabled=_cellularDataDownloadEnabled;
@property(nonatomic) _Bool cellularDataPlaybackEnabled; // @synthesize cellularDataPlaybackEnabled=_cellularDataPlaybackEnabled;
@property(readonly, nonatomic) long long preferredDownloadQualityForCurrentNetworkStatus;
@property(readonly, nonatomic) long long preferredPlaybackQualityForCurrentNetworkStatus;
- (void)dealloc;
- (id)init;

@end

