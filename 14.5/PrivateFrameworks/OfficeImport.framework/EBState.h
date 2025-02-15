//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDResources, EDWorkbook;
@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface EBState : NSObject
{
    struct XlLinkTable *mXlLinkTable;
    struct XlNameTable *mXlNameTable;
    ChVector_cc6fdd32 *mSheetNames;
    struct XlFormulaProcessor *mXlFormulaProcessor;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    id <TCCancelDelegate> mCancelDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancelDelegate;
- (_Bool)isCancelled;
- (void)setResources:(id)arg1;
- (id)resources;
- (void)setWorkbook:(id)arg1;
- (id)workbook;
- (struct XlFormulaProcessor *)xlFormulaProcessor;
- (ChVector_cc6fdd32 *)sheetNames;
- (struct XlNameTable *)xlNameTable;
- (struct XlLinkTable *)xlLinkTable;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1;

@end

