//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/NSObject-Protocol.h>

@class CRKCardSectionViewConfiguration;
@protocol CRCardSection;

@protocol CRKCardSectionViewSourcing <NSObject>
- (_Bool)cardSectionShouldBeDisplayed:(id <CRCardSection>)arg1;
- (CRKCardSectionViewConfiguration *)viewConfigurationForCardSection:(id <CRCardSection>)arg1;
@end

