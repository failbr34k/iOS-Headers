//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServicesUI/AMSUIDynamicViewController.h>

#import <AppleMediaServicesUI/AMSBagConsumer-Protocol.h>

@class ACAccount, NSString;

@interface AMSUIBundleViewController : AMSUIDynamicViewController <AMSBagConsumer>
{
    ACAccount *account;
    NSString *_placement;
    NSString *_serviceType;
}

+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) NSString *placement; // @synthesize placement=_placement;
- (void)setAccount:(id)arg1;
- (id)account;
- (id)initWithServiceType:(id)arg1 placement:(id)arg2 account:(id)arg3 bag:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

