//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <AddressBookUI/CNContactPickerDelegate-Protocol.h>

@class CNContactPickerViewController, NSArray, NSPredicate, NSString;
@protocol ABPeoplePickerNavigationControllerDelegate;

@interface ABPeoplePickerNavigationController : UINavigationController <CNContactPickerDelegate>
{
    void *_addressBook;
    id _peoplePickerDelegate;
    CNContactPickerViewController *_contactPicker;
    _Bool _ignoreViewWillBePresented;
    NSArray *_displayedProperties;
    NSPredicate *_predicateForEnablingPerson;
    NSPredicate *_predicateForSelectionOfPerson;
    NSPredicate *_predicateForSelectionOfProperty;
}

@property(copy, nonatomic) NSPredicate *predicateForSelectionOfProperty; // @synthesize predicateForSelectionOfProperty=_predicateForSelectionOfProperty;
@property(copy, nonatomic) NSPredicate *predicateForSelectionOfPerson; // @synthesize predicateForSelectionOfPerson=_predicateForSelectionOfPerson;
@property(copy, nonatomic) NSPredicate *predicateForEnablingPerson; // @synthesize predicateForEnablingPerson=_predicateForEnablingPerson;
@property(copy, nonatomic) NSArray *displayedProperties; // @synthesize displayedProperties=_displayedProperties;
@property(nonatomic) id <ABPeoplePickerNavigationControllerDelegate> peoplePickerDelegate; // @synthesize peoplePickerDelegate=_peoplePickerDelegate;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (_Bool)_shouldPreventCancelButtonsFromShowing;
- (id)contactStore;
@property(nonatomic) const void *addressBook;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_endDelayingPresentation;
- (_Bool)_isDelayingPresentation;
- (_Bool)_allowsAutorotation;
- (void)_viewWillBePresented;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)displayedPropertyKeys;
- (id)contactPickerPresentedViewController:(id)arg1;
- (void)setupViewControllers;
- (void)_setViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithAddressBook:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

