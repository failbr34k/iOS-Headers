//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TUCommandType-Protocol.h"

@class NSString;
@protocol FCTagProviding;

@interface FRFollowChannelCommand : NSObject <TUCommandType>
{
    id <FCTagProviding> _tag;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FCTagProviding> tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) NSObject *context;
@property(readonly, nonatomic) Class contextClass;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithContext:(id)arg1;

@end

