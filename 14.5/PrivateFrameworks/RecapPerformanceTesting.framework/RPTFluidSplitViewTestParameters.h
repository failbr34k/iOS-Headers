//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RecapPerformanceTesting/RPTTestParameters-Protocol.h>
#import <RecapPerformanceTesting/_RPTCoordinateSpaces-Protocol.h>

@class NSString, RPTCoordinateSpaceConverter, UISplitViewController, UIViewController;

@interface RPTFluidSplitViewTestParameters : NSObject <_RPTCoordinateSpaces, RPTTestParameters>
{
    UISplitViewController *_splitViewController;
    UIViewController *_supplementalController;
    UIViewController *_primaryController;
    RPTCoordinateSpaceConverter *_conversion;
    NSString *_testName;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *testName; // @synthesize testName=_testName;
@property(retain, nonatomic) RPTCoordinateSpaceConverter *conversion; // @synthesize conversion=_conversion;
@property(readonly, copy, nonatomic) CDUnknownBlockType composerBlock;
- (void)prepareWithComposer:(id)arg1;
- (id)initWithTestName:(id)arg1 splitViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool managesTestStartAndEnd;
@property(readonly) Class superclass;

@end

