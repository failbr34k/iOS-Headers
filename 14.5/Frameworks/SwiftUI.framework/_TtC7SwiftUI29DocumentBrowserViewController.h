//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIDocumentBrowserViewController.h>

#import <SwiftUI/UIDocumentBrowserViewControllerDelegate-Protocol.h>
#import <SwiftUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI29DocumentBrowserViewController : UIDocumentBrowserViewController <UIDocumentBrowserViewControllerDelegate, UIViewControllerTransitioningDelegate>
{
    MISSING_TYPE *documentConfigurations;
    MISSING_TYPE *rootModifier;
    MISSING_TYPE *configurationMap;
}

- (void).cxx_destruct;
- (id)initForOpeningContentTypes:(id)arg1;
- (id)initForOpeningFilesWithContentTypes:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)documentBrowser:(id)arg1 failedToImportDocumentAtURL:(id)arg2 error:(id)arg3;
- (void)documentBrowser:(id)arg1 didImportDocumentAtURL:(id)arg2 toDestinationURL:(id)arg3;
- (void)documentBrowser:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentBrowser:(id)arg1 didRequestDocumentCreationWithHandler:(CDUnknownBlockType)arg2;
- (id)initWithCoder:(id)arg1;

@end

