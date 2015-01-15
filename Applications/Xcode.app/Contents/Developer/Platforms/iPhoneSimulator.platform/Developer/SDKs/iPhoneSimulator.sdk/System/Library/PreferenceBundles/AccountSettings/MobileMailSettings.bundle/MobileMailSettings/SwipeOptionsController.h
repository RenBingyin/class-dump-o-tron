//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class NSDictionary;

@interface SwipeOptionsController : PSListController
{
    NSDictionary *_swipeActionsAndTitles;
}

- (id)swipeActionsAndTitles;
- (id)_titlesForSwipeValues:(id)arg1;
- (id)_rightSwipeValues;
- (id)_leftSwipeValues;
- (id)_baseSwipeValues;
- (void)setRightSwipeAction:(id)arg1 withSpecifier:(id)arg2;
- (id)rightSwipeAction:(id)arg1;
- (void)setLeftSwipeAction:(id)arg1 withSpecifier:(id)arg2;
- (id)leftSwipeAction:(id)arg1;
- (void)_configureSwipeDiagramInCell:(id)arg1 AtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;

@end

