//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MKVibrantLabel, NSString;

__attribute__((visibility("hidden")))
@interface RelatedSectionTableViewCell : UITableViewCell
{
    NSString *_sectionName;
    MKVibrantLabel *_sectionNameLabel;
}

+ (double)estimatedCellHeight;
+ (double)cellHeight;
+ (id)accessibilityIdentifier;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MKVibrantLabel *sectionNameLabel; // @synthesize sectionNameLabel=_sectionNameLabel;
@property(retain, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
- (void)prepareForReuse;
- (void)configureSection;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

