//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/_DASExtensionRunner-Protocol.h>

@class MLBackgroundTask, NSString;
@protocol NSObject;

@interface MLBackgroundRunner : NSObject <_DASExtensionRunner>
{
    NSString *_activity;
    MLBackgroundTask *_task;
    id <NSObject> _dataSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NSObject> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) MLBackgroundTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) NSString *activity; // @synthesize activity=_activity;
- (_Bool)createExtensionDataSourceWithInfoKey:(id)arg1 conformingToProtocol:(id)arg2;

@end

