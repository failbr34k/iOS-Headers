//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/TSCH3DGLBindable-Protocol.h>

@class NSString;

@interface TSCH3DGLRenderBuffer : NSObject <TSCH3DGLBindable>
{
    unsigned int mBuffer;
}

- (void)deactivateInContext:(id)arg1;
- (void)bindInSession:(id)arg1;
- (_Bool)valid;
- (void)destroyResourcesInContext:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithGLBuffer:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

