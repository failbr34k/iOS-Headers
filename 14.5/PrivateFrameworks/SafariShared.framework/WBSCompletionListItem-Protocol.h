//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSString, SFSearchResult, WBSQuerySuggestion;

@protocol WBSCompletionListItem <NSObject>
@property(nonatomic) long long parsecQueryID;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;

@optional
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@end

