//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSCurationDebugObject.h>

@protocol CLSInvestigationItem;

@interface CLSCurationDebugItem : CLSCurationDebugObject
{
    unsigned long long _dedupingType;
    CLSCurationDebugItem *_dedupedDebugItem;
    id <CLSInvestigationItem> _item;
}

+ (id)stringForDedupingType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <CLSInvestigationItem> item; // @synthesize item=_item;
- (void)dupeToDebugItem:(id)arg1 withDedupingType:(unsigned long long)arg2;
- (id)identifier;
- (id)timestamp;
- (id)dictionaryRepresentation;
- (id)initWithItem:(id)arg1;

@end

