//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSourceDefinition.h>

@class NUComposition;

@interface NUCompositionSourceDefinition : NUSourceDefinition
{
    NUComposition *_composition;
}

- (void).cxx_destruct;
@property(readonly) NUComposition *composition; // @synthesize composition=_composition;
- (id)initWithComposition:(id)arg1;
- (id)init;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id *)arg2;

@end

