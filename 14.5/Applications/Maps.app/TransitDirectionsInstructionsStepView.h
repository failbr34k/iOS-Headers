//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TransitDirectionsIconStepView.h"

#import "TransitDirectionsExpandableCell-Protocol.h"

@class MKArtworkImageView, MKMultiPartLabel, MapsLargerHitTargetButton, NSMutableDictionary, NSString, TransitDirectionsListItem, UILayoutGuide, UIStackView, UIView, _MKUILabel, _TransitDirectionsInstructionsCellConstraints;
@protocol TransitDirectionsExpandableCellDelegate, TransitDirectionsInstructionsStepViewDelegate, TransitDirectionsListExpandableItem;

__attribute__((visibility("hidden")))
@interface TransitDirectionsInstructionsStepView : TransitDirectionsIconStepView <TransitDirectionsExpandableCell>
{
    _TransitDirectionsInstructionsCellConstraints *_styleConstraints;
    UILayoutGuide *_trailingContentLayoutGuide;
    _Bool _checkedItemIsExpandable;
    TransitDirectionsListItem<TransitDirectionsListExpandableItem> *_expandableItem;
    NSMutableDictionary *_layoutItemsByType;
    UIView *_disclosureArrowView;
    UIStackView *_textStackView;
    id <TransitDirectionsExpandableCellDelegate> _expandableCellDelegate;
    unsigned long long _cellStyle;
    id <TransitDirectionsInstructionsStepViewDelegate> _instructionsDelegate;
    _MKUILabel *_primaryLabel;
    MKMultiPartLabel *_secondaryLabel;
    MKMultiPartLabel *_tertiaryLabel;
    _MKUILabel *_primaryAccessoryLabel;
    _MKUILabel *_secondaryAccessoryLabel;
    MKArtworkImageView *_platformArtworkImageView;
    MapsLargerHitTargetButton *_detailButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MapsLargerHitTargetButton *detailButton; // @synthesize detailButton=_detailButton;
@property(readonly, nonatomic) MKArtworkImageView *platformArtworkImageView; // @synthesize platformArtworkImageView=_platformArtworkImageView;
@property(readonly, nonatomic) _MKUILabel *secondaryAccessoryLabel; // @synthesize secondaryAccessoryLabel=_secondaryAccessoryLabel;
@property(readonly, nonatomic) _MKUILabel *primaryAccessoryLabel; // @synthesize primaryAccessoryLabel=_primaryAccessoryLabel;
@property(readonly, nonatomic) MKMultiPartLabel *tertiaryLabel; // @synthesize tertiaryLabel=_tertiaryLabel;
@property(readonly, nonatomic) MKMultiPartLabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) _MKUILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(nonatomic) __weak id <TransitDirectionsInstructionsStepViewDelegate> instructionsDelegate; // @synthesize instructionsDelegate=_instructionsDelegate;
@property(readonly, nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) __weak id <TransitDirectionsExpandableCellDelegate> expandableCellDelegate; // @synthesize expandableCellDelegate=_expandableCellDelegate;
- (void)setNavigationState:(long long)arg1;
- (void)_scheduleButtonTapped;
- (_Bool)_combineAccessoryLabels;
- (id)_textAttributesForInstructionType:(long long)arg1;
- (id)_labelForInstructionType:(long long)arg1;
- (id)_fontForInstructionType:(long long)arg1;
- (double)_availableWidthForInstructionType:(long long)arg1;
- (id)_platformArtworkHorizontalPositioningConstraint;
- (id)_layoutItemForInstructionType:(long long)arg1;
- (void)setAccessibilityOrder;
- (void)configureWithItem:(id)arg1;
- (void)_updateAccessoryLabelCompressionHuggingPriorities;
- (void)_detailButtonTapped:(id)arg1;
- (void)_contentSizeCategoryDidChange;
- (double)_instructionsLabelToTrailingLayoutGuideDistance;
- (double)_minPlatformArtworkBottomToBottomDistance;
- (double)_detailButtonBaselineToLabelBaselineDistance;
- (double)_secondaryFirstBaselineToBottomPlatformArtworkDistance;
- (double)bottomSpacerHeight;
- (CDStruct_1aa5c685)_metrics;
- (_Bool)_hasTrailingContent;
- (void)updateExpandCollapseStyling;
@property(readonly, nonatomic) __weak TransitDirectionsListItem<TransitDirectionsListExpandableItem> *expandableItem;
- (void)layoutSubviews;
- (id)fontForScalingBottomSpacerHeight;
- (void)_updateConstraintValues;
- (void)updateConstraints;
- (id)_imageViewPositionConstraints;
- (id)_constraintsForCellStyle:(unsigned long long)arg1;
- (id)_fontForView:(id)arg1;
- (double)_baselineSpacingAboveView:(id)arg1;
- (void)_cellStyleDidChange;
- (void)_setCellStyle:(unsigned long long)arg1;
- (unsigned long long)_bestCellStyleForCurrentState;
- (void)_createSubviews;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

