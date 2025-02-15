//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "AutocompleteCellAccessoryView-Protocol.h"
#import "QuerySuggestionViewProtocol-Protocol.h"

@class NSString, QuerySuggestionView;
@protocol AutocompleteCellAccessoryDelegate;

__attribute__((visibility("hidden")))
@interface QuerySuggestionTableViewCell : UITableViewCell <QuerySuggestionViewProtocol, AutocompleteCellAccessoryView>
{
    id <AutocompleteCellAccessoryDelegate> _accessoryViewDelegate;
    id _accessoryViewObject;
    long long _accessoryViewType;
    QuerySuggestionView *_querySuggestionView;
}

+ (id)identifier;
+ (double)estimatedCellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) QuerySuggestionView *querySuggestionView; // @synthesize querySuggestionView=_querySuggestionView;
@property(nonatomic) long long accessoryViewType; // @synthesize accessoryViewType=_accessoryViewType;
@property(retain, nonatomic) id accessoryViewObject; // @synthesize accessoryViewObject=_accessoryViewObject;
@property(nonatomic) __weak id <AutocompleteCellAccessoryDelegate> accessoryViewDelegate; // @synthesize accessoryViewDelegate=_accessoryViewDelegate;
- (void)didTapAccessoryViewButton:(id)arg1;
- (void)setTitle:(id)arg1 highlightTitleRanges:(id)arg2 detailText:(id)arg3 style:(unsigned long long)arg4;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

