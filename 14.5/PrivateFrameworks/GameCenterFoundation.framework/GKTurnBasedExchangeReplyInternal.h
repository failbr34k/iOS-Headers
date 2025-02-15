//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSData, NSDate, NSDictionary;

@interface GKTurnBasedExchangeReplyInternal : GKInternalRepresentation
{
    NSDictionary *_localizableMessage;
    NSData *_data;
    NSDate *_replyDate;
    unsigned char _recipientIndex;
}

+ (id)secureCodedPropertyKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *replyDate; // @synthesize replyDate=_replyDate;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSDictionary *localizableMessage; // @synthesize localizableMessage=_localizableMessage;
@property(nonatomic) unsigned char recipientIndex; // @synthesize recipientIndex=_recipientIndex;

@end

