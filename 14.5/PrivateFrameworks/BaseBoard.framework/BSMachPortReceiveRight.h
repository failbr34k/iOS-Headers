//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSMachPortRight.h>

@interface BSMachPortReceiveRight : BSMachPortRight
{
}

+ (void)_unsafe_destroyPort:(unsigned int)arg1;
+ (_Bool)_unsafe_isUsablePort:(unsigned int)arg1;
+ (unsigned int)_unsafe_decodePort:(id)arg1;
+ (struct _xpc_type_s *)_decodeType;
+ (id)_rightDescription;
- (id)_lock_encodePort:(unsigned int)arg1;
- (id)initWithPort:(unsigned int)arg1;
- (id)init;

@end

