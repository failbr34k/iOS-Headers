//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HKUnitTestingTaskServerInterface-Protocol.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSSet, NSString;

@protocol HKKeyValueDomainServerInterface <HKUnitTestingTaskServerInterface>
- (void)remote_allValuesWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)remote_dataForKey:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)remote_stringForKey:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)remote_dateForKey:(NSString *)arg1 completion:(void (^)(NSDate *, NSError *))arg2;
- (void)remote_numberForKey:(NSString *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)remote_removeValuesForKeys:(NSSet *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_setValueForAllKeys:(id)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_setValuesWithDictionary:(NSDictionary *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_setData:(NSData *)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_setString:(NSString *)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_setDate:(NSDate *)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_setNumber:(NSNumber *)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

