//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TeaSnappy/NSObject-Protocol.h>

@class NSNumber, NSString, UIScrollView;

@protocol SNTestCoordinating <NSObject>
@property(readonly, nonatomic) NSString *launchTestName;
- (void)recapScrollTestWithTestName:(NSString *)arg1 scrollView:(UIScrollView *)arg2 numberOfScreens:(NSNumber *)arg3 direction:(unsigned long long)arg4;
- (void)scrollTestWithTestName:(NSString *)arg1 scrollView:(UIScrollView *)arg2 iterations:(long long)arg3 offset:(long long)arg4 numberOfScreens:(long long)arg5 direction:(unsigned long long)arg6;
- (void)scrollTestWithTestName:(NSString *)arg1 scrollView:(UIScrollView *)arg2 iterations:(long long)arg3 offset:(long long)arg4 direction:(unsigned long long)arg5;
- (void)rotateToOrientation:(long long)arg1 beforeRotation:(void (^)(_Bool))arg2 afterRotation:(void (^)(_Bool))arg3;
- (_Bool)requiresRotationForOrientation:(long long)arg1;
- (void)failedTestWithTestName:(NSString *)arg1 failureMessage:(NSString *)arg2;
- (void)finishedTestWithTestName:(NSString *)arg1 waitForCommit:(_Bool)arg2;
- (void)startedTestWithTestName:(NSString *)arg1;
@end

