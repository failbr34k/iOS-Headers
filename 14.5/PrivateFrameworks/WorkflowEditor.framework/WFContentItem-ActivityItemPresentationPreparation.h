//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <WorkflowEditor/UIActivityItemSource-Protocol.h>

@class NSString;

@interface WFContentItem (ActivityItemPresentationPreparation) <UIActivityItemSource>
- (void)prepareForActivityItemPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldUseObjectRepresentation;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

