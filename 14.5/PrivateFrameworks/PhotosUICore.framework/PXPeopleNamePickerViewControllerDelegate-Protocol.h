//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class CNContact, NSString, PHPerson, PXPeopleNamePickerViewController;

@protocol PXPeopleNamePickerViewControllerDelegate <NSObject>
- (void)namePickerController:(PXPeopleNamePickerViewController *)arg1 didPickString:(NSString *)arg2;
- (void)namePickerController:(PXPeopleNamePickerViewController *)arg1 didPickContact:(CNContact *)arg2;
- (void)namePickerController:(PXPeopleNamePickerViewController *)arg1 didPickPerson:(PHPerson *)arg2;

@optional
- (void)namePickerControllerWillChangeText:(PXPeopleNamePickerViewController *)arg1;
- (void)namePickerControllerDidEndEditing:(PXPeopleNamePickerViewController *)arg1;
- (void)namePickerControllerDidStartEditing:(PXPeopleNamePickerViewController *)arg1;
@end

