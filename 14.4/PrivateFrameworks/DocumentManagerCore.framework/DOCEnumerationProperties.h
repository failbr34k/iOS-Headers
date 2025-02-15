//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface DOCEnumerationProperties : NSObject
{
    NSNumber *_maximumNumberOfItems;
    NSArray *_tagIdentifiers;
    NSArray *_excludedFileTypes;
    NSArray *_allowedFileTypes;
    NSString *_hostIdentifier;
}

- (void).cxx_destruct;
@property(copy) NSString *hostIdentifier; // @synthesize hostIdentifier=_hostIdentifier;
@property(copy) NSArray *allowedFileTypes; // @synthesize allowedFileTypes=_allowedFileTypes;
@property(copy) NSArray *excludedFileTypes; // @synthesize excludedFileTypes=_excludedFileTypes;
@property(copy) NSArray *tagIdentifiers; // @synthesize tagIdentifiers=_tagIdentifiers;
@property(copy) NSNumber *maximumNumberOfItems; // @synthesize maximumNumberOfItems=_maximumNumberOfItems;
- (id)initWithHostIdentifier:(id)arg1 maximumNumberOfItems:(long long)arg2 allowedDocumentTypes:(id)arg3 excludedDocumentTypes:(id)arg4 tags:(id)arg5;
- (id)initWithConfiguration:(id)arg1 tags:(id)arg2;

@end

