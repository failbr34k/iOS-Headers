//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterUI/NSCopying-Protocol.h>

@class NSString;

@interface GKSupplementaryViewMetrics : NSObject <NSCopying>
{
    _Bool _shouldPin;
    _Bool _hidden;
    _Bool _shouldUseGlobalIndexing;
    _Bool _shouldPinGlobal;
    double _desiredWidth;
    double _desiredHeight;
    NSString *_kind;
    Class _reusableViewClass;
    SEL _configurator;
    id _target;
    long long _animateWithSection;
    struct _NSRange _globalSectionRange;
}

+ (id)supplementaryMetrics;
@property(nonatomic) long long animateWithSection; // @synthesize animateWithSection=_animateWithSection;
@property(nonatomic) struct _NSRange globalSectionRange; // @synthesize globalSectionRange=_globalSectionRange;
@property(nonatomic) _Bool shouldPinGlobal; // @synthesize shouldPinGlobal=_shouldPinGlobal;
@property(nonatomic) _Bool shouldUseGlobalIndexing; // @synthesize shouldUseGlobalIndexing=_shouldUseGlobalIndexing;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) SEL configurator; // @synthesize configurator=_configurator;
@property(nonatomic) Class reusableViewClass; // @synthesize reusableViewClass=_reusableViewClass;
@property(retain, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(nonatomic) _Bool shouldPin; // @synthesize shouldPin=_shouldPin;
@property(nonatomic) double desiredHeight; // @synthesize desiredHeight=_desiredHeight;
@property(nonatomic) double desiredWidth; // @synthesize desiredWidth=_desiredWidth;
- (struct CGSize)sizeForCollectionView:(id)arg1;
- (id)description;
- (id)localDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

