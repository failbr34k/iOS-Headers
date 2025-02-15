//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNContact, CNContactProperty, CNFuture, CNObservable, CNUIUserActionItem, CNUIUserActionListModel, NSArray, NSString, UIImage;
@protocol CNCancelable, CNCapabilities, CNUIUserActionListConsumer;

@protocol CNUIUserActionListDataSource <NSObject>
+ (NSArray *)allSupportedActionTypesWithCapabilities:(id <CNCapabilities>)arg1;
+ (NSArray *)allSupportedActionTypes;
+ (NSArray *)allActionTypes;
@property(nonatomic) _Bool tracksChanges;
- (void)setCacheEntryExpirationAge:(double)arg1;
- (void)setCacheEntryRefreshAge:(double)arg1;
- (void)setCacheCapacity:(unsigned long long)arg1;
- (CNFuture *)thirdPartyActionsForContact:(CNContact *)arg1 propertyKey:(NSString *)arg2 identifier:(NSString *)arg3;
- (CNFuture *)thirdPartyActionsForContactProperty:(CNContactProperty *)arg1;
- (CNFuture *)thirdPartyTargetsForActionTypes:(NSArray *)arg1;
- (UIImage *)consumer:(id <CNUIUserActionListConsumer>)arg1 imageForActionType:(NSString *)arg2;
- (NSString *)consumer:(id <CNUIUserActionListConsumer>)arg1 localizedDisplayNameForButtonWithDefaultAction:(CNUIUserActionItem *)arg2 actionType:(NSString *)arg3;
- (NSString *)consumer:(id <CNUIUserActionListConsumer>)arg1 localizedButtonDisplayNameForActionType:(NSString *)arg2;
- (NSString *)consumer:(id <CNUIUserActionListConsumer>)arg1 localizedDisplayNameForActionType:(NSString *)arg2;
- (CNObservable *)consumer:(id <CNUIUserActionListConsumer>)arg1 actionModelsForContact:(CNContact *)arg2 actionType:(NSString *)arg3;
- (CNUIUserActionListModel *)consumer:(id <CNUIUserActionListConsumer>)arg1 currentActionModelForContact:(CNContact *)arg2 actionType:(NSString *)arg3;
- (id <CNCancelable>)consumer:(id <CNUIUserActionListConsumer>)arg1 actionModelsForContact:(CNContact *)arg2 actionType:(NSString *)arg3 handler:(void (^)(CNUIUserActionListModel *))arg4;
- (NSArray *)actionTypesForConsumer:(id <CNUIUserActionListConsumer>)arg1;
@end

