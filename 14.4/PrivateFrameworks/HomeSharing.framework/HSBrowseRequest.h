//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSBrowseRequest : HSRequest
{
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 browseGroupType:(long long)arg2;
- (id)_stringForBrowseGroupType:(long long)arg1;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1 browseGroupType:(long long)arg2;

@end

