//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPredicateEditorRowTemplate.h"

@interface NSPredicateEditorRowTemplate (PredicateEditorIntegration)
+ (id)preparedCompoundPredicateEditorRowTemplate;
+ (id)preparedSimplePredicateEditorRowTemplate;
- (void)setIbRightExpressionObject:(id)arg1;
- (void)setIbLeftExpressionObject:(id)arg1;
- (id)ibLeftExpressionObject;
- (id)ibRightExpressionObject;
- (id)ibCurrentExpressionObject:(BOOL)arg1;
- (long long)ibExpressionAttributeType:(BOOL)arg1;
- (id)ibPasteboardTypes;
- (void)prepareForInsertion;
- (id)ibDefaultChildren;
- (void)takeSnapshotValues:(id)arg1;
- (id)popUpMenus;
- (void)setPopUpMenus:(id)arg1;
- (Class)ibEditorClass;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (void)ibPopulateAttributeInspectorClasses:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibPopulateKeyPaths:(id)arg1;
@end

