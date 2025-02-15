//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSString, VCUIShortcutViewController, WFConfiguredTrigger, WFWorkflow, WFWorkflowReference;

@protocol VCUIShortcutViewControllerDelegate <NSObject>
- (void)shortcutViewControllerDidCancel:(VCUIShortcutViewController *)arg1;

@optional
- (void)shortcutViewController:(VCUIShortcutViewController *)arg1 didFinishWithName:(NSString *)arg2;
- (void)shortcutViewController:(VCUIShortcutViewController *)arg1 didDeleteShortcut:(WFWorkflowReference *)arg2;
- (void)shortcutViewController:(VCUIShortcutViewController *)arg1 didSaveShortcut:(WFWorkflow *)arg2;
- (void)shortcutViewController:(VCUIShortcutViewController *)arg1 didCreateShortcut:(WFWorkflow *)arg2 withTrigger:(WFConfiguredTrigger *)arg3;
- (void)shortcutViewController:(VCUIShortcutViewController *)arg1 didCreateShortcut:(WFWorkflow *)arg2;
@end

