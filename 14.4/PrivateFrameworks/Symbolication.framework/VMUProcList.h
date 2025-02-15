//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface VMUProcList : NSObject
{
    NSLock *procLock;
    NSMutableDictionary *allProcs;
    NSMutableDictionary *filteredProcs;
    _Bool appsOnly;
    _Bool ownedOnly;
}

- (void).cxx_destruct;
- (id)procInfoWithPID:(int)arg1;
- (id)newestProcInfoWithName:(id)arg1;
- (id)newestProcInfo;
- (id)allPathNames;
- (id)allNames;
- (id)allPIDs;
- (id)allProcInfos;
- (unsigned long long)count;
- (_Bool)appsOnly;
- (void)setAppsOnly:(_Bool)arg1;
- (_Bool)ownedOnly:(_Bool)arg1;
- (void)setOwnedOnly:(_Bool)arg1;
- (_Bool)updateFromSystem;
- (void)_populateFromSystem;
- (_Bool)update;
- (void)removeProcInfo:(id)arg1;
- (void)addProcInfo:(id)arg1;
- (void)setProcInfos:(id)arg1;
- (id)init;

@end

