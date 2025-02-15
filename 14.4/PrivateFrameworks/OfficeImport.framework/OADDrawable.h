//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OADDrawableProperties;
@protocol OADClient, OADDrawableContainer;

__attribute__((visibility("hidden")))
@interface OADDrawable : NSObject
{
    _Bool mHidden;
    unsigned int mId;
    unsigned int mAltId;
    OADDrawableProperties *mDrawableProperties;
    id <OADClient> mClientData;
    OADDrawable<OADDrawableContainer> *mParent;
}

+ (unsigned int)generateOADDrawableId:(id)arg1;
- (void).cxx_destruct;
@property __weak OADDrawable<OADDrawableContainer> *parent; // @synthesize parent=mParent;
- (id)description;
- (id)createOrientedBoundsWithBounds:(struct CGRect)arg1;
- (void)removeUnnecessaryOverrides;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)ensureClientDataOfClass:(Class)arg1;
- (id)clientData;
- (void)setClientData:(id)arg1;
- (void)setDrawableProperties:(id)arg1;
- (id)drawableProperties;
- (void)setAltId:(unsigned int)arg1;
- (unsigned int)altId;
- (void)setId:(unsigned int)arg1;
- (unsigned int)id;
- (void)setHidden:(_Bool)arg1;
- (_Bool)hidden;
- (id)initWithPropertiesClass:(Class)arg1;
- (id)createWordClientDataWithTextType:(int)arg1;

@end

