//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface TextResults : NSObject
{
    NSArray *_cols;
    NSMutableArray *_mutableCols;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableCols; // @synthesize mutableCols=_mutableCols;
@property(retain, nonatomic) NSArray *cols; // @synthesize cols=_cols;
- (id)transcriptionOfPath:(id)arg1 tokenProcessingBlock:(CDUnknownBlockType)arg2;
- (void)sortCols;
@property(readonly) unsigned long long colCount;
- (void)addColumn:(id)arg1;
- (id)init;

@end

