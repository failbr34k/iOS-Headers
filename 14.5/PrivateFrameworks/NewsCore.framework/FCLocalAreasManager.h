//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCLocalAreasManager-Protocol.h>

@class FCAsyncSerialQueue, FCLocalAreasMapping;
@protocol FCContentContext, FCLocalAreasProvider;

@interface FCLocalAreasManager : NSObject <FCLocalAreasManager>
{
    FCAsyncSerialQueue *_queue;
    FCLocalAreasMapping *_localAreasMapping;
    id <FCContentContext> _contentContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(retain, nonatomic) FCLocalAreasMapping *localAreasMapping; // @synthesize localAreasMapping=_localAreasMapping;
@property(retain, nonatomic) FCAsyncSerialQueue *queue; // @synthesize queue=_queue;
- (void)fetchLocalAreasProvider:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <FCLocalAreasProvider> possiblyUnfetchedLocalAreasProvider;
- (id)initWithContentContext:(id)arg1;

@end

