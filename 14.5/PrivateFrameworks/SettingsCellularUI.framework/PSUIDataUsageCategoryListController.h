//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier, PSUIDataUsageCategorySpecifier;

__attribute__((visibility("hidden")))
@interface PSUIDataUsageCategoryListController : PSListController
{
    PSUIDataUsageCategorySpecifier *_parentSpecifier;
    PSSpecifier *_spinnerSpecifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PSSpecifier *spinnerSpecifier; // @synthesize spinnerSpecifier=_spinnerSpecifier;
@property(retain, nonatomic) PSUIDataUsageCategorySpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
- (_Bool)shouldReloadSpecifiersOnResume;
- (id)specifiers;
- (id)init;

@end

