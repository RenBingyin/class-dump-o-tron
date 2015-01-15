//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "WDDataListViewControllerDataProvider.h"

@class HKObserverQuery, NSArray, NSMutableDictionary, NSString;

@interface WDSleepListDataProvider : UIViewController <WDDataListViewControllerDataProvider>
{
    NSMutableDictionary *_sleepData;
    NSArray *_orderedKeys;
    unsigned long long _lastAnchor;
    HKObserverQuery *_observerQuery;
}

- (void).cxx_destruct;
- (void)dataListviewControllerDidDeleteAllData:(id)arg1;
- (void)dataListViewController:(id)arg1 didRemoveObjectAtIndex:(unsigned long long)arg2 forSection:(unsigned long long)arg3;
- (void)dataListViewController:(id)arg1 stopCollectingDataWithHealthStore:(id)arg2;
- (void)dataListViewController:(id)arg1 startCollectingDataForSource:(id)arg2 healthStore:(id)arg3 updateHandler:(CDUnknownBlockType)arg4;
- (id)dataListViewController:(id)arg1 secondaryTextForObject:(id)arg2;
- (id)dataListViewController:(id)arg1 textForObject:(id)arg2;
- (id)dataListViewController:(id)arg1 objectAtIndex:(unsigned long long)arg2 forSection:(unsigned long long)arg3;
- (unsigned long long)dataListViewController:(id)arg1 numberOfObjectsForSection:(unsigned long long)arg2;
- (id)dataListViewController:(id)arg1 titleForSection:(unsigned long long)arg2;
- (unsigned long long)numberOfSectionsForDataListViewController:(id)arg1;
- (long long)cellStyleForDataListViewController:(id)arg1;
- (void)_getSleepDataWithHealthStore:(id)arg1 source:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_sleepDataDictionaryFromSamples:(id)arg1;
- (void)_reloadSleepDataWithHealthStore:(id)arg1 source:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

