//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

#import <EventKitUI/EKCalendarItemInlineEditItem-Protocol.h>

@class EKEventNotesInlineEditItem, EKEventURLInlineEditItem, NSString;

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem>
{
    EKEventURLInlineEditItem *_urlEditItem;
    EKEventNotesInlineEditItem *_notesEditItem;
}

- (void).cxx_destruct;
- (id)searchStringForEventAutocomplete;
- (_Bool)isSaveable;
- (void)tableViewDidScroll;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (_Bool)isInline;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (unsigned long long)numberOfSubitems;
- (void)setSelectedResponder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (void)_contentSizeCategoryChanged;
- (void)reset;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

