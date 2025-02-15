//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXJSONObjectTransforming-Protocol.h>

@class NSString;

@interface SXJSONObjectTransformer : NSObject <SXJSONObjectTransforming>
{
    NSString *_key;
    CDUnknownBlockType _block;
}

+ (id)mergingTransformerWithKey:(id)arg1;
+ (id)concatenatingTransformerWithKey:(id)arg1;
+ (id)transformerWithKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)transformKey:(id)arg1;
- (id)transformObject:(id)arg1 otherObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

