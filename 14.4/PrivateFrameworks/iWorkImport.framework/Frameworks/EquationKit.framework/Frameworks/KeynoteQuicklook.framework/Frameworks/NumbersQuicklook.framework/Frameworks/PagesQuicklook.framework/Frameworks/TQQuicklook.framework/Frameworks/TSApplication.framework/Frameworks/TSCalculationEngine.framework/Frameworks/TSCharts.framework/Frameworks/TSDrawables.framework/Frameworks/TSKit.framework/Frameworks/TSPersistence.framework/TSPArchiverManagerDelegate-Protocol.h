//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/NSObject-Protocol.h>

@class TSPArchiver, TSPArchiverManager, TSPObject;

@protocol TSPArchiverManagerDelegate <NSObject>

@optional
- (_Bool)archiverManager:(TSPArchiverManager *)arg1 shouldDelayArchivingObject:(TSPObject *)arg2;
- (void)archiverManager:(TSPArchiverManager *)arg1 didCreateArchiver:(TSPArchiver *)arg2;
@end

