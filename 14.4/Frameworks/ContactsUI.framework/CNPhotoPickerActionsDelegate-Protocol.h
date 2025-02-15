//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNPhotoPickerActionsModel, CNPhotoPickerProviderItem, NSIndexPath;

@protocol CNPhotoPickerActionsDelegate <NSObject>
- (void)actionsModel:(CNPhotoPickerActionsModel *)arg1 didDelete:(CNPhotoPickerProviderItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)actionsModel:(CNPhotoPickerActionsModel *)arg1 didDuplicate:(CNPhotoPickerProviderItem *)arg2 atIndexPath:(NSIndexPath *)arg3 completionBlock:(void (^)(void))arg4;
- (void)actionsModel:(CNPhotoPickerActionsModel *)arg1 didEdit:(CNPhotoPickerProviderItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)actionsModel:(CNPhotoPickerActionsModel *)arg1 didAssignToContact:(CNPhotoPickerProviderItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

