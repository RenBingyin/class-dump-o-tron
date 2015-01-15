//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import "SKUIItemStateCenterObserver.h"
#import "SKUILayoutCacheDelegate.h"
#import "SKUIProductPageOverlayDelegate.h"
#import "SKUIResourceLoaderDelegate.h"
#import "SKUIStorePageCollectionViewDelegate.h"
#import "SKUIViewControllerTesting.h"
#import "UICollectionViewDataSource.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSIndexPath, NSMapTable, NSMutableArray, NSMutableIndexSet, NSString, NSValue, SKUICollectionView, SKUIColorScheme, SKUIIndexBarControl, SKUILayoutCache, SKUIMetricsController, SKUIMetricsImpressionSession, SKUIProductPageOverlayController, SKUIResourceLoader, SKUIStackedBar, SKUIStorePageSplitsDescription, UICollectionView, UITapGestureRecognizer, UIView;

@interface SKUIStorePageSectionsViewController : SKUIViewController <SKUIItemStateCenterObserver, SKUILayoutCacheDelegate, SKUIProductPageOverlayDelegate, SKUIResourceLoaderDelegate, SKUIStorePageCollectionViewDelegate, SKUIViewControllerTesting, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    SKUIProductPageOverlayController *_activeOverlayController;
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;
    SKUICollectionView *_collectionView;
    UITapGestureRecognizer *_collectionViewTapGestureRecognizer;
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets _contentInsetAdjustments;
    id _deferredSplitsDescription;
    id <SKUIStorePageSectionsDelegate> _delegate;
    _Bool _delegateWantsDidScroll;
    _Bool _didInitialReload;
    NSMapTable *_expandSectionContexts;
    NSMutableIndexSet *_expandInsertSections;
    NSMutableIndexSet *_expandRemoveSections;
    long long _ignoreSectionsChangeCount;
    SKUIIndexBarControl *_indexBarControl;
    NSIndexPath *_indexPathOfEditedCell;
    NSArray *_initialOverlayURLs;
    NSValue *_lastKnownSize;
    long long _layoutStyle;
    NSMapTable *_menuSectionContexts;
    SKUIMetricsController *_metricsController;
    SKUIProductPageOverlayController *_overlayController;
    long long _pinningTransitionStyle;
    _Bool _rendersWithPerspective;
    SKUIResourceLoader *_resourceLoader;
    _Bool _scrollOffsetHasChanged;
    NSMutableArray *_sections;
    SKUIStorePageSplitsDescription *_splitsDescription;
    UIView *_splitsDividerView;
    SKUIStackedBar *_stackedBar;
    SKUILayoutCache *_textLayoutCache;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) SKUIIndexBarControl *indexBarControl; // @synthesize indexBarControl=_indexBarControl;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) long long pinningTransitionStyle; // @synthesize pinningTransitionStyle=_pinningTransitionStyle;
@property(retain, nonatomic) SKUIMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(nonatomic) __weak id <SKUIStorePageSectionsDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) SKUIMetricsImpressionSession *activeMetricsImpressionSession; // @synthesize activeMetricsImpressionSession=_activeMetricsImpressionSession;
- (void).cxx_destruct;
- (void)_updateSectionsAfterMenuChange;
- (void)_updateCollectionViewWithUpdates:(CDUnknownBlockType)arg1;
- (id)_textLayoutCache;
- (id)_splitForSectionIndex:(long long)arg1;
- (void)_setPageSize:(struct CGSize)arg1;
- (id)_sectionsForChartsComponent:(id)arg1;
- (void)_scrollFirstAppearanceSectionToView;
- (id)_resourceLoader;
- (void)_reloadCollectionView;
- (id)_prepareLayoutForSections;
- (void)_prefetchArtworkForVisibleSections;
- (id)_newStorePageCollectionViewLayout;
- (id)_newSectionsWithPageComponents:(id)arg1;
- (id)_newSectionsWithPageComponent:(id)arg1;
- (id)_newSectionContext;
- (id)_menuContextForMenuComponent:(id)arg1;
- (id)_expandContextForMenuComponent:(id)arg1;
- (void)_invalidateLayoutWithNewSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)_invalidateIfLastKnownSizeChanged;
- (void)_enumerateVisibleSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSectionContextsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_deselectCellsForAppearance:(_Bool)arg1;
- (id)_defaultSectionForSwooshComponent:(id)arg1;
- (id)_defaultSectionForGridComponent:(id)arg1;
- (id)_currentBackdropGroupName;
- (id)_createSectionsForExpandPageComponent:(id)arg1 context:(id)arg2 newSections:(id)arg3 sectionCount:(long long)arg4 sectionsByViewElement:(id)arg5 updateStyle:(long long)arg6;
- (id)_collectionViewSublayouts;
- (id)_childSectionsForMenuComponent:(id)arg1 selectedIndex:(long long)arg2;
- (id)_impressionableViewElements;
- (id)_visibleMetricsImpressionsString;
- (void)_updateSectionsForIndex:(long long)arg1 menuSection:(id)arg2;
- (void)_setSelectedIndex:(long long)arg1 forMenuSection:(id)arg2;
- (void)_setRendersWithPerspective:(_Bool)arg1;
- (void)_setActiveProductPageOverlayController:(id)arg1;
- (void)_pageSectionDidDismissOverlayController:(id)arg1;
- (void)_insertSectionsWithComponents:(id)arg1 afterSection:(id)arg2;
- (void)_endIgnoringSectionChanges;
- (void)_beginIgnoringSectionChanges;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)skuiCollectionViewWillLayoutSubviews:(id)arg1;
- (void)itemCollectionView:(id)arg1 didTapVideoForCollectionViewCell:(id)arg2;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performDefaultActionForViewElement:(id)arg2 indexPath:(id)arg3;
- (void)collectionView:(id)arg1 expandEditorialForLabelElement:(id)arg2 indexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)performTestWithName:(id)arg1 options:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)indexPathsForPinningItemsInCollectionView:(id)arg1 layout:(id)arg2;
- (void)collectionView:(id)arg1 willBeginEditingItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningTransitionStyleForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningStyleForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 pinningContentInsetForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndEditingItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canScrollCellAtIndexPath:(id)arg2;
- (void)artworkLoaderDidIdle:(id)arg1;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)collectionView:(id)arg1 editorialView:(id)arg2 didSelectLink:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)skui_viewWillAppear:(_Bool)arg1;
- (void)tapCollectionViewDidRecognize:(id)arg1;
- (id)SKUIStackedBar;
- (void)showOverlayWithProductPage:(id)arg1 metricsPageEvent:(id)arg2;
- (void)setSKUIStackedBar:(id)arg1;
- (void)setSectionsWithSplitsDescription:(id)arg1;
- (void)setSectionsWithPageComponents:(id)arg1;
- (void)reloadSections:(id)arg1;
@property(readonly, nonatomic, getter=isDisplayingOverlays) _Bool displayingOverlays;
- (void)dismissOverlays;
- (id)defaultSectionForComponent:(id)arg1;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_initSKUIStorePageSectionsViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

