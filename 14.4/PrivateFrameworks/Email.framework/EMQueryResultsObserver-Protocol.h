//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMObject-Protocol.h>

@class EMObjectID, NSArray, NSDictionary;

@protocol EMQueryResultsObserver <EMObject>
- (void)queryReplacedObjectID:(EMObjectID *)arg1 withNewObjectID:(EMObjectID *)arg2;
- (_Bool)observerContainsObjectID:(EMObjectID *)arg1;
- (void)queryDidFinishRemoteSearch;
- (void)queryDidFinishInitialLoad;
- (void)queryMatchedDeletedObjectIDs:(NSArray *)arg1;
- (void)queryAnticipatesDeletedObjectIDs:(NSArray *)arg1;
- (void)queryMatchedChangesByObjectIDs:(NSDictionary *)arg1;
- (void)queryMatchedMovedObjectIDs:(NSArray *)arg1 after:(EMObjectID *)arg2;
- (void)queryMatchedMovedObjectIDs:(NSArray *)arg1 before:(EMObjectID *)arg2;
- (void)queryMatchedAddedObjectIDs:(NSArray *)arg1 after:(EMObjectID *)arg2 extraInfo:(NSDictionary *)arg3;
- (void)queryMatchedAddedObjectIDs:(NSArray *)arg1 before:(EMObjectID *)arg2 extraInfo:(NSDictionary *)arg3;
- (void)queryDidStartRecovery;
@end

