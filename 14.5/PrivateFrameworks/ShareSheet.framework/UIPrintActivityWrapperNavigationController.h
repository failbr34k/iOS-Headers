//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UINavigationController.h>

#import <ShareSheet/UIPrintInteractionControllerDelegate-Protocol.h>

@class NSString, UIPrintInteractionController;

@interface UIPrintActivityWrapperNavigationController : UINavigationController <UIPrintInteractionControllerDelegate>
{
    CDUnknownBlockType _completionHandler;
    _Bool _presentedPrintInteractionController;
    UIPrintInteractionController *_printInteractionController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPrintInteractionController *printInteractionController; // @synthesize printInteractionController=_printInteractionController;
@property(nonatomic) _Bool presentedPrintInteractionController; // @synthesize presentedPrintInteractionController=_presentedPrintInteractionController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPrintInteractionController:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

