//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSArray, NSNumber;

@interface AATrustedDeviceListResponse : AAResponse
{
    NSArray *_devices;
    NSNumber *_defaultNumberOfDevicesToShow;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *defaultNumberOfDevicesToShow; // @synthesize defaultNumberOfDevicesToShow=_defaultNumberOfDevicesToShow;
@property(readonly, nonatomic) NSArray *devices; // @synthesize devices=_devices;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

