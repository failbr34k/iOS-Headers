//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NFLocking-Protocol.h>

@protocol NFLocking;

@interface FCMTWriterLock : NSObject <NFLocking>
{
    id <NFLocking> _underlyingLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <NFLocking> underlyingLock; // @synthesize underlyingLock=_underlyingLock;
- (void)unlock;
- (void)lock;
- (void)performWriteSync:(CDUnknownBlockType)arg1;
- (void)performReadSync:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithUnderlyingLock:(id)arg1;

@end

