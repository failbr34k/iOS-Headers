//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@class NSNumber;

@interface RTHintManagerNotificationDidUpdate : RTNotification
{
    NSNumber *_hintSourcesUpdated;
}

+ (id)sourcesUpdatedForHints:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *hintSourcesUpdated; // @synthesize hintSourcesUpdated=_hintSourcesUpdated;
- (id)description;
- (id)initWithHints:(id)arg1;

@end

