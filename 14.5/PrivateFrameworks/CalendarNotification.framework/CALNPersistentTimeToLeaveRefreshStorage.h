//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNTimeToLeaveRefreshStorage-Protocol.h>

@class CALNInMemoryTimeToLeaveRefreshStorage, NSString;
@protocol OS_dispatch_queue;

@interface CALNPersistentTimeToLeaveRefreshStorage : NSObject <CALNTimeToLeaveRefreshStorage>
{
    NSString *_path;
    CALNInMemoryTimeToLeaveRefreshStorage *_inMemoryStorage;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)timeToLeaveRefreshDataFromPersistentStorageWithPath:(id)arg1 error:(id *)arg2;
+ (id)persistentStorageWithPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) CALNInMemoryTimeToLeaveRefreshStorage *inMemoryStorage; // @synthesize inMemoryStorage=_inMemoryStorage;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (_Bool)_saveDataWithError:(id *)arg1;
- (_Bool)_loadDataWithError:(id *)arg1;
- (void)_removeData;
- (void)_removeRefreshDateWithIdentifier:(id)arg1;
- (void)_addRefreshDate:(id)arg1 withIdentifier:(id)arg2;
- (void)removeRefreshDates;
- (void)removeRefreshDateWithIdentifier:(id)arg1;
- (id)refreshDateWithIdentifier:(id)arg1;
- (void)addRefreshDate:(id)arg1 withIdentifier:(id)arg2;
- (id)refreshDates;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

