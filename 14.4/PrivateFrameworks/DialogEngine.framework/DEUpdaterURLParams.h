//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface DEUpdaterURLParams : NSObject
{
    NSString *_distribution;
    NSString *_publicationURLSrc;
    NSURL *_publicationURL;
    NSURL *_downloadURLPrefix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *downloadURLPrefix; // @synthesize downloadURLPrefix=_downloadURLPrefix;
@property(retain, nonatomic) NSURL *publicationURL; // @synthesize publicationURL=_publicationURL;
@property(retain, nonatomic) NSString *publicationURLSrc; // @synthesize publicationURLSrc=_publicationURLSrc;
@property(retain, nonatomic) NSString *distribution; // @synthesize distribution=_distribution;

@end

