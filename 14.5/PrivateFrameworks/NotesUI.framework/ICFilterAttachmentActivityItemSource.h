//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesUI/UIActivityItemSource-Protocol.h>
#import <NotesUI/UIActivityItemSourceAttachment-Protocol.h>

@class NSString;

@interface ICFilterAttachmentActivityItemSource : NSObject <UIActivityItemSourceAttachment, UIActivityItemSource>
{
    id _attachmentItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id attachmentItem; // @synthesize attachmentItem=_attachmentItem;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityItemSourceForSelector:(SEL)arg1;
- (id)initAttachmentItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

