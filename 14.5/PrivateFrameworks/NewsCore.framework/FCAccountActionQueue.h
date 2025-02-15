//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCPersistentDictionary;

@interface FCAccountActionQueue : NSObject
{
    FCPersistentDictionary *_persistentDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FCPersistentDictionary *persistentDictionary; // @synthesize persistentDictionary=_persistentDictionary;
- (_Bool)popActionTypesUpToCount:(unsigned long long)arg1 setLocalDataHintIfNeeded:(_Bool)arg2;
- (id)peekAtActionTypes;
- (_Bool)enqueueActionWithType:(long long)arg1;
- (_Bool)readLocalDataHint;
- (id)initWithFileURL:(id)arg1;
- (id)init;

@end

