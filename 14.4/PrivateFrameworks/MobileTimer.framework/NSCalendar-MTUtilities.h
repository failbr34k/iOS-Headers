//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCalendar.h>

@interface NSCalendar (MTUtilities)
+ (unsigned long long)_optionsForBackwards:(_Bool)arg1;
+ (id)mtGregorianCalendar;
- (_Bool)mtDateRequiresSingularTimeString:(id)arg1;
- (id)_nextDateHelperAfterDate:(id)arg1 nextDateBlock:(CDUnknownBlockType)arg2;
- (id)_mtNextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3 backwards:(_Bool)arg4;
- (id)mtPreviousDateBeforeDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3;
- (id)mtNextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3;
- (id)_mtNextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 backwards:(_Bool)arg3;
- (id)mtPreviousDateBeforeDate:(id)arg1 matchingComponents:(id)arg2;
- (id)mtNextDateAfterDate:(id)arg1 matchingComponents:(id)arg2;
@end

