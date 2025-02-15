//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class CertificateViewController;
@protocol TrustCertificateViewControllerDelegate;

@interface TrustCertificateViewController : UINavigationController
{
    _Bool _allowCertificateTrust;
    id <TrustCertificateViewControllerDelegate> _trustCertificateDelegate;
    CertificateViewController *_certificateViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CertificateViewController *certificateViewController; // @synthesize certificateViewController=_certificateViewController;
@property(nonatomic) _Bool allowCertificateTrust; // @synthesize allowCertificateTrust=_allowCertificateTrust;
@property(nonatomic) __weak id <TrustCertificateViewControllerDelegate> trustCertificateDelegate; // @synthesize trustCertificateDelegate=_trustCertificateDelegate;
- (void)setShowCertificateButton:(_Bool)arg1 localizedTitle:(id)arg2 localizedDescription:(id)arg3 destructive:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
- (void)setCertificateInfo:(id)arg1 issuer:(id)arg2 purpose:(id)arg3 expiration:(id)arg4 isRoot:(_Bool)arg5 properties:(id)arg6 action:(int)arg7;
- (void)_accept;
- (void)_cancel;
- (void)_dismissWithResult:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)_setupNavItem;
- (id)initWithTrust:(struct __SecTrust *)arg1 action:(int)arg2 delegate:(id)arg3 allowTrust:(_Bool)arg4;
- (id)initWithTrust:(struct __SecTrust *)arg1 action:(int)arg2 delegate:(id)arg3;
- (id)initWithTrustCertificateDelegate:(id)arg1 allowTrust:(_Bool)arg2;
- (id)initWithTrustCertificateDelegate:(id)arg1;

@end

