//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HDSQLiteVFS : NSObject
{
    struct sqlite3_vfs *_baseVFS;
    struct sqlite3_vfs *_customVFS;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (int)openWithPath:(const char *)arg1 file:(struct sqlite3_file *)arg2 flags:(int)arg3 outFlags:(int *)arg4;
- (void)dealloc;
- (id)init;

@end

