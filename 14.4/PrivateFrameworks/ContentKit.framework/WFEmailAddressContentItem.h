//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class WFEmailAddress;

@interface WFEmailAddressContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (id)itemsWithTextCheckingResult:(id)arg1;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) WFEmailAddress *emailAddress;
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;

@end

