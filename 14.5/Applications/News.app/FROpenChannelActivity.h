//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

@protocol FROpenChannelActivityDelegate;

@interface FROpenChannelActivity : UIActivity
{
    id <FROpenChannelActivityDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FROpenChannelActivityDelegate> delegate; // @synthesize delegate=_delegate;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;

@end

