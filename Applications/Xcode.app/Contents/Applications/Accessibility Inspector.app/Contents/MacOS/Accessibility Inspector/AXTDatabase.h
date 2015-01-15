//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface AXTDatabase : NSObject
{
    NSDictionary *_rolesByName;
    NSDictionary *_roleAttributesByName;
    NSDictionary *_paramaterizedAttributesByName;
    NSDictionary *_textAttributesByName;
    NSDictionary *_actionsByName;
    NSDictionary *_notificationsByName;
    NSDictionary *_roleAttributesByRole;
    NSDictionary *_paramaterizedAttributesByRole;
    NSDictionary *_textAttributesByRole;
    NSDictionary *_roleActionsByRole;
}

+ (id)descriptionForAXError:(int)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)sharedDatabase;
@property(retain, nonatomic) NSDictionary *roleActionsByRole; // @synthesize roleActionsByRole=_roleActionsByRole;
@property(retain, nonatomic) NSDictionary *textAttributesByRole; // @synthesize textAttributesByRole=_textAttributesByRole;
@property(retain, nonatomic) NSDictionary *paramaterizedAttributesByRole; // @synthesize paramaterizedAttributesByRole=_paramaterizedAttributesByRole;
@property(retain, nonatomic) NSDictionary *roleAttributesByRole; // @synthesize roleAttributesByRole=_roleAttributesByRole;
@property(retain, nonatomic) NSDictionary *notificationsByName; // @synthesize notificationsByName=_notificationsByName;
@property(retain, nonatomic) NSDictionary *actionsByName; // @synthesize actionsByName=_actionsByName;
@property(retain, nonatomic) NSDictionary *textAttributesByName; // @synthesize textAttributesByName=_textAttributesByName;
@property(retain, nonatomic) NSDictionary *paramaterizedAttributesByName; // @synthesize paramaterizedAttributesByName=_paramaterizedAttributesByName;
@property(retain, nonatomic) NSDictionary *roleAttributesByName; // @synthesize roleAttributesByName=_roleAttributesByName;
@property(retain, nonatomic) NSDictionary *rolesByName; // @synthesize rolesByName=_rolesByName;
- (id)specificationForRole:(id)arg1 subRole:(id)arg2;
- (id)specificationForCombinedRoleName:(id)arg1;
- (id)specificationForNotification:(id)arg1;
- (id)specificationForAction:(id)arg1;
- (id)specificationForTextAttribute:(id)arg1;
- (id)specificationForParamaterizedAttribute:(id)arg1;
- (id)specificationForRoleAttribute:(id)arg1;
- (id)specificationForAttribute:(id)arg1;
- (void)_initializeDatabase;
- (id)_rolesByNameForStoredRecords:(id)arg1;
- (id)_attributesByNameForStoredRecords:(id)arg1;
@property(readonly, nonatomic) NSArray *notifications;
- (id)_notificationsByNameForStoredRecords:(id)arg1;
- (id)_actionsByNameForStoredRecords:(id)arg1;
- (id)_actionsForStoredRecords:(id)arg1 lookupTable:(id)arg2;
- (id)_attributesForStoredRecords:(id)arg1 lookupTable:(id)arg2;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

