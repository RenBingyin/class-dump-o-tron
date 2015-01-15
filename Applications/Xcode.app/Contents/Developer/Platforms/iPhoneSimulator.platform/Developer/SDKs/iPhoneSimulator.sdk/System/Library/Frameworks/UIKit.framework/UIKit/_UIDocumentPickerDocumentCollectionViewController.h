//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, _UIDocumentPickerContainerModel, _UIDocumentPickerSortOrderView, _UIDocumentPickerViewServiceViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDocumentCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _shouldHideSortBar;
    _Bool _updatesMayAnimate;
    _UIDocumentPickerContainerModel *_model;
    _UIDocumentPickerViewServiceViewController *_serviceViewController;
    id _monitoringToken;
    _UIDocumentPickerSortOrderView *_sortView;
    NSArray *_modelObjects;
}

@property(nonatomic) _Bool updatesMayAnimate; // @synthesize updatesMayAnimate=_updatesMayAnimate;
@property(copy, nonatomic) NSArray *modelObjects; // @synthesize modelObjects=_modelObjects;
@property(retain, nonatomic) _UIDocumentPickerSortOrderView *sortView; // @synthesize sortView=_sortView;
@property(nonatomic) _Bool shouldHideSortBar; // @synthesize shouldHideSortBar=_shouldHideSortBar;
@property(retain, nonatomic) id monitoringToken; // @synthesize monitoringToken=_monitoringToken;
@property(nonatomic) _UIDocumentPickerViewServiceViewController *serviceViewController; // @synthesize serviceViewController=_serviceViewController;
@property(retain, nonatomic) _UIDocumentPickerContainerModel *model; // @synthesize model=_model;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setMonitoring:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (void)_sortViewChanged:(id)arg1;
- (void)dealloc;
- (void)_dynamicTypeSizeChanged:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_unlockAnimations;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

