//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString, NSURL;

@protocol CRKStudentDaemonXPCInterface
- (void)fetchSetOfActiveRestrictionUUIDsForClientType:(NSString *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)fetchResourceFromURL:(NSURL *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)studentDidAuthenticate:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setActiveStudentIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchConfiguration:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setConfiguration:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchAdHocConfiguration:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setAdHocConfiguration:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchConfigurationType:(void (^)(unsigned long long, NSError *))arg1;
@end

