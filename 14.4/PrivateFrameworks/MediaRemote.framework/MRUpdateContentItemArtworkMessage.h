//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlayerPath, NSArray;

@interface MRUpdateContentItemArtworkMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) NSArray *contentItems;
@property(readonly, nonatomic) MRPlayerPath *playerPath;
- (id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2;

@end

