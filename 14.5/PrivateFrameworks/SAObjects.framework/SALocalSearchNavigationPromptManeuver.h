//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSNumber;

@interface SALocalSearchNavigationPromptManeuver : SADomainCommand
{
}

+ (id)navigationPromptManeuverWithDictionary:(id)arg1 context:(id)arg2;
+ (id)navigationPromptManeuver;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSNumber *maneuverIndex;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

