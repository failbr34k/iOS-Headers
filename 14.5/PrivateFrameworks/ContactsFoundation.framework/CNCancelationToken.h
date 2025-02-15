//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNCancelable-Protocol.h>
#import <ContactsFoundation/CNCancelationToken-Protocol.h>

@class NSMutableArray, NSString;

@interface CNCancelationToken : NSObject <CNCancelable, CNCancelationToken>
{
    _Bool _isCanceled;
    NSMutableArray *_cancelationBlocks;
}

+ (id)tokenWrappingCancelable:(id)arg1;
+ (id)tokenWithCancelationBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)callCancelationBlocks:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCanceled;
- (void)addCancelable:(id)arg1;
- (void)addCancelationBlock:(CDUnknownBlockType)arg1;
- (id)nts_cancel;
- (void)cancel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

