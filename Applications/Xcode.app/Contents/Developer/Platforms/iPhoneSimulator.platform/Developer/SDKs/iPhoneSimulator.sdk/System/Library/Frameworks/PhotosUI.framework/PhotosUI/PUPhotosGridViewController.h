//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "PHAssetCollectionDataSource.h"
#import "PLDismissableViewController.h"
#import "PLNavigableAssetContainerViewController.h"
#import "PUCollectionViewReorderDelegate.h"
#import "PUPhotosDataSourceChangeObserver.h"
#import "PUScrollViewSpeedometerDelegate.h"
#import "PUSearchViewControllerDelegate.h"
#import "PUSessionInfoObserver.h"
#import "PUStackedAlbumControllerTransition.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UISearchBarDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSIndexPath, NSMutableDictionary, NSString, PHAsset, PHAssetCollection, PHCachingImageManager, PHFetchResult, PLDeletePhotosActionController, PUActivityViewController, PUAlbumListTransitionContext, PUAlbumPickerViewController, PUPhotoBrowserController, PUPhotoPinchGestureRecognizer, PUPhotoSelectionManager, PUPhotosDataSource, PUPhotosGridViewControllerSpec, PUPhotosSinglePickerViewController, PUPopoverController, PUScrollViewSpeedometer, PUSearchButtonItem, PUSearchViewController, PUSessionInfo, UIActionSheet, UIBarButtonItem, UICollectionViewLayout, UICollectionViewLayout<PUGridLayoutProtocol>, UILongPressGestureRecognizer, UINavigationButton, UIView;

@interface PUPhotosGridViewController : UICollectionViewController <UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate, PUCollectionViewReorderDelegate, PUSessionInfoObserver, PHAssetCollectionDataSource, _UISettingsKeyObserver, UISearchBarDelegate, PUSearchViewControllerDelegate, PUPhotosDataSourceChangeObserver, UIGestureRecognizerDelegate, PLNavigableAssetContainerViewController, PLDismissableViewController, PUStackedAlbumControllerTransition, PUScrollViewSpeedometerDelegate>
{
    NSIndexPath *_menuIndexPath;
    _Bool _isMenuIndexPathExact;
    _Bool _contentViewInSyncWithModel;
    _Bool _didScrollToInitialPosition;
    UIView *_alternateContentView;
    double _lastUpdateLayoutMetricsCollectionViewWidth;
    double _lastTransitionWidth;
    PHAsset *_visibleReferenceAssetBeforeChange;
    PHAssetCollection *_visibleReferenceAssetContainerBeforeChange;
    double _visibleReferenceAssetRelativeYBeforeChange;
    UIBarButtonItem *_selectSessionDoneBarButtonItem;
    UIBarButtonItem *_cancelButtonItem;
    UINavigationButton *_selectionButton;
    UIBarButtonItem *_shareToolbarButton;
    UIBarButtonItem *_addToolbarButton;
    UIBarButtonItem *_removeToolbarButton;
    UIBarButtonItem *_restoreToolbarButton;
    UIBarButtonItem *_slideshowButtonSpacer;
    UIBarButtonItem *_slideshowButton;
    PUSearchButtonItem *_searchButton;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSMutableDictionary *_progressInfosByIdentifier;
    NSMutableDictionary *_progressInfosByCachedIndexPath;
    CDUnknownBlockType _onViewDidLayoutSubviewsBlock;
    unsigned long long _suppressesColorSettingsCount;
    _Bool _deletesDuplicatesWhenNecessary;
    _Bool _initiallyScrolledToBottom;
    _Bool _alwaysHideTabBar;
    _Bool __hasEditSessionReorderedItems;
    _Bool _isDisplayingSearchResults;
    _Bool _showsCustomDoneButtonItemOnLeft;
    _Bool __shouldConsolidateFetchesForPreheating;
    PUPhotosGridViewControllerSpec *_gridSpec;
    PUPhotosDataSource *_photosDataSource;
    PUSessionInfo *_sessionInfo;
    unsigned long long _allowedActions;
    UICollectionViewLayout<PUGridLayoutProtocol> *_mainGridLayout;
    PUPhotoSelectionManager *_photoSelectionManager;
    CDUnknownBlockType _onViewDidAppearCompletion;
    PUPhotoPinchGestureRecognizer *_photoOrStackPinchGestureRecognizer;
    UIView *__emptyPlaceholderView;
    unsigned long long __previousCollectionsCount;
    UIActionSheet *__removeActionSheet;
    PLDeletePhotosActionController *__deleteActionController;
    PUAlbumPickerViewController *__albumPickerViewController;
    PUPhotosSinglePickerViewController *__sharingPhotosPickerViewController;
    PUActivityViewController *__activityViewController;
    PUSearchViewController *_passdownSearchViewController;
    PUSearchViewController *__modalSearchViewController;
    PUPhotosGridViewController *__modalSearchResultsViewController;
    PUAlbumListTransitionContext *_albumListTransitionContext;
    UICollectionViewLayout *__albumListTransitionLayout;
    UIBarButtonItem *_customDoneButtonItem;
    PUPhotoBrowserController *__pushedPhotoBrowserController;
    PUPopoverController *__puPopoverController;
    PHCachingImageManager *__cachingImageManager;
    long long __maximumNumberOfRowsToPreheat;
    PUScrollViewSpeedometer *__collectionViewSpeedometer;
    id __lockScreenSharingObserver;
    long long __batchPreheatingCount;
    struct CGPoint __previousPreheatContentOffset;
    struct CGRect __previousPreheatRect;
}

@property(nonatomic, setter=_setShouldConsolidateFetchesForPreheating:) _Bool _shouldConsolidateFetchesForPreheating; // @synthesize _shouldConsolidateFetchesForPreheating=__shouldConsolidateFetchesForPreheating;
@property(nonatomic, setter=_setBatchPreheatingCount:) long long _batchPreheatingCount; // @synthesize _batchPreheatingCount=__batchPreheatingCount;
@property(retain, nonatomic, setter=_setLockScreenSharingObserver:) id _lockScreenSharingObserver; // @synthesize _lockScreenSharingObserver=__lockScreenSharingObserver;
@property(retain, nonatomic, setter=_setCollectionViewSpeedometer:) PUScrollViewSpeedometer *_collectionViewSpeedometer; // @synthesize _collectionViewSpeedometer=__collectionViewSpeedometer;
@property(nonatomic, setter=_setMaximumNumberOfRowsToPreheat:) long long _maximumNumberOfRowsToPreheat; // @synthesize _maximumNumberOfRowsToPreheat=__maximumNumberOfRowsToPreheat;
@property(readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // @synthesize _cachingImageManager=__cachingImageManager;
@property(nonatomic, setter=_setPreviousPreheatContentOffset:) struct CGPoint _previousPreheatContentOffset; // @synthesize _previousPreheatContentOffset=__previousPreheatContentOffset;
@property(nonatomic, setter=_setPreviousPreheatRect:) struct CGRect _previousPreheatRect; // @synthesize _previousPreheatRect=__previousPreheatRect;
@property(retain, nonatomic, setter=_puSetPopoverController:) PUPopoverController *_puPopoverController; // @synthesize _puPopoverController=__puPopoverController;
@property(retain, nonatomic, setter=_setPushedPhotoBrowserController:) PUPhotoBrowserController *_pushedPhotoBrowserController; // @synthesize _pushedPhotoBrowserController=__pushedPhotoBrowserController;
@property(nonatomic) _Bool showsCustomDoneButtonItemOnLeft; // @synthesize showsCustomDoneButtonItemOnLeft=_showsCustomDoneButtonItemOnLeft;
@property(retain, nonatomic) UIBarButtonItem *customDoneButtonItem; // @synthesize customDoneButtonItem=_customDoneButtonItem;
@property(retain, nonatomic, setter=setAlbumListTransitionLayout:) UICollectionViewLayout *_albumListTransitionLayout; // @synthesize _albumListTransitionLayout=__albumListTransitionLayout;
@property(retain, nonatomic) PUAlbumListTransitionContext *albumListTransitionContext; // @synthesize albumListTransitionContext=_albumListTransitionContext;
@property(nonatomic, setter=setDisplayingSearchResults:) _Bool isDisplayingSearchResults; // @synthesize isDisplayingSearchResults=_isDisplayingSearchResults;
@property(retain, nonatomic, setter=_setModalSearchResultsViewController:) PUPhotosGridViewController *_modalSearchResultsViewController; // @synthesize _modalSearchResultsViewController=__modalSearchResultsViewController;
@property(retain, nonatomic, setter=_setModalSearchViewController:) PUSearchViewController *_modalSearchViewController; // @synthesize _modalSearchViewController=__modalSearchViewController;
@property(retain, nonatomic) PUSearchViewController *passdownSearchViewController; // @synthesize passdownSearchViewController=_passdownSearchViewController;
@property(retain, nonatomic, setter=_setActivityViewController:) PUActivityViewController *_activityViewController; // @synthesize _activityViewController=__activityViewController;
@property(retain, nonatomic, setter=_setSharingPhotosPickerViewController:) PUPhotosSinglePickerViewController *_sharingPhotosPickerViewController; // @synthesize _sharingPhotosPickerViewController=__sharingPhotosPickerViewController;
@property(retain, nonatomic, setter=_setAlbumPickerViewController:) PUAlbumPickerViewController *_albumPickerViewController; // @synthesize _albumPickerViewController=__albumPickerViewController;
@property(retain, nonatomic, setter=_setDeleteActionController:) PLDeletePhotosActionController *_deleteActionController; // @synthesize _deleteActionController=__deleteActionController;
@property(retain, nonatomic, setter=_setRemoveActionSheet:) UIActionSheet *_removeActionSheet; // @synthesize _removeActionSheet=__removeActionSheet;
@property(nonatomic, setter=_setHasEditSessionReorderedItems:) _Bool _hasEditSessionReorderedItems; // @synthesize _hasEditSessionReorderedItems=__hasEditSessionReorderedItems;
@property(nonatomic, setter=_setPreviousCollectionsCount:) unsigned long long _previousCollectionsCount; // @synthesize _previousCollectionsCount=__previousCollectionsCount;
@property(retain, nonatomic, setter=_setEmptyPlaceholderView:) UIView *_emptyPlaceholderView; // @synthesize _emptyPlaceholderView=__emptyPlaceholderView;
@property(retain, nonatomic, setter=_setPhotoOrStackPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *photoOrStackPinchGestureRecognizer; // @synthesize photoOrStackPinchGestureRecognizer=_photoOrStackPinchGestureRecognizer;
@property(copy, nonatomic) CDUnknownBlockType onViewDidAppearCompletion; // @synthesize onViewDidAppearCompletion=_onViewDidAppearCompletion;
@property(retain, nonatomic, setter=_setPhotoSelectionManager:) PUPhotoSelectionManager *photoSelectionManager; // @synthesize photoSelectionManager=_photoSelectionManager;
@property(nonatomic) _Bool alwaysHideTabBar; // @synthesize alwaysHideTabBar=_alwaysHideTabBar;
@property(nonatomic) _Bool initiallyScrolledToBottom; // @synthesize initiallyScrolledToBottom=_initiallyScrolledToBottom;
@property(nonatomic) _Bool deletesDuplicatesWhenNecessary; // @synthesize deletesDuplicatesWhenNecessary=_deletesDuplicatesWhenNecessary;
@property(retain, nonatomic) UICollectionViewLayout<PUGridLayoutProtocol> *mainGridLayout; // @synthesize mainGridLayout=_mainGridLayout;
@property(nonatomic) unsigned long long allowedActions; // @synthesize allowedActions=_allowedActions;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(retain, nonatomic) PUPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property(retain, nonatomic) PUPhotosGridViewControllerSpec *gridSpec; // @synthesize gridSpec=_gridSpec;
- (void).cxx_destruct;
- (void)searchViewControllerDidCancel:(id)arg1;
- (void)searchViewController:(id)arg1 presentFromResultsViewController:(id)arg2 animated:(_Bool)arg3;
- (void)searchViewController:(id)arg1 displaySearchResults:(id)arg2 orAlbum:(struct NSObject *)arg3 withTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (_Bool)allowSlideshowButton;
- (void)handleTransitionFade:(_Bool)arg1 animate:(_Bool)arg2;
- (id)gridLayout;
- (id)pu_debugRows;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)activityViewController:(id)arg1 displayVideoRemakerProgressView:(id)arg2;
- (void)sessionInfoPhotoSelectionDidChange:(id)arg1;
- (void)setSelected:(_Bool)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(_Bool)arg4;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (_Bool)popoverControllerShouldDismissPopover:(id)arg1;
- (_Bool)pu_handleSecondTabTap;
- (void)navigateToRevealAssetAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)navigateToRevealPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(_Bool)arg3;
- (void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(_Bool)arg3;
- (void)_navigateToPhotoAtIndexPath:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (void)_beginInteractiveStackCollapse:(id)arg1;
- (void)_beginInteractiveNavigationForItemAtIndexPath:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1 animated:(_Bool)arg2;
- (void)_updatePhotoDecorationForCell:(id)arg1 animated:(_Bool)arg2;
- (void)zoomTransition:(id)arg1 didFinishForOperation:(long long)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4;
- (void)zoomTransition:(id)arg1 willBeginForOperation:(long long)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4;
- (void)zoomTransition:(id)arg1 setVisibility:(_Bool)arg2 forPhotoToken:(id)arg3;
- (_Bool)zoomTransition:(id)arg1 getFrame:(struct CGRect *)arg2 contentMode:(long long *)arg3 forPhotoToken:(id)arg4 operation:(long long)arg5;
- (id)zoomTransition:(id)arg1 photoTokenForPhoto:(id)arg2 inCollection:(id)arg3;
- (id)assetIndexPathForPhotoToken:(id)arg1;
- (void)_menuControllerDidHideMenu:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (_Bool)shouldShowMenu;
- (void)_handlePhotoOrStackPinchGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(_Bool)arg2;
- (_Bool)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)wantsAssetCounts;
- (void)_updateBackButtonTitle;
- (void)_configureAddPlaceholderCell:(id)arg1 animated:(_Bool)arg2;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(_Bool)arg4;
- (void)_cancelImageRequestForCell:(id)arg1;
- (void)_configureDecorationsForCell:(id)arg1 withAsset:(id)arg2 thumbnailIsPlaceholder:(_Bool)arg3 assetMayHaveChanged:(_Bool)arg4;
- (id)imageRequestOptionsForAsset:(id)arg1 pixelSize:(inout struct CGSize *)arg2;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 assetMayHaveChanged:(_Bool)arg3;
- (void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)imageForAsset:(id)arg1 outIsPlaceholder:(_Bool *)arg2;
- (void)updateVisibleSectionHeadersAtIndexes:(id)arg1;
- (void)updateVisibleSupplementaryViewsOfKind:(id)arg1 animated:(_Bool)arg2;
- (void)_invalidateAllAssetIndexes;
- (void)updateInterfaceForIncrementalDataSourceChanges:(id)arg1;
- (void)updateInterfaceForModelReloadAnimated:(_Bool)arg1;
- (void)_updateEmptyPlaceholderAnimated:(_Bool)arg1;
- (id)emptyPlaceholderView;
- (id)_selectionButton;
- (id)_cancelButtonItem;
- (id)_selectSessionDoneBarButtonItem;
- (void)_updateSubviewsOrderingAndVisibility;
- (void)_updateNavigationBannerAnimated:(_Bool)arg1;
- (id)_pickerBannerView;
- (void)_updateToolbarContentsAnimated:(_Bool)arg1;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)updateNavigationBarAnimated:(_Bool)arg1;
- (void)_updateSearchButtonTextForActiveSearchField:(_Bool)arg1;
- (void)updateTitle;
- (void)updateGlobalFooter;
- (void)_updateGlobalHeaderVisibility;
- (void)_updateAllProgressInfoIndexPaths;
- (void)_invalidateAllProgressInfoIndexPaths;
- (void)_updateIndexPathForProgressInfo:(id)arg1;
- (void)endShowingProgressWithIdentifier:(id)arg1;
- (void)updateProgressWithIdentifier:(id)arg1 withValue:(double)arg2;
- (id)beginShowingProgressForAsset:(id)arg1 inCollection:(id)arg2;
- (void)_updateCollectionViewMultipleSelection;
- (void)_updateProgressForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateProgressForCellAtIndexPath:(id)arg1;
- (void)_updateSelectionForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)updatePeripheralInterfaceAnimated:(_Bool)arg1;
- (void)updateLayoutMetrics;
- (void)_updateLayoutMetricsIfNeeded;
- (_Bool)shouldPerformFullReloadForIncrementalDataSourceChange:(id)arg1;
- (void)processDataSourceChange:(id)arg1;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)photosDataSourceWillChange:(id)arg1;
- (struct CGPoint)stableUpdatesContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (void)_clearAutomaticContentOffsetSnapshot;
- (void)_performAutomaticContentOffsetAdjustment;
- (void)_prepareForAutomaticContentOffsetAdjustment;
- (_Bool)shouldPerformAutomaticContentOffsetAdjustment;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (void)_removeButtonPressed:(id)arg1;
- (id)_allAssetsInCollections;
- (void)_addButtonPressed:(id)arg1;
- (void)handleAddFromAction;
- (void)handleAddToAction;
- (void)_searchResultsViewControllerDidFinish:(id)arg1;
- (void)_didDismissSearchResultsViewController;
- (void)_willDismissSearchResultsViewControllerAnimated:(_Bool)arg1;
- (void)_didDismissSearchViewController;
- (void)_willDismissSearchViewControllerAnimated:(_Bool)arg1;
- (void)_dismissSearchViewControllerAnimated:(_Bool)arg1;
- (void)_searchButtonPressed:(id)arg1;
- (id)searchButtonItem;
- (void)_slideshowButtonPressed:(id)arg1;
- (void)_startSlideshowWithSettings:(id)arg1;
- (void)sender:(id)arg1 shareAssetsInFetchResult:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_shareButtonPressed:(id)arg1;
- (void)sender:(id)arg1 shareSelectedAssetsWithAggregateKey:(struct __CFString *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sender:(id)arg1 shareAssets:(id)arg2 aggregateKey:(struct __CFString *)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleHideMenuItem:(id)arg1;
- (void)_handleSelectionButton:(id)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleSelectSessionDoneButton:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3;
- (id)indexPathsForPreheatingInRect:(struct CGRect)arg1;
- (double)cellAspectRatioHint;
- (void)endBatchPreheating;
- (void)beginBatchPreheating;
- (_Bool)isPreheatingEnabled;
- (void)preheatAssets;
- (void)preheatAssetsConsolidatingFetches:(_Bool)arg1;
- (struct CGSize)contentSizeForPreheating;
- (struct CGPoint)contentOffsetForPreheating;
- (void)resetPreheating;
- (long long)imageDeliveryMode;
- (_Bool)pu_wantsTabBarVisible;
- (_Bool)pu_wantsToolbarVisible;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)endSuppressingColorSettingsUpdate;
- (void)beginSuppressingColorSettingsUpdate;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)canBeginStackCollapseTransition;
- (_Bool)canNavigateToPhotoInteractively:(_Bool)arg1;
- (void)uninstallGestureRecognizers;
- (void)installGestureRecognizers;
- (id)contentScrollView;
- (id)_avalancheStackImageForAsset:(id)arg1 partialStack:(_Bool)arg2;
- (id)bestReferenceItemIndexPath;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (id)longPressGestureRecognizer;
- (_Bool)_isAddPlaceholderAtIndexPath:(id)arg1;
- (void)didSelectAddPlaceholderInSection:(long long)arg1;
- (_Bool)wantsAddPlaceholderAtEndOfSection:(long long)arg1;
- (_Bool)hasScrollableContent;
- (_Bool)wantsGlobalFooter;
- (double)globalHeaderHeight;
- (id)newToolbarItems;
- (_Bool)shouldShowToolbar;
- (_Bool)shouldShowTabBar;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (id)_localizedBannerTextForAsset:(id)arg1 isDestructive:(_Bool *)arg2;
- (id)localizedTitleForAssets:(id)arg1;
- (id)itemIndexPathAtPoint:(struct CGPoint)arg1 outClosestMatch:(id *)arg2;
- (id)localizedSelectionTitle;
- (void)_removeSelectedAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_hasAtLeastOneContainer;
- (void)_updatePhotoSelectionManager;
- (id)alternateContentView;
- (void)setAlternateContentView:(id)arg1;
- (id)_barButtonSpacerWithWidth:(double)arg1;
- (id)_newEditActionItemsWithWideSpacing:(_Bool)arg1;
- (_Bool)isTrashBinViewController;
- (_Bool)canDisplayEditButton;
- (_Bool)_canPasteboardCopyAssetAtIndexPath:(id)arg1;
- (id)_shareableAssetsFromAssets:(id)arg1;
- (_Bool)_canShareAsset:(id)arg1;
- (_Bool)_canShareContent;
- (id)_assetsAllowingDelete:(_Bool)arg1 orRemove:(_Bool)arg2 fromAssets:(id)arg3;
- (id)_assetsAllowingEditOperation:(long long)arg1 fromAssets:(id)arg2;
- (_Bool)wantsAddContentInToolbar;
- (_Bool)canAddToOtherAlbumContent;
- (_Bool)_canAddContent;
- (_Bool)canDeleteContent;
- (_Bool)_canRemoveContent;
- (_Bool)_canAllContainersPerformEditOperation:(long long)arg1;
- (_Bool)_allowsActions:(unsigned long long)arg1;
- (_Bool)_areAllAssetsSelected;
- (_Bool)isAnyAssetSelected;
- (id)selectedAssets;
- (_Bool)isEmpty;
- (void)setContentViewInSyncWithModel:(_Bool)arg1;
- (_Bool)isContentViewInSyncWithModel;
- (void)_getFirstAsset:(id *)arg1 collection:(id *)arg2;
- (id)indexPathForAsset:(id)arg1 hintCollection:(id)arg2 hintIndexPath:(id)arg3;
- (id)indexPathForAsset:(id)arg1 inCollection:(id)arg2;
- (long long)cellFillMode;
- (id)assetAtIndexPathIfSafe:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetsInAssetCollection:(id)arg1;
@property(readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
- (_Bool)isCurrentCollectionViewDataSource;
- (unsigned long long)_indexForPhotoCollection:(id)arg1;
- (id)photoCollectionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) PHFetchResult *collectionListFetchResult;
- (id)newGridLayout;
- (void)updateInterfaceLayoutIfNecessary;
- (_Bool)updateSpec;
- (void)_updateAfterSizeChangeIfNecessary;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

