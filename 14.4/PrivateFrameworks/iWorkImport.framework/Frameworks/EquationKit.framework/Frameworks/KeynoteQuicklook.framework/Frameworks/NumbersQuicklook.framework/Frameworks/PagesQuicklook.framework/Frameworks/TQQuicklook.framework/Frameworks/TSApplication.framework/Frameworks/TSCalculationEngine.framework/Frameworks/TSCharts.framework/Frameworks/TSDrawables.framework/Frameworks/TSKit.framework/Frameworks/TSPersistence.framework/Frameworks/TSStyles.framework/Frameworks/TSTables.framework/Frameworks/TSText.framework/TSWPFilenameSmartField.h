//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/TSWPPlaceholderSmartField.h>

@interface TSWPFilenameSmartField : TSWPPlaceholderSmartField
{
    unsigned int _displayFlags;
}

- (unsigned short)smartFieldKind;
- (_Bool)allowsPasteAsSmartField;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(nonatomic) unsigned int displayFlags;

@end

