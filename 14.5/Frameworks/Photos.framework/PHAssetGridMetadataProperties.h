//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@class NSString;

@interface PHAssetGridMetadataProperties : PHAssetPropertySet
{
    NSString *_title;
    NSString *_originalFilename;
}

+ (id)propertiesToFetch;
+ (id)propertySetName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end

