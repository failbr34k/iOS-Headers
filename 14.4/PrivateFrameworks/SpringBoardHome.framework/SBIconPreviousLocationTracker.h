//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, SBHIconModel;

@interface SBIconPreviousLocationTracker : NSObject
{
    NSMapTable *_previousIconLocations;
    SBHIconModel *_iconModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBHIconModel *iconModel; // @synthesize iconModel=_iconModel;
- (id)previousLocationInfoForIcon:(id)arg1;
- (void)captureLocationInfoForIcon:(id)arg1 inModel:(id)arg2;

@end

