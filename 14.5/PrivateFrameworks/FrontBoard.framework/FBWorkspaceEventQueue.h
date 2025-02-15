//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSEventQueue.h>

@interface FBWorkspaceEventQueue : BSEventQueue
{
}

+ (id)sharedInstance;
- (void)_noteQueueDidUnlock;
- (void)_noteQueueDidLock;
- (void)_noteWillExecuteEvent:(id)arg1;
- (void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned long long)arg2;
- (void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2;
- (_Bool)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2;
- (void)executeOrPrependEvents:(id)arg1;
- (void)executeOrPrependEvent:(id)arg1;
- (void)executeOrAppendEvent:(id)arg1;

@end

