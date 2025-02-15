//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class NSDictionary, NSNumber, NSString, NTKFace;

@interface NTKGreenfieldDecodedRecipe : NSObject <NSSecureCoding>
{
    NSDictionary *_complicationSlotToTemplateMapping;
    NSDictionary *_complicationSlotToTemplateOverrideMapping;
    _Bool _isUsingModifiedComplicationsSet;
    NTKFace *_watchFace;
    NSDictionary *_complicationSlotToItemIdMapping;
    NSDictionary *_complicationSlotToNameMapping;
    NSDictionary *_complicationSlotToBundleIdMapping;
    NSString *_noBorderFacePreviewImagePath;
    NSNumber *_senderBoxedDeviceSize;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *senderBoxedDeviceSize; // @synthesize senderBoxedDeviceSize=_senderBoxedDeviceSize;
@property(readonly, nonatomic) NSString *noBorderFacePreviewImagePath; // @synthesize noBorderFacePreviewImagePath=_noBorderFacePreviewImagePath;
@property(readonly, nonatomic) NSDictionary *complicationSlotToBundleIdMapping; // @synthesize complicationSlotToBundleIdMapping=_complicationSlotToBundleIdMapping;
@property(readonly, nonatomic) NSDictionary *complicationSlotToNameMapping; // @synthesize complicationSlotToNameMapping=_complicationSlotToNameMapping;
@property(readonly, nonatomic) NSDictionary *complicationSlotToItemIdMapping; // @synthesize complicationSlotToItemIdMapping=_complicationSlotToItemIdMapping;
@property(readonly, nonatomic) NTKFace *watchFace; // @synthesize watchFace=_watchFace;
@property(readonly, nonatomic) _Bool wasModifiedForThisDevice;
- (void)collectOverrideTemplates;
- (id)_overrideTemplateForComplication:(id)arg1 atSlot:(id)arg2 face:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSDictionary *complicationSlotToTemplateMapping;
- (id)initWithWatchFace:(id)arg1 complicationSlotToTemplateMapping:(id)arg2 complicationSlotToItemIdMapping:(id)arg3 complicationSlotToNameMapping:(id)arg4 complicationSlotToBundleIdMapping:(id)arg5 isUsingModifiedComplicationsSet:(_Bool)arg6 noBorderFacePreviewImagePath:(id)arg7 senderBoxedDeviceSize:(id)arg8;

@end

