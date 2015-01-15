//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class MPUExtrasBannerController, NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout;

@interface MPUExtrasStackTemplateViewController : MPUExtrasTemplateViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSMutableDictionary *_viewControllers;
    NSMutableDictionary *_sizes;
    MPUExtrasBannerController *_bannerViewController;
}

- (void).cxx_destruct;
- (id)_viewControllerForIndexPath:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)_prepareLayout;
- (id)sectionStyle;
- (id)templateElement;
- (id)contentScrollView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_dynamicTypeDidChange;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (_Bool)showsPlaceholder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

