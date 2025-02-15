//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSCEAdditions)
- (id)tsce_stringByFoldingForNamedReferenceMatchingWithLocale:(id)arg1;
- (id)tsce_referenceComponentsSeparatedBySpace;
- (id)tsce_referenceComponentsSeparatedByColon;
- (id)ptsce_referenceComponentsSeparatedByCharacterInSet:(id)arg1;
- (id)tsce_referenceComponentsSeparatedByPathDelimiter;
- (id)tsce_stringByRemovingNewlines;
- (id)tsce_stringByReplacingTabsAndNewlinesWithASingleSpace;
- (id)tsce_newStringByAddingDoubleQuoteEscapesIfNecessary;
- (id)tsce_stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(_Bool)arg1 preserveTrailingUnquotedWhitespace:(_Bool)arg2;
- (id)tsce_stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(_Bool)arg1;
- (id)tsce_stringByUnescapingPartialQuotedString;
- (_Bool)tsce_isSingleQuoted;
- (id)tsce_stringByUnescapingSingleQuotes;
- (id)tsce_stringByUnescapingSingleQuotesAndGettingTrailingWhitespaceCount:(unsigned long long *)arg1;
- (id)tsce_newStringByAddingSingleQuoteEscapesIfNecessary;
- (id)tsce_stringByForcingSingleQuoteEscapes:(_Bool)arg1;
- (id)tsce_stringByAddingSingleQuoteEscapesIfNecessary;
- (id)tsce_stringByAddingSingleQuoteEscapes;
- (id)tsce_newStringByForcingSingleQuoteEscapes:(_Bool)arg1;
- (_Bool)tsce_needsReferenceSingleQuoteEscaping;
- (void)tsce_p_initializeQuotes;
- (_Bool)tsce_hasCaseInsensitivePrefix:(id)arg1 withLocale:(id)arg2;
- (long long)tsce_numericCompare:(id)arg1;
@end

