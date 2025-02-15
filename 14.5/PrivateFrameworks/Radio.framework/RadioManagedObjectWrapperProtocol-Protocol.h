//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Radio/NSObject-Protocol.h>

@class NSManagedObject, RadioModel;

@protocol RadioManagedObjectWrapperProtocol <NSObject>
@property(readonly, nonatomic) RadioModel *model;
@property(readonly, nonatomic) NSManagedObject *managedObject;
@property(readonly, nonatomic, getter=isDatabaseBacked) _Bool databaseBacked;
- (id)initWithModel:(RadioModel *)arg1 managedObject:(NSManagedObject *)arg2;
@end

