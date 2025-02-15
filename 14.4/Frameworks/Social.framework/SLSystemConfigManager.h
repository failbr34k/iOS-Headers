//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SLSystemConfigManager : NSObject
{
    void *_prefs;
    _Bool _notifyForExternalChangeOnly;
    int _applySkipCount;
    NSString *_serviceType;
}

+ (id)sharedInstanceForCallbackWhileLocked:(void *)arg1;
+ (id)sharedInstanceForServiceType:(id)arg1;
- (void).cxx_destruct;
- (void)_setCallback:(CDUnknownFunctionPointerType)arg1 withContext:(CDStruct_4210025a *)arg2;
- (void)_setValue:(void *)arg1 forKey:(id)arg2;
- (void *)_getValueForKey:(id)arg1;
- (void)_synchronize;
- (void)_notifyTarget:(unsigned int)arg1;
- (void)_tearDown;
- (void)_keepAlive;
- (void)_initializeSystemConfigPrefs:(id)arg1;
- (void)_refresh;
- (id)cachedUsername;
- (void)setCachedUsername:(id)arg1;
- (void)dealloc;
- (id)initWithServiceType:(id)arg1;

@end

