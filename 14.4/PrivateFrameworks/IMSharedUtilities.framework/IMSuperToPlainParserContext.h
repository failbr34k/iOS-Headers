//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMFromSuperParserContext.h>

@class NSMutableString, NSString;

@interface IMSuperToPlainParserContext : IMFromSuperParserContext
{
    NSMutableString *_plainString;
    _Bool _extractLinks;
    NSMutableString *_mutablePlainString;
}

@property(readonly, nonatomic) NSMutableString *mutablePlainString; // @synthesize mutablePlainString=_mutablePlainString;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 characters:(id)arg4;
@property(readonly, nonatomic) NSString *plainString;
- (id)resultsForLogging;
- (id)name;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 extractLinks:(_Bool)arg2;
- (id)initWithAttributedString:(id)arg1;

@end

