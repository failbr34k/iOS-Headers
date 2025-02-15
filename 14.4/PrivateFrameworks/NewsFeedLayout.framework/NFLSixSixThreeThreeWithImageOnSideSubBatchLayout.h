//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLPairSubBatchLayout, NFLSingleComponentLayout;

@interface NFLSixSixThreeThreeWithImageOnSideSubBatchLayout : NFLSubBatchLayout
{
    NFLSingleComponentLayout *_leftSixImageOnTopComponent;
    NFLSingleComponentLayout *_rightSixImageOnTopComponent;
    NFLPairSubBatchLayout *_topPairComponent;
    NFLSingleComponentLayout *_bottomImageOnSideComponent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NFLSingleComponentLayout *bottomImageOnSideComponent; // @synthesize bottomImageOnSideComponent=_bottomImageOnSideComponent;
@property(retain, nonatomic) NFLPairSubBatchLayout *topPairComponent; // @synthesize topPairComponent=_topPairComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *rightSixImageOnTopComponent; // @synthesize rightSixImageOnTopComponent=_rightSixImageOnTopComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *leftSixImageOnTopComponent; // @synthesize leftSixImageOnTopComponent=_leftSixImageOnTopComponent;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (unsigned long long)columnSpan;
- (unsigned long long)rowSpan;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;
- (double)rank;
- (_Bool)isValid;

@end

