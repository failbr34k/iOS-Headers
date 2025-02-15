//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <TSText/TSKDocumentObject-Protocol.h>
#import <TSText/TSKPencilAnnotation-Protocol.h>
#import <TSText/TSPCopying-Protocol.h>
#import <TSText/TSWPOverlappingField-Protocol.h>
#import <TSText/TSWPTextSpanningObject-Protocol.h>

@class NSString, TSKPKDrawing, TSWPStorage;
@protocol TSKPencilAnnotationStorage;

@interface TSWPPencilAnnotation : TSPObject <TSPCopying, TSKDocumentObject, TSWPTextSpanningObject, TSWPOverlappingField, TSKPencilAnnotation>
{
    TSWPStorage *_parentStorage;
    NSString *_textAttributeUUIDString;
    id <TSKPencilAnnotationStorage> _pencilAnnotationStorage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TSKPencilAnnotationStorage> pencilAnnotationStorage; // @synthesize pencilAnnotationStorage=_pencilAnnotationStorage;
@property(readonly, nonatomic) NSString *textAttributeUUIDString; // @synthesize textAttributeUUIDString=_textAttributeUUIDString;
@property(nonatomic) __weak TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct PencilAnnotationArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) NSString *uuid;
- (_Bool)isInDocument;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEquivalentToObject:(id)arg1;
- (void)resetTextAttributeUUIDString;
@property(readonly, copy) NSString *description;
- (void)i_setTextAttributeUUIDString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 pencilAnnotationStorage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) TSKPKDrawing *drawing; // @dynamic drawing;
@property(readonly) Class superclass;

@end

