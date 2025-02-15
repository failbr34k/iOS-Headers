//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSExtensionRequestHandling-Protocol.h>

@class NSExtensionContext, NSString;

@interface UIPrintServiceExtension : NSObject <NSExtensionRequestHandling>
{
    NSExtensionContext *_extensionContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void)_respondWithResults:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)printerDestinationsForPrintInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

