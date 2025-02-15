//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ANAnnouncementStatePublisher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    char *_name;
    int _registrationToken;
}

- (void).cxx_destruct;
- (void)_unregister;
- (void)_register;
- (_Bool)_setState:(unsigned long long)arg1 withToken:(int)arg2;
- (_Bool)_setName:(id)arg1;
- (void)_publishState:(unsigned long long)arg1 name:(id)arg2;
- (void)invalidate;
- (void)publishState:(unsigned long long)arg1 name:(id)arg2;
- (id)init;
- (void)dealloc;

@end

