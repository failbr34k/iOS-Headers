//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@interface CKEditableCollectionView : UICollectionView
{
    _Bool __ck_editing;
    struct UIEdgeInsets _marginInsets;
}

@property(nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) _Bool _ck_editing; // @synthesize _ck_editing=__ck_editing;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)_ck_setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

