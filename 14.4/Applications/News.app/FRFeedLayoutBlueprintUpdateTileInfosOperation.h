//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FRFeedCollectionViewLayoutBlueprint, FRFeedCollectionViewLayoutBlueprintInternal, NSSet, NSString;
@protocol FCNewsAppConfiguration;

@interface FRFeedLayoutBlueprintUpdateTileInfosOperation : FCOperation
{
    FRFeedCollectionViewLayoutBlueprint *_layoutBlueprint;
    id <FCNewsAppConfiguration> _appConfiguration;
    FCCloudContext *_cloudContext;
    double _maxArticleAge;
    NSString *_fromHeadlineTileInfoID;
    NSString *_toHeadlineTileInfoID;
    CDUnknownBlockType _updateHeadlineTileInfosCompletionHandler;
    NSSet *_updatedTileInfoIDs;
    FRFeedCollectionViewLayoutBlueprintInternal *_resultBlueprint;
}

- (void).cxx_destruct;
@property(copy, nonatomic) FRFeedCollectionViewLayoutBlueprintInternal *resultBlueprint; // @synthesize resultBlueprint=_resultBlueprint;
@property(copy, nonatomic) NSSet *updatedTileInfoIDs; // @synthesize updatedTileInfoIDs=_updatedTileInfoIDs;
@property(copy) CDUnknownBlockType updateHeadlineTileInfosCompletionHandler; // @synthesize updateHeadlineTileInfosCompletionHandler=_updateHeadlineTileInfosCompletionHandler;
@property(copy, nonatomic) NSString *toHeadlineTileInfoID; // @synthesize toHeadlineTileInfoID=_toHeadlineTileInfoID;
@property(copy, nonatomic) NSString *fromHeadlineTileInfoID; // @synthesize fromHeadlineTileInfoID=_fromHeadlineTileInfoID;
@property(nonatomic) double maxArticleAge; // @synthesize maxArticleAge=_maxArticleAge;
@property(retain) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(copy, nonatomic) id <FCNewsAppConfiguration> appConfiguration; // @synthesize appConfiguration=_appConfiguration;
@property(copy) FRFeedCollectionViewLayoutBlueprint *layoutBlueprint; // @synthesize layoutBlueprint=_layoutBlueprint;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;
- (id)init;

@end

