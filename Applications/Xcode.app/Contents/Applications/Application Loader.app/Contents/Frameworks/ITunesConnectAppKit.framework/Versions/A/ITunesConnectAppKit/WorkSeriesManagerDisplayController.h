//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MZWorkSeriesManager, NSBox, NSMutableArray, NSScrollView, NSTimer;

@interface WorkSeriesManagerDisplayController : NSObject
{
    NSScrollView *container;
    NSBox *workItemPrototypeBox;
    MZWorkSeriesManager *_manager;
    NSTimer *_updateTimer;
    NSMutableArray *_workItemViewMap;
}

- (id)manager;
- (id)workItemPrototypeBox;
- (void)setWorkItemPrototypeBox:(id)arg1;
- (void)clearCompletedWork:(id)arg1;
- (void)clearCompletedWork;
- (void)updateUI:(id)arg1;
- (void)synchronizeViewMapWithManager;
- (void)createControllersWithWorkSeries:(id)arg1;
- (BOOL)determineIfSubviewsDiffer:(id)arg1 newViews:(id)arg2;
- (id)createSubviewsWithSeries:(id)arg1;
- (id)createSubviewWithItem:(id)arg1;
- (id)cachedControllerForWorkItem:(id)arg1;
- (void)removeUnusedWorkItemsFromViewMap:(id)arg1;
- (id)mapSeriesToItems:(id)arg1;
- (void)shutdown;
- (void)start;
- (void)dealloc;
- (id)initWithManager:(id)arg1 container:(id)arg2;
- (id)init;

@end

