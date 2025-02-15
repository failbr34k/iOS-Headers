//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@class ICTable, ICTableVersionedDocument;

@interface ICAttachmentTableModel : ICAttachmentModel
{
    ICTableVersionedDocument *_tableDocument;
}

+ (id)tableFromAttributedString:(id)arg1 managedObjectContext:(id)arg2;
+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ICTableVersionedDocument *tableDocument; // @synthesize tableDocument=_tableDocument;
- (id)localizedFallbackSubtitleMac;
- (id)localizedFallbackSubtitleIOS;
- (id)localizedFallbackTitle;
- (void)mergeTablePrimitiveData;
- (void)updateAttachmentByMergingWithTableData:(id)arg1;
- (void)writeMergeableData;
- (_Bool)mergeWithMergeableData:(id)arg1;
- (_Bool)isReadyToPresent;
@property(readonly, nonatomic) ICTable *table;
- (void)noteWillAddOrRemovePassword;
- (void)willMarkAttachmentForDeletion;
- (void)regenerateTextContentInNote;
- (id)textContentInNote;
- (_Bool)providesTextContentInNote;
- (id)searchableTextContentInNote;
- (id)stringsAtRow:(unsigned long long)arg1;
- (void)attachmentDidRefresh:(_Bool)arg1;
- (void)attachmentWillRefresh:(_Bool)arg1;
- (void)attachmentWillTurnIntoFault;
- (void)attachmentAwakeFromFetch;

@end

