//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSCarPlayApplicationIcon-Protocol.h>

@class NSData, NSString;

@interface _SBSCarPlayApplicationInfo : NSObject <SBSCarPlayApplicationIcon>
{
    NSData *_iconImageData;
    double _iconImageScale;
    NSString *_localizedDisplayName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property(nonatomic) double iconImageScale; // @synthesize iconImageScale=_iconImageScale;
@property(retain, nonatomic) NSData *iconImageData; // @synthesize iconImageData=_iconImageData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

