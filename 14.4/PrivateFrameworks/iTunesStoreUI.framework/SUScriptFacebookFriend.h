//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDictionary, NSString;

@interface SUScriptFacebookFriend : SUScriptObject
{
    NSDictionary *_dictionary;
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) NSString *name;
@property(readonly) NSString *identifier;
- (id)_className;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithFriendDictionary:(id)arg1;

@end

