//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSNotificationClearingTriggerDelegate;

@interface CSNotificationClearingTrigger : NSObject
{
    _Bool _authenticated;
    _Bool _hadNotificationContentAtDisappearance;
    _Bool _didDisableCarDNDUntilEndOfDrive;
    _Bool _uiLocked;
    _Bool _screenOff;
    _Bool _triggerArmed;
    id <CSNotificationClearingTriggerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool triggerArmed; // @synthesize triggerArmed=_triggerArmed;
@property(nonatomic) _Bool screenOff; // @synthesize screenOff=_screenOff;
@property(nonatomic) _Bool uiLocked; // @synthesize uiLocked=_uiLocked;
@property(nonatomic) _Bool didDisableCarDNDUntilEndOfDrive; // @synthesize didDisableCarDNDUntilEndOfDrive=_didDisableCarDNDUntilEndOfDrive;
@property(nonatomic) _Bool hadNotificationContentAtDisappearance; // @synthesize hadNotificationContentAtDisappearance=_hadNotificationContentAtDisappearance;
@property(nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(nonatomic) __weak id <CSNotificationClearingTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_clearIfNeeded;
- (_Bool)_shouldFire;
- (_Bool)_wouldArmForDiscreteParameters;
- (_Bool)_wouldArmIfNotForDNDAndNotificationContent;
- (_Bool)_wouldArmIfNotForDND;
- (_Bool)_shouldArm;
- (void)_updateTriggerAndClearIfNeeded;
- (void)_reset;
- (id)initWithDelegate:(id)arg1;

@end

