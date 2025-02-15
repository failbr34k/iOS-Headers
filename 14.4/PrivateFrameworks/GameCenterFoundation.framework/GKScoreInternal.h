//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSDate, NSString;

@interface GKScoreInternal : GKInternalRepresentation
{
    GKPlayerInternal *_player;
    NSString *_leaderboardIdentifier;
    NSString *_groupLeaderboardIdentifier;
    NSString *_formattedValue;
    NSDate *_date;
    long long _value;
    unsigned long long _context;
    unsigned int _rank;
    _Bool _valueSet;
}

+ (id)secureCodedPropertyKeys;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool valueSet; // @synthesize valueSet=_valueSet;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *formattedValue; // @synthesize formattedValue=_formattedValue;
@property(retain, nonatomic) NSString *groupLeaderboardIdentifier; // @synthesize groupLeaderboardIdentifier=_groupLeaderboardIdentifier;
@property(retain, nonatomic) NSString *leaderboardIdentifier; // @synthesize leaderboardIdentifier=_leaderboardIdentifier;
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)serverRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSString *groupCategory;
@property(retain, nonatomic) NSString *category;
@property(readonly, nonatomic) NSString *playerID;

@end

