//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSDictionary;

@interface NSURL (AppleMediaServices)
+ (id)ams_unescapedStringForString:(id)arg1;
+ (id)ams_realHomeDirectory;
+ (id)ams_engagementDirectory;
+ (id)ams_cachesDirectory;
- (id)ams_valueForQueryParameter:(id)arg1;
- (id)ams_URLByReplaceingQueryParameters:(id)arg1;
- (id)ams_URLByReplacingSchemeWithScheme:(id)arg1;
- (id)ams_URLByDeletingTrailingSlash;
- (id)ams_URLByAppendingQueryParameters:(id)arg1;
- (id)ams_schemeSwizzledURL;
@property(readonly, nonatomic) NSDictionary *ams_parameters;
@end

