//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSDictionary, WLKSearchWatchListResponse;

@interface WLKSearchWatchListRequestOperation : WLKUTSNetworkRequestOperation
{
    NSDictionary *_query;
    WLKSearchWatchListResponse *_response;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WLKSearchWatchListResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSDictionary *query; // @synthesize query=_query;
- (void)processResponse;
- (id)initWithQuery:(id)arg1 caller:(id)arg2;

@end

