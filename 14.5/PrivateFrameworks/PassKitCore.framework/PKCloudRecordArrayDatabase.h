//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface PKCloudRecordArrayDatabase : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSMutableDictionary *_cloudRecordByDatabaseZone;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cloudRecordByDatabaseZone; // @synthesize cloudRecordByDatabaseZone=_cloudRecordByDatabaseZone;
- (id)countByZoneID;
- (long long)count;
- (id)allRecordIDs;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)arg1;
- (id)allObjects;
- (id)allItems;
- (void)addCloudRecord:(id)arg1;
- (void)applyCloudRecordDatabase:(id)arg1;
- (id)descriptionWithDetailedOutput:(_Bool)arg1 includeItem:(_Bool)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

