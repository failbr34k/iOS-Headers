//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSBookmarkAndHistoryCompletionMatch.h>

@interface WBSTopHitCompletionMatch : WBSBookmarkAndHistoryCompletionMatch
{
    _Bool _shouldPreload;
}

- (_Bool)shouldPreload;
- (id)parsecDomainIdentifier;
- (_Bool)isTopHit;
- (id)initWithBookmarkAndHistoryCompletionMatch:(Ref_a2762e75 *)arg1 userInput:(id)arg2 forQueryID:(long long)arg3 shouldPreload:(_Bool)arg4;

@end

