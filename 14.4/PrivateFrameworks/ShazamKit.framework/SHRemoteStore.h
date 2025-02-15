//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShazamKit/SHStore.h>

@class NSString;

@interface SHRemoteStore : SHStore
{
    NSString *_partnerName;
    NSString *_installationID;
}

+ (_Bool)validateInstallationID:(id)arg1;
+ (_Bool)validatePartnerName:(id)arg1;
+ (id)new;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *installationID; // @synthesize installationID=_installationID;
@property(readonly, copy, nonatomic) NSString *partnerName; // @synthesize partnerName=_partnerName;
- (id)createMatcher;
- (id)initWithPartnerName:(id)arg1 installationID:(id)arg2;
- (id)initWithPartnerName:(id)arg1;
- (id)init;

@end

