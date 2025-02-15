//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AceObject, NSUUID, UIViewController;
@protocol SiriUIViewController;

@interface SiriUITranscriptItem : NSObject
{
    _Bool _restored;
    _Bool _shouldBeExposed;
    _Bool _snippetViewControllerHasBeenUnloaded;
    NSUUID *_itemIdentifier;
    UIViewController<SiriUIViewController> *_viewController;
    AceObject *_aceObject;
    struct CGRect _previousFrame;
}

+ (id)transcriptItemWithAceObject:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect previousFrame; // @synthesize previousFrame=_previousFrame;
@property(nonatomic) _Bool snippetViewControllerHasBeenUnloaded; // @synthesize snippetViewControllerHasBeenUnloaded=_snippetViewControllerHasBeenUnloaded;
@property(nonatomic) _Bool shouldBeExposed; // @synthesize shouldBeExposed=_shouldBeExposed;
@property(nonatomic, getter=isRestored) _Bool restored; // @synthesize restored=_restored;
@property(retain, nonatomic) AceObject *aceObject; // @synthesize aceObject=_aceObject;
@property(retain, nonatomic) UIViewController<SiriUIViewController> *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSUUID *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (id)description;
- (id)initWithAceObject:(id)arg1;

@end

