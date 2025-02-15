//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptMessageContentCell.h>

@class UIView;
@protocol CKAssociatedMessageTranscriptCellDelegate;

@interface CKAssociatedMessageTranscriptCell : CKTranscriptMessageContentCell
{
    id <CKAssociatedMessageTranscriptCellDelegate> _delegate;
    UIView *_associatedItemView;
    double _cumulativeAssociatedOffset;
    struct CGSize _size;
    struct CGSize _parentSize;
    struct IMAssociatedMessageGeometryDescriptor _geometryDescriptor;
}

- (void).cxx_destruct;
@property(nonatomic) double cumulativeAssociatedOffset; // @synthesize cumulativeAssociatedOffset=_cumulativeAssociatedOffset;
@property(nonatomic) struct CGSize parentSize; // @synthesize parentSize=_parentSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct IMAssociatedMessageGeometryDescriptor geometryDescriptor; // @synthesize geometryDescriptor=_geometryDescriptor;
@property(retain, nonatomic) UIView *associatedItemView; // @synthesize associatedItemView=_associatedItemView;
@property(nonatomic) __weak id <CKAssociatedMessageTranscriptCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)prepareForReuse;
- (void)performReload:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)associatedViewFrame:(struct CGRect)arg1 inContainerFrame:(struct CGRect)arg2;
- (void)layoutSubviewsForAlignmentContents;
- (void)applyLayoutAttributes:(id)arg1;
- (_Bool)failureButtonAdjustsContentAlignmentRect;
- (_Bool)hidesCheckmark;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;

@end

