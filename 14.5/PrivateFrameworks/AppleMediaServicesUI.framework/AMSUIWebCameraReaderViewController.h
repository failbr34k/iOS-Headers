//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServicesUI/AMSUICommonViewController.h>

#import <AppleMediaServicesUI/AMSUIWebPagePresenter-Protocol.h>

@class AMSUIWebAppearance, AMSUIWebCameraReaderInfoView, AMSUIWebCameraReaderPageModel, AMSUIWebClientContext, CRCameraReader, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebCameraReaderViewController : AMSUICommonViewController <AMSUIWebPagePresenter>
{
    AMSUIWebAppearance *_appearance;
    CRCameraReader *_cameraController;
    AMSUIWebClientContext *_context;
    AMSUIWebCameraReaderInfoView *_infoView;
    AMSUIWebCameraReaderPageModel *_model;
    NSDictionary *_output;
}

+ (_Bool)cameraSupported;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *output; // @synthesize output=_output;
@property(retain, nonatomic) AMSUIWebCameraReaderPageModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AMSUIWebCameraReaderInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) CRCameraReader *cameraController; // @synthesize cameraController=_cameraController;
@property(retain, nonatomic) AMSUIWebAppearance *appearance; // @synthesize appearance=_appearance;
- (void)_handleCameraOutput:(id)arg1 error:(id)arg2;
- (void)_applyAppearance;
- (id)_outputForGiftCardReaderObjects:(id)arg1;
- (void)_layoutPageForGiftCard;
- (void)_setupPageForGiftCard;
- (void)_setupPageForCreditCard;
- (id)_outputForCreditCardReaderObjects:(id)arg1;
- (void)_layoutPageForCreditCard;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

