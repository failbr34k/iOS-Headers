//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface AFUIDebugLog : NSObject
{
    NSData *_data;
    NSString *_mimeType;
    NSString *_name;
}

+ (id)logWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(_Bool)arg4;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(_Bool)arg4;

@end

