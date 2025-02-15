//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFace.h>

#import <NanoTimeKitCompanion/NTKFaceComplicationPreviewable-Protocol.h>

@class NSString;

@interface NTKColorAnalogFace : NTKFace <NTKFaceComplicationPreviewable>
{
}

+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (id)_orderedComplicationSlots;
+ (id)_monogramComplicationSlotForDevice:(id)arg1;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (id)_complicationSlotDescriptors;
- (void)applyPreviewConfigurationWithFamily:(long long)arg1 faceColor:(long long)arg2;
- (id)complicationSlotsHiddenByEditOption:(id)arg1;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (_Bool)_wantsUnadornedSnapshot;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_defaultOptionForMissingCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_customEditModes;
- (long long)_editModeForOldEncodingIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

