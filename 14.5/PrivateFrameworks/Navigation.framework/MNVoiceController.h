//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNNavigationAudioSession, NSBundle, NSHashTable, NSLocale, NSString;

@interface MNVoiceController : NSObject
{
    MNNavigationAudioSession *_activeNavigationSession;
    long long _currentLanguageSource;
    NSString *_currentLanguage;
    NSString *_currentVoiceName;
    NSLocale *_currentLocale;
    NSBundle *_spokenBundle;
    _Bool _isPersistentConnectionOpen;
    long long _audioSessionState;
    NSHashTable *_observers;
    double _lastSpeechStartTime;
    NSString *_lastSpeech;
    unsigned long long _charactersSpokenCount;
    double _charactersSpokenDuration;
    _Bool _deviceMuted;
}

+ (id)defaultVoiceLanguageWithSource:(long long *)arg1;
+ (id)localizedStringForKey:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool deviceMuted; // @synthesize deviceMuted=_deviceMuted;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_setMaintainInactivePersistentConnection:(_Bool)arg1;
@property(retain) MNNavigationAudioSession *activeNavigationSession; // @synthesize activeNavigationSession=_activeNavigationSession;
- (void)setAudioSessionProperties;
- (void)setVolume:(double)arg1;
- (void)endAnnounce;
- (void)prepareToAnnounce;
- (void)warmUpTTS;
- (void)beepIfNecessaryForShortPromptType:(unsigned long long)arg1 textToSpeak:(id)arg2;
- (_Bool)isPlayingAudio;
- (_Bool)isSpeaking;
- (void)clearAllEvents;
- (void)stop;
- (void)speak:(id)arg1 fallbackPrompt:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)cacheAnnouncement:(id)arg1 privately:(_Bool)arg2;
- (double)_estimateDurationToSpeak:(id)arg1;
- (double)durationToSpeak:(id)arg1;
- (void)_setGender;
- (void)_defaultsDidChange;
@property(readonly, nonatomic) _Bool speechMuted;
- (void)_updateCurrentVoiceLanguage;
- (id)_localizedStringForKey:(id)arg1;
@property(readonly, nonatomic) NSLocale *currentVoiceLocale;
@property(readonly, nonatomic) NSString *currentVoiceLanguage;
- (id)init;
- (void)dealloc;

@end

