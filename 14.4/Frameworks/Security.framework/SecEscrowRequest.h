//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Security/SecEscrowRequestable-Protocol.h>

@class NSString, NSXPCConnection;

@interface SecEscrowRequest : NSObject <SecEscrowRequestable>
{
    NSXPCConnection *_connection;
}

+ (id)request:(id *)arg1;
- (void).cxx_destruct;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)pendingEscrowUpload:(id *)arg1;
- (unsigned long long)storePrerecordsInEscrow:(id *)arg1;
- (_Bool)resetAllRequests:(id *)arg1;
- (id)fetchStatuses:(id *)arg1;
- (id)fetchRequestWaitingOnPasscode:(id *)arg1;
- (id)fetchPrerecord:(id)arg1 error:(id *)arg2;
- (_Bool)cachePrerecord:(id)arg1 serializedPrerecord:(id)arg2 error:(id *)arg3;
- (_Bool)triggerEscrowUpdate:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

