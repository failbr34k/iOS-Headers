//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface IMDMessageActiveDevice : NSObject
{
    _Bool _hasReceivedReadReceipt;
    NSString *_idsDestination;
    NSDate *_latestActiveDate;
    NSDate *_latestReadReceipt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *latestReadReceipt; // @synthesize latestReadReceipt=_latestReadReceipt;
@property(nonatomic) _Bool hasReceivedReadReceipt; // @synthesize hasReceivedReadReceipt=_hasReceivedReadReceipt;
@property(retain, nonatomic) NSDate *latestActiveDate; // @synthesize latestActiveDate=_latestActiveDate;
@property(retain, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
- (id)description;
- (_Bool)shouldDisplayRemoteDecryptionFailure;
- (_Bool)shouldDisplayAttachmentDownloadFailure;
- (_Bool)shouldSendTypingIndicator;
- (_Bool)_hasReceivedReadReceiptRecently;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIDSDestination:(id)arg1 latestDate:(id)arg2 latestReadReceiptDate:(id)arg3 hasReceivedReadReceipt:(_Bool)arg4;

@end

