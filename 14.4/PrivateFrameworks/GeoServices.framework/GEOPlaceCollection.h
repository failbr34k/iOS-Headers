//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOCollectionPublisherAttribution, GEOMapItemIdentifier, GEOPDPlaceCollection, GEOPublisher, NSArray, NSDate, NSString, NSURL;
@protocol GEOMapItemPhoto;

@interface GEOPlaceCollection : NSObject
{
    GEOPDPlaceCollection *_collection;
    GEOPublisher *_publisher;
    GEOCollectionPublisherAttribution *_publisherAttribution;
    NSString *_publisherAttributionIdentifierString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *publisherAttributionIdentifierString; // @synthesize publisherAttributionIdentifierString=_publisherAttributionIdentifierString;
@property(readonly, nonatomic) GEOCollectionPublisherAttribution *publisherAttribution; // @synthesize publisherAttribution=_publisherAttribution;
@property(readonly, nonatomic) GEOPublisher *publisher; // @synthesize publisher=_publisher;
@property(readonly, nonatomic, getter=isBlocked) _Bool blocked;
@property(readonly, nonatomic, getter=isSuppressed) _Bool suppressed;
@property(readonly, nonatomic) NSURL *collectionURL;
@property(readonly, nonatomic) id <GEOMapItemPhoto> authorPhoto;
@property(readonly, nonatomic) NSString *authorName;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, nonatomic) NSArray *itemIds;
@property(readonly, nonatomic) NSArray *photos;
@property(readonly, nonatomic) GEOMapItemIdentifier *collectionIdentifier;
@property(readonly, nonatomic) NSString *collectionDescription;
@property(readonly, nonatomic) NSString *collectionTitle;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCollection:(id)arg1 usingAttribution:(id)arg2;

@end

