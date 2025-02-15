//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKEditableSearchResultCell.h>

#import <ChatKit/CKSearchResultCell-Protocol.h>

@class LPLinkMetadata, LPLinkView, NSString;

@interface CKLinkSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell>
{
    NSString *_resultIdentifier;
    LPLinkView *_linkView;
    LPLinkMetadata *_linkMetadata;
    struct UIEdgeInsets marginInsets;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) LPLinkMetadata *linkMetadata; // @synthesize linkMetadata=_linkMetadata;
@property(retain, nonatomic) LPLinkView *linkView; // @synthesize linkView=_linkView;
@property(copy, nonatomic) NSString *resultIdentifier; // @synthesize resultIdentifier=_resultIdentifier;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_metadataGenerated:(id)arg1;
- (void)refreshForSearchTextIfNeeded:(id)arg1;
- (void)setLinkMetadata:(id)arg1 forSearchResult:(id)arg2;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) _Bool _ck_editing;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

