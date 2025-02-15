//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/PXGViewUserData-Protocol.h>

@class NSString, PXOperationStatus;

@interface PXGAssetDecorationViewConfiguration : NSObject <NSCopying, PXGViewUserData>
{
    PXOperationStatus *_loadStatus;
}

- (void).cxx_destruct;
@property(copy, nonatomic) PXOperationStatus *loadStatus; // @synthesize loadStatus=_loadStatus;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

