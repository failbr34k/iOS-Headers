//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAGKStructuredAnswer-Protocol.h>

@class NSArray, NSString, NSURL;

@interface SAGKSummaryStructuredAnswer : AceObject <SAGKStructuredAnswer>
{
}

+ (id)summaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)summaryStructuredAnswer;
@property(copy, nonatomic) NSString *titleAnnotation;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *imageCaption;
@property(copy, nonatomic) NSURL *image;
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(copy, nonatomic) NSArray *answerPropertyGroups;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

