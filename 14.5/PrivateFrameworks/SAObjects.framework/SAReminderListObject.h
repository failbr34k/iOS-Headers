//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, NSString, SAReminderRecurrence, SAReminderTrigger;

@interface SAReminderListObject : SADomainObject
{
}

+ (id)listObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)listObject;
@property(copy, nonatomic) NSNumber *totalNumOfReminders;
@property(copy, nonatomic) NSArray *remindersToCreate;
@property(copy, nonatomic) NSArray *reminders;
@property(retain, nonatomic) SAReminderTrigger *reminderTrigger;
@property(retain, nonatomic) SAReminderRecurrence *recurrence;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *accountName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

