//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, PKNFCTagReaderSession;

@protocol PKNFCTagReaderSessionDelegate <NSObject>

@optional
- (void)nfcTagReaderSessionDidEndUnexpectedly:(PKNFCTagReaderSession *)arg1;
- (void)nfcTagReaderSession:(PKNFCTagReaderSession *)arg1 didDetectTags:(NSArray *)arg2;
@end

