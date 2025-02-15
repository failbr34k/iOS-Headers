//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKChatItem.h>

@class NSAttributedString;

@interface CKMessageStatusChatItem : CKChatItem
{
    _Bool _buttonSizeLoaded;
    _Bool _labelSizeLoaded;
    NSAttributedString *_transcriptButtonText;
    struct CGSize _buttonSize;
    struct CGSize _labelSize;
    struct UIEdgeInsets _buttonTextAlignmentInsets;
    struct UIEdgeInsets _labelTextAlignmentInsets;
}

+ (id)thePastDateFormatter;
+ (id)thisWeekRelativeDateFormatter;
+ (id)todayDateFormatter;
+ (id)createImageAsTextAttachment;
- (void).cxx_destruct;
@property(nonatomic, getter=isLabelSizeLoaded) _Bool labelSizeLoaded; // @synthesize labelSizeLoaded=_labelSizeLoaded;
@property(nonatomic, getter=isButtonSizeLoaded) _Bool buttonSizeLoaded; // @synthesize buttonSizeLoaded=_buttonSizeLoaded;
@property(copy, nonatomic) NSAttributedString *transcriptButtonText; // @synthesize transcriptButtonText=_transcriptButtonText;
@property(readonly, nonatomic) _Bool shouldHideDuringDarkFSM;
- (struct CGSize)loadButtonSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (struct CGSize)loadLabelSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
@property(readonly, nonatomic) _Bool allowsEffectAutoPlayback;
- (id)loadTranscriptButtonText;
- (id)effectsControlStatusTextForEffectStyleID:(id)arg1;
- (unsigned long long)count;
- (id)time;
- (_Bool)isFromMe;
- (long long)expireStatusType;
- (long long)statusType;
- (id)now;
@property(readonly, nonatomic) BOOL statusAlignment;
@property(readonly, nonatomic) long long buttonType;
@property(readonly, nonatomic) struct UIEdgeInsets buttonTextAlignmentInsets; // @synthesize buttonTextAlignmentInsets=_buttonTextAlignmentInsets;
@property(readonly, nonatomic) struct UIEdgeInsets labelTextAlignmentInsets; // @synthesize labelTextAlignmentInsets=_labelTextAlignmentInsets;
@property(readonly, nonatomic) struct CGSize labelSize; // @synthesize labelSize=_labelSize;
@property(readonly, nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (id)loadTranscriptText;
- (struct CGSize)size;
- (_Bool)wantsDrawerLayout;
- (struct UIEdgeInsets)transcriptTextAlignmentInsets;
- (void)unloadSize;
- (void)unloadTranscriptText;
- (Class)cellClass;
- (BOOL)transcriptOrientation;
- (struct UIEdgeInsets)contentInsets;
- (id)layoutGroupSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2;
- (unsigned long long)layoutType;

@end

