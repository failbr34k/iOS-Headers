//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFPreferences;
@protocol SVXExpressionParsingServing;

__attribute__((visibility("hidden")))
@interface _SVXExpressionParser : NSObject
{
    id <SVXExpressionParsingServing> _parsingService;
    AFPreferences *_preferences;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AFPreferences *preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) id <SVXExpressionParsingServing> parsingService; // @synthesize parsingService=_parsingService;
- (id)initWithParsingService:(id)arg1 preferences:(id)arg2;

@end

