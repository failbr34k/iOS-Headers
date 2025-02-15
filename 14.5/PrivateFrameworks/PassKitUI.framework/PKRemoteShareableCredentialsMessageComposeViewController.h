//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <PassKitUI/PKRemoteShareableCredentialsMessageComposeViewControllerProtocol-Protocol.h>

@class NSString;
@protocol PKShareableCredentialsMessageComposeViewControllerDelegate;

@interface PKRemoteShareableCredentialsMessageComposeViewController : _UIRemoteViewController <PKRemoteShareableCredentialsMessageComposeViewControllerProtocol>
{
    _Bool _finished;
    id <PKShareableCredentialsMessageComposeViewControllerDelegate> _delegate;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (_Bool)shouldPropagateAppearanceCustomizations;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PKShareableCredentialsMessageComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)messageComposeViewControllerDidFinishWithResult:(_Bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

