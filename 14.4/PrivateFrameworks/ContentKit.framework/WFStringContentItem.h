//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class NSString, WFDataDetectorResults;

@interface WFStringContentItem : WFGenericFileContentItem <WFContentItemClass>
{
    WFDataDetectorResults *_dataDetectorResults;
}

+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) WFDataDetectorResults *dataDetectorResults; // @synthesize dataDetectorResults=_dataDetectorResults;
- (_Bool)isContent;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)generateObjectsForClass:(Class)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *string;
- (_Bool)includesFileRepresentationInSerializedItem;

@end

