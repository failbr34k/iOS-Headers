//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NLEmbedding : NSObject
{
    void *_embedding;
}

+ (id)_embeddingWithData:(id)arg1 error:(id *)arg2;
+ (id)_embeddingWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)embeddingWithMLModel:(id)arg1 error:(id *)arg2;
+ (id)embeddingWithData:(id)arg1 error:(id *)arg2;
+ (id)embeddingWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (_Bool)writeEmbeddingMLModelForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 toURL:(id)arg4 options:(id)arg5 error:(id *)arg6;
+ (id)modelDescriptionForEmbedding:(id)arg1;
+ (id)embeddingDataForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 error:(id *)arg4;
+ (_Bool)writeEmbeddingForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 toURL:(id)arg4 error:(id *)arg5;
+ (_Bool)_writeEmbeddingForDictionary:(id)arg1 language:(id)arg2 revision:(unsigned long long)arg3 toURL:(id)arg4 orData:(id)arg5 error:(id *)arg6;
+ (unsigned long long)currentSentenceEmbeddingRevisionForLanguage:(id)arg1;
+ (unsigned long long)currentContextualWordEmbeddingRevisionForLanguage:(id)arg1;
+ (unsigned long long)currentRevisionForLanguage:(id)arg1;
+ (unsigned long long)currentRevisionForType:(id)arg1 locale:(id)arg2;
+ (id)supportedSentenceEmbeddingRevisionsForLanguage:(id)arg1;
+ (id)supportedContextualWordEmbeddingRevisionsForLanguage:(id)arg1;
+ (id)supportedRevisionsForLanguage:(id)arg1;
+ (id)supportedRevisionsForType:(id)arg1 locale:(id)arg2;
+ (id)sentenceEmbeddingForLanguage:(id)arg1 revision:(unsigned long long)arg2;
+ (id)contextualWordEmbeddingForLanguage:(id)arg1 revision:(unsigned long long)arg2;
+ (id)wordEmbeddingForLanguage:(id)arg1 revision:(unsigned long long)arg2;
+ (id)sentenceEmbeddingForLanguage:(id)arg1;
+ (id)contextualWordEmbeddingForLanguage:(id)arg1;
+ (id)wordEmbeddingForLanguage:(id)arg1;
@property(readonly) unsigned long long revision;
@property(readonly, copy) NSString *language;
- (id)vectorsForSentences:(id)arg1 maxTokens:(unsigned long long)arg2;
- (_Bool)getVector:(float *)arg1 forString:(id)arg2;
- (id)vectorForString:(id)arg1;
@property(readonly) unsigned long long vocabularySize;
@property(readonly) unsigned long long dimension;
- (id)neighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4;
- (id)neighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3;
- (void)enumerateNeighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)enumerateNeighborsForVector:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)neighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4;
- (id)neighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3;
- (void)enumerateNeighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 maximumDistance:(double)arg3 distanceType:(long long)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)enumerateNeighborsForString:(id)arg1 maximumCount:(unsigned long long)arg2 distanceType:(long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (double)distanceBetweenString:(id)arg1 andString:(id)arg2 distanceType:(long long)arg3;
- (_Bool)containsString:(id)arg1;
- (void)dealloc;
- (id)initWithMLModel:(id)arg1 error:(id *)arg2;
- (id)initWithNLModel:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)_initWithData:(id)arg1 error:(id *)arg2;
- (void *)_createEmbeddingRefWithData:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)_initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (void *)_createEmbeddingRefWithContentsOfURL:(id)arg1;
- (id)initSentenceEmbeddingWithLocale:(struct __CFLocale *)arg1;
- (id)initContextualEmbeddingWithLocale:(struct __CFLocale *)arg1;
- (id)initWithLocale:(struct __CFLocale *)arg1;
- (id)initWithType:(id)arg1 locale:(id)arg2 version:(id)arg3;

@end

