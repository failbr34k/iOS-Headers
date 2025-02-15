//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNContactContentViewControllerDelegate-Protocol.h>

@class CNAvatarViewController, CNContact, CNStarkActionsController, CNStarkContactInfoViewController, NSArray, NSString, UILayoutGuide;

@interface CNStarkCardViewController : UIViewController <CNContactContentViewControllerDelegate>
{
    CNAvatarViewController *_avatarViewController;
    CNStarkContactInfoViewController *_contactInfoViewController;
    CNStarkActionsController *_actionsController;
    CNContact *_contact;
    NSArray *_displayedContactProperties;
    NSArray *_layoutConstraints;
    UILayoutGuide *_centeringLayoutGuide;
    UILayoutGuide *_avatarAndDetailsLayoutGuide;
}

+ (id)starkCardControllerForCalendarEventWithContact:(id)arg1;
+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) UILayoutGuide *avatarAndDetailsLayoutGuide; // @synthesize avatarAndDetailsLayoutGuide=_avatarAndDetailsLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *centeringLayoutGuide; // @synthesize centeringLayoutGuide=_centeringLayoutGuide;
@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(readonly, nonatomic) NSArray *displayedContactProperties; // @synthesize displayedContactProperties=_displayedContactProperties;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) CNStarkActionsController *actionsController; // @synthesize actionsController=_actionsController;
@property(readonly, nonatomic) CNStarkContactInfoViewController *contactInfoViewController; // @synthesize contactInfoViewController=_contactInfoViewController;
@property(readonly, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
- (void)showMore:(id)arg1;
- (void)updateNavigationItems;
- (void)updateViewControllers;
- (void)setupLayoutConstraints;
- (void)updateViewConstraints;
- (void)resetLayoutConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupLayoutGuides;
- (void)setupViewControllers;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1 displayedContactProperties:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

