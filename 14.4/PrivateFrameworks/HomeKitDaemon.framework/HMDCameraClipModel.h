//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBModel.h>

@class HMBStreamingAsset, NSArray, NSData, NSDate, NSNumber, NSString;

@interface HMDCameraClipModel : HMBModel
{
}

+ (id)countOfClipsBetweenDatesQuery;
+ (id)clipsBetweenDatesQueryWithIsAscending:(_Bool)arg1;
+ (id)clipsWithNeedsUploadFeedbackStatusQuery;
+ (id)incompleteClipsQuery;
+ (id)sentinelParentUUID;
+ (id)hmbQueries;
+ (id)hmbExternalRecordType;
+ (id)hmbProperties;
@property unsigned long long feedbackStatus;
- (id)createClipWithSignificantEvents:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSNumber *duration; // @dynamic duration;
@property(retain, nonatomic) NSData *encryptionKey; // @dynamic encryptionKey;
@property(retain, nonatomic) NSNumber *encryptionScheme; // @dynamic encryptionScheme;
@property(retain, nonatomic) NSNumber *feedbackStatusField; // @dynamic feedbackStatusField;
@property(retain, nonatomic) NSNumber *isComplete; // @dynamic isComplete;
@property(retain, nonatomic) NSNumber *maximumClipDuration; // @dynamic maximumClipDuration;
@property(retain, nonatomic) NSArray *posterFramesMetadata; // @dynamic posterFramesMetadata;
@property(retain, nonatomic) NSArray *posterFramesMetadataArray; // @dynamic posterFramesMetadataArray;
@property(retain, nonatomic) HMBStreamingAsset *posterFramesStreamingAsset; // @dynamic posterFramesStreamingAsset;
@property(retain, nonatomic) NSNumber *recordedLocally; // @dynamic recordedLocally;
@property(retain, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(retain, nonatomic) NSString *streamingAssetVersion; // @dynamic streamingAssetVersion;
@property(retain, nonatomic) NSNumber *targetFragmentDuration; // @dynamic targetFragmentDuration;
@property(retain, nonatomic) NSArray *videoMetadata; // @dynamic videoMetadata;
@property(retain, nonatomic) NSArray *videoMetadataArray; // @dynamic videoMetadataArray;
@property(retain, nonatomic) HMBStreamingAsset *videoStreamingAsset; // @dynamic videoStreamingAsset;

@end

