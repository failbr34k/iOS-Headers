//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@interface CheckForDemotedApplicationsOperation : ISOperation
{
    _Bool _hasDemotedApplications;
}

@property(readonly) _Bool hasDemotedApplications; // @synthesize hasDemotedApplications=_hasDemotedApplications;
- (void)run;
- (id)init;

@end

