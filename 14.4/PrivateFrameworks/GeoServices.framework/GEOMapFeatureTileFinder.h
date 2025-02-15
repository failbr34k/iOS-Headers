//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOTileLoader, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureTileFinder : NSObject
{
    unsigned long long _zoomLevel;
    int _tileSize;
    int _tileScale;
    int _tileSetStyle;
    NSString *_tileLoaderClientIdentifier;
    GEOTileLoader *_tileLoader;
}

- (void).cxx_destruct;
- (id)_tileLoaderClientIdentifier;
- (id)_findTilesInList:(id)arg1 allowNetwork:(_Bool)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)cancel;
- (id)findTilesAround:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 allowNetwork:(_Bool)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)findTileWithKey:(struct _GEOTileKey)arg1 allowNetwork:(_Bool)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithZoomLevel:(unsigned long long)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileSetStyle:(int)arg4 tileLoader:(id)arg5;
- (id)initWithZoomLevel:(unsigned long long)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileSetStyle:(int)arg4;
- (id)initWithTileLoader:(id)arg1;

@end

