//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKPaymentTransactionPresentationInformation : NSObject
{
    _Bool _destructiveSecondaryString;
    _Bool _shouldGrayValue;
    _Bool _shouldStrikeValue;
    _Bool _shouldShowDisclosure;
    NSString *_primaryString;
    NSString *_secondaryString;
    NSString *_tertiaryString;
    NSString *_rewardsString;
    NSString *_valueString;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowDisclosure; // @synthesize shouldShowDisclosure=_shouldShowDisclosure;
@property(nonatomic) _Bool shouldStrikeValue; // @synthesize shouldStrikeValue=_shouldStrikeValue;
@property(nonatomic) _Bool shouldGrayValue; // @synthesize shouldGrayValue=_shouldGrayValue;
@property(retain, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(retain, nonatomic) NSString *rewardsString; // @synthesize rewardsString=_rewardsString;
@property(nonatomic) _Bool destructiveSecondaryString; // @synthesize destructiveSecondaryString=_destructiveSecondaryString;
@property(retain, nonatomic) NSString *tertiaryString; // @synthesize tertiaryString=_tertiaryString;
@property(retain, nonatomic) NSString *secondaryString; // @synthesize secondaryString=_secondaryString;
@property(retain, nonatomic) NSString *primaryString; // @synthesize primaryString=_primaryString;

@end

