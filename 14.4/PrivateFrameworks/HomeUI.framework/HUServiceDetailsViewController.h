//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HFAccessoryObserver-Protocol.h>
#import <HomeUI/HFHomeObserver-Protocol.h>
#import <HomeUI/HUAccessorySettingsItemModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUChildServiceModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUContainedMediaAccessoriesGridViewControllerDelegate-Protocol.h>
#import <HomeUI/HUContainedServiceGridViewControllerDelegate-Protocol.h>
#import <HomeUI/HUControlPanelControllerDelegate-Protocol.h>
#import <HomeUI/HUDetailsPresentationDelegateHost-Protocol.h>
#import <HomeUI/HUEditRoomViewControllerPresentationDelegate-Protocol.h>
#import <HomeUI/HUHomeAssistantDeviceSplitAccountActionDelegate-Protocol.h>
#import <HomeUI/HUMediaSystemEditorViewControllerDelegate-Protocol.h>
#import <HomeUI/HUPickerCellDelegate-Protocol.h>
#import <HomeUI/HUPresentationDelegate-Protocol.h>
#import <HomeUI/HUServiceDetailsItemManagerDelegate-Protocol.h>
#import <HomeUI/HUServiceGroupEditorViewControllerDelegate-Protocol.h>
#import <HomeUI/HUServiceLikeItemDetailsViewControllerProtocol-Protocol.h>
#import <HomeUI/HUSoftwareUpdateItemModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>
#import <HomeUI/HUTriggerEditorDelegate-Protocol.h>
#import <HomeUI/UIGestureRecognizerDelegate-Protocol.h>
#import <HomeUI/UINavigationControllerDelegate-Protocol.h>

@class HFItem, HFNamingComponents, HMHome, HUAccessorySettingsItemModuleController, HUAssociatedSceneAndTriggerModuleController, HUAvailableRelatedTriggerItemModuleController, HUChildServiceItemModuleController, HUControlPanelController, HUNameItemModuleController, HUQuickControlProxHandOffSummaryViewUpdater, HUQuickControlSummaryNavigationBarTitleView, HUServiceDetailsItemManager, HUServiceDetailsTextViewDelegate, HUSoftwareUpdateItemModuleController, HUTelevisionSettingsItemModuleController, NAFuture, NSHashTable, NSString, UIButton, UILongPressGestureRecognizer;
@protocol HFServiceLikeItem, HUPresentationDelegate;

@interface HUServiceDetailsViewController : HUItemTableViewController <HUControlPanelControllerDelegate, HUPresentationDelegate, HUServiceDetailsItemManagerDelegate, HUSwitchCellDelegate, HUServiceGroupEditorViewControllerDelegate, HUContainedServiceGridViewControllerDelegate, HUEditRoomViewControllerPresentationDelegate, HUTriggerEditorDelegate, HFAccessoryObserver, UIGestureRecognizerDelegate, HUAccessorySettingsItemModuleControllerDelegate, HUSoftwareUpdateItemModuleControllerDelegate, HUMediaSystemEditorViewControllerDelegate, HUContainedMediaAccessoriesGridViewControllerDelegate, HUChildServiceModuleControllerDelegate, HFHomeObserver, HUPickerCellDelegate, HUHomeAssistantDeviceSplitAccountActionDelegate, UINavigationControllerDelegate, HUDetailsPresentationDelegateHost, HUServiceLikeItemDetailsViewControllerProtocol>
{
    _Bool _requiresPresentingViewControllerDismissal;
    _Bool _shouldIncludeRoomNameInHeaderTitle;
    _Bool _isMultiServiceAccessory;
    _Bool _isItemGroup;
    _Bool _supportsCustomIconEditing;
    _Bool _shouldTrackProgrammableSwitchActivations;
    _Bool _isPresentingRoomsList;
    id <HUPresentationDelegate> _presentationDelegate;
    HUNameItemModuleController *_nameItemModuleController;
    HUAccessorySettingsItemModuleController *_accessorySettingsItemModuleController;
    HUSoftwareUpdateItemModuleController *_softwareUpdateItemModuleController;
    HUAvailableRelatedTriggerItemModuleController *_associatedTriggerModuleController;
    HUChildServiceItemModuleController *_valveEditorItemModuleController;
    HUChildServiceItemModuleController *_accessoryServicesEditorItemModuleController;
    HUAssociatedSceneAndTriggerModuleController *_sceneAndTriggerModuleController;
    HUTelevisionSettingsItemModuleController *_televisionSettingsItemModuleController;
    HUChildServiceItemModuleController *_inputSourceItemModuleController;
    HUServiceDetailsItemManager *_detailsItemManager;
    HUControlPanelController *_controlPanelController;
    NSHashTable *_expandedControlPanelItems;
    HMHome *_home;
    UILongPressGestureRecognizer *_longPressRecognizer;
    HUServiceDetailsTextViewDelegate *_textViewDelegate;
    HFNamingComponents *_namingComponent;
    HUQuickControlSummaryNavigationBarTitleView *_navigationBarTitleView;
    HUQuickControlProxHandOffSummaryViewUpdater *_proxHandOffSummaryViewUpdater;
    UIButton *_closeButton;
    NAFuture *_accountFuture;
}

+ (id)acceptableItemClasses;
- (void).cxx_destruct;
@property(retain, nonatomic) NAFuture *accountFuture; // @synthesize accountFuture=_accountFuture;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) _Bool isPresentingRoomsList; // @synthesize isPresentingRoomsList=_isPresentingRoomsList;
@property(nonatomic) _Bool shouldTrackProgrammableSwitchActivations; // @synthesize shouldTrackProgrammableSwitchActivations=_shouldTrackProgrammableSwitchActivations;
@property(retain, nonatomic) HUQuickControlProxHandOffSummaryViewUpdater *proxHandOffSummaryViewUpdater; // @synthesize proxHandOffSummaryViewUpdater=_proxHandOffSummaryViewUpdater;
@property(retain, nonatomic) HUQuickControlSummaryNavigationBarTitleView *navigationBarTitleView; // @synthesize navigationBarTitleView=_navigationBarTitleView;
@property(retain, nonatomic) HFNamingComponents *namingComponent; // @synthesize namingComponent=_namingComponent;
@property(retain, nonatomic) HUServiceDetailsTextViewDelegate *textViewDelegate; // @synthesize textViewDelegate=_textViewDelegate;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(readonly, nonatomic) _Bool supportsCustomIconEditing; // @synthesize supportsCustomIconEditing=_supportsCustomIconEditing;
@property(readonly, nonatomic) _Bool isItemGroup; // @synthesize isItemGroup=_isItemGroup;
@property(readonly, nonatomic) _Bool isMultiServiceAccessory; // @synthesize isMultiServiceAccessory=_isMultiServiceAccessory;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSHashTable *expandedControlPanelItems; // @synthesize expandedControlPanelItems=_expandedControlPanelItems;
@property(readonly, nonatomic) HUControlPanelController *controlPanelController; // @synthesize controlPanelController=_controlPanelController;
@property(nonatomic) __weak HUServiceDetailsItemManager *detailsItemManager; // @synthesize detailsItemManager=_detailsItemManager;
@property(retain, nonatomic) HUChildServiceItemModuleController *inputSourceItemModuleController; // @synthesize inputSourceItemModuleController=_inputSourceItemModuleController;
@property(retain, nonatomic) HUTelevisionSettingsItemModuleController *televisionSettingsItemModuleController; // @synthesize televisionSettingsItemModuleController=_televisionSettingsItemModuleController;
@property(retain, nonatomic) HUAssociatedSceneAndTriggerModuleController *sceneAndTriggerModuleController; // @synthesize sceneAndTriggerModuleController=_sceneAndTriggerModuleController;
@property(retain, nonatomic) HUChildServiceItemModuleController *accessoryServicesEditorItemModuleController; // @synthesize accessoryServicesEditorItemModuleController=_accessoryServicesEditorItemModuleController;
@property(retain, nonatomic) HUChildServiceItemModuleController *valveEditorItemModuleController; // @synthesize valveEditorItemModuleController=_valveEditorItemModuleController;
@property(retain, nonatomic) HUAvailableRelatedTriggerItemModuleController *associatedTriggerModuleController; // @synthesize associatedTriggerModuleController=_associatedTriggerModuleController;
@property(retain, nonatomic) HUSoftwareUpdateItemModuleController *softwareUpdateItemModuleController; // @synthesize softwareUpdateItemModuleController=_softwareUpdateItemModuleController;
@property(retain, nonatomic) HUAccessorySettingsItemModuleController *accessorySettingsItemModuleController; // @synthesize accessorySettingsItemModuleController=_accessorySettingsItemModuleController;
@property(retain, nonatomic) HUNameItemModuleController *nameItemModuleController; // @synthesize nameItemModuleController=_nameItemModuleController;
@property(nonatomic) _Bool shouldIncludeRoomNameInHeaderTitle; // @synthesize shouldIncludeRoomNameInHeaderTitle=_shouldIncludeRoomNameInHeaderTitle;
@property(nonatomic) _Bool requiresPresentingViewControllerDismissal; // @synthesize requiresPresentingViewControllerDismissal=_requiresPresentingViewControllerDismissal;
@property(nonatomic) __weak id <HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (_Bool)_canShowWhileLocked;
- (void)_setDismissedHomePodHasNonMemberMediaAccountWarning:(_Bool)arg1;
- (void)didSelectHomeAssistantDeviceSplitAccountAction:(unsigned long long)arg1;
- (void)_didRemoveHomeKitObject:(id)arg1;
- (void)accessoryDidUpdateServices:(id)arg1;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveMediaSystem:(id)arg2;
- (id)_recoverItemBuilder:(id)arg1 fromError:(id)arg2;
- (void)didSelectHeaderWarningAction:(id)arg1;
- (void)_executeSilentSoftwareUpdateCheck;
- (void)_offerToCreateHomeTheaterIfPossible:(id)arg1;
- (_Bool)_notifyOfHomeTheaterReconfigurationIfNecessary:(id)arg1;
- (void)_notifyOfHomePodPairingIfNecessary:(id)arg1;
- (void)_didSelectRoomItem:(id)arg1;
- (void)_separateOrUnifyTile;
- (void)_presentGroupPicker;
- (void)_presentContainedItems;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)childServiceEditorModuleController:(id)arg1 didSelectItem:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 navigateToViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 dismissViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 presentViewController:(id)arg2;
- (void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
- (void)_setupProgrammableSwitchCell:(id)arg1 forItem:(id)arg2;
- (void)dismissTriggerActionEditorViewController:(id)arg1;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (_Bool)triggerEditor:(id)arg1 shouldCommitTriggerBuilder:(id)arg2;
- (void)_presentTriggerEditorForProgrammableSwitchEventOptionItem:(id)arg1;
- (id)_roomForItem:(id)arg1;
- (void)_presentRemoveRouterConfirmation;
- (_Bool)_shouldPresentRemoveRouterConfirmation;
- (void)_presentRemoveConfirmation:(id)arg1;
- (void)_presentResetHomePodConfirmation:(id)arg1;
- (void)_restartGroupedHomePodAccessory;
- (void)checkForAccessoriesNeedingReprovisioning;
- (_Bool)_shouldShowAddButtonForOptionItem:(id)arg1;
- (_Bool)_shouldShowDetailDisclosureForItem:(id)arg1;
- (_Bool)_allowRowHighlightForItem:(id)arg1;
- (_Bool)_allowRowSelectionForItem:(id)arg1;
- (void)_longPressRecognized:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)editRoomViewControllerDidFinish:(id)arg1 withNewRoom:(id)arg2;
- (id)detailsViewControllerForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (_Bool)hasDetailsActionForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (id)detailsViewControllerForContainedMediaAccessoryGridViewController:(id)arg1 item:(id)arg2;
- (id)_magicallyUpdateNavigationStackForNewRootItem:(id)arg1 topViewController:(id)arg2;
- (void)serviceGroupEditor:(id)arg1 didCreateServiceGroup:(id)arg2;
- (void)mediaSystemEditor:(id)arg1 didAbortMediaSystemCreationDueToAccessoryNeedingUpdate:(id)arg2;
- (void)mediaSystemEditor:(id)arg1 didCreateMediaSystem:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;
- (void)controlPanelController:(id)arg1 didEndPossibleWritesForControlItem:(id)arg2;
- (void)controlPanelController:(id)arg1 willBeginPossibleWritesForControlItem:(id)arg2;
- (id)_characteristicsAffectedByControlItem:(id)arg1;
- (id)pickerViewCell:(id)arg1 titleForValueAtIndex:(long long)arg2;
- (void)pickerViewCell:(id)arg1 didSelectValueAtIndex:(long long)arg2;
- (long long)numberOfValuesForPickerViewCell:(id)arg1;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (id)itemManager:(id)arg1 sectionFooterForControlPanelItem:(id)arg2 forServiceItem:(id)arg3;
- (id)itemManager:(id)arg1 sectionTitleForControlPanelItem:(id)arg2 forServiceItem:(id)arg3;
- (_Bool)itemManager:(id)arg1 shouldShowSectionTitleForControlPanelItem:(id)arg2;
- (_Bool)itemManager:(id)arg1 shouldShowControlPanelItem:(id)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)_isCameraItem;
- (void)dismissPrivacyController;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)_updateAssociatedServiceTypeCells;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)_updateName:(id)arg1;
- (id)_createMenuWithValues:(id)arg1 cell:(id)arg2 currentItem:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)itemModuleControllers;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)_secondaryStatusTextForLatestResults:(id)arg1;
- (id)_primaryStatusTextForLatestResults:(id)arg1 showingSecondaryStatus:(_Bool)arg2;
- (void)_updateIconDescriptorAnimated:(_Bool)arg1;
- (void)_updateControlStatusText;
- (_Bool)automaticallyUpdatesViewControllerTitle;
@property(readonly, nonatomic) HFItem<HFServiceLikeItem> *item;
- (void)addRoomButtonPressed:(id)arg1;
- (void)_updateCheckedStateForAssociatedServiceTypeCell:(id)arg1 item:(id)arg2;
- (void)_restartHomePod;
- (id)_removeItem;
- (id)_commitBuilder;
- (void)_closeButtonPressed:(id)arg1;
- (void)commitChanges;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithServiceLikeItem:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

