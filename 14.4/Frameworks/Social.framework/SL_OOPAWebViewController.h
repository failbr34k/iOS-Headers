//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Social/UIWebViewDelegate-Protocol.h>
#import <Social/UIWebViewPrivateDelegate-Protocol.h>
#import <Social/WKNavigationDelegate-Protocol.h>

@class NSObject, NSString, NSURL, SL_OOPASpinnerTitle, UIWebView, WKWebView;
@protocol SL_OOPAWebViewControllerDelegate, SL_OOPAuthFlowDelegate;

@interface SL_OOPAWebViewController : UIViewController <WKNavigationDelegate, UIWebViewDelegate, UIWebViewPrivateDelegate>
{
    WKWebView *_wkWebView;
    UIWebView *_uiWebView;
    SL_OOPASpinnerTitle *_spinnerTitleView;
    struct __CFURLStorageSession *_storageSession;
    _Bool _hidingWebView;
    _Bool _didLoadWebView;
    _Bool _didFinish;
    id <SL_OOPAWebViewControllerDelegate> _delegate;
    NSObject<SL_OOPAuthFlowDelegate> *_authFlowDelegate;
    NSURL *_authURL;
    NSString *_username;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSURL *authURL; // @synthesize authURL=_authURL;
@property(retain, nonatomic) NSObject<SL_OOPAuthFlowDelegate> *authFlowDelegate; // @synthesize authFlowDelegate=_authFlowDelegate;
@property(nonatomic) __weak id <SL_OOPAWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateNavigationPromptWithActiveURL:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)_evaluateDocumentTitleForWebView:(id)arg1 retryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)_evaluateDocumentTitleForUIWebView:(id)arg1 retryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)_didFinishWithSuccess:(_Bool)arg1 response:(id)arg2 error:(id)arg3;
- (void)_loadWebView;
- (void)_loadWebViewIfReady;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(copy, nonatomic) NSString *navBarTitle;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

