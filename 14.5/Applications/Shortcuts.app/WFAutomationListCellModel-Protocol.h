//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol WFAutomationListCellModel <NSObject>
- (void)actionIconsWithCompletion:(void (^)(NSArray *))arg1;
@property(nonatomic, copy) NSString *identifier;
@property(nonatomic, copy) NSString *subtitle;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, copy) UIImage *triggerIcon;
@end

