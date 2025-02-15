//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/NSSecureCoding-Protocol.h>

@class CalLocation, NSString;

@interface CalRoute : NSObject <NSSecureCoding>
{
    CalLocation *_start;
    CalLocation *_end;
    double _duration;
    NSString *_route;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSString *route; // @synthesize route=_route;
@property double duration; // @synthesize duration=_duration;
@property(retain) CalLocation *end; // @synthesize end=_end;
@property(retain) CalLocation *start; // @synthesize start=_start;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

