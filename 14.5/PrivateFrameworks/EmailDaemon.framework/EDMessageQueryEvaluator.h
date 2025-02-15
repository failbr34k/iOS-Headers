//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDMessagePersistence, EFQuery, EMMailboxScope, NSCache, NSString;

@interface EDMessageQueryEvaluator : NSObject <EFLoggable>
{
    EFQuery *_messageQuery;
    EDMessagePersistence *_messagePersistence;
    EMMailboxScope *_mailboxScope;
    NSCache *_spotlightPredicateCache;
}

+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *spotlightPredicateCache; // @synthesize spotlightPredicateCache=_spotlightPredicateCache;
@property(readonly, nonatomic) EMMailboxScope *mailboxScope; // @synthesize mailboxScope=_mailboxScope;
@property(readonly, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(readonly, nonatomic) EFQuery *messageQuery; // @synthesize messageQuery=_messageQuery;
- (id)filterMessages:(id)arg1 unmatchedMessages:(id *)arg2;
- (id)transformMessages:(id)arg1 includeDeleted:(_Bool)arg2;
- (id)transformMessages:(id)arg1;
- (id)transformAndFilterMessages:(id)arg1 includeDeleted:(_Bool)arg2;
- (id)transformAndFilterMessages:(id)arg1;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

