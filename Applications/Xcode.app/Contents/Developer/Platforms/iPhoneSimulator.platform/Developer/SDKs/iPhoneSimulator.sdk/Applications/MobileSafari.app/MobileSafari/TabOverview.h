//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CloudTabTableDelegate.h"
#import "TabSnapshotCacheDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UISearchBarDelegate.h"
#import "_UIBasicAnimationFactory.h"

@class CADisplayLink, GradientView, HighlightRecognizer, NSArray, NSIndexSet, NSString, NSTimer, ReorderingAutoscroller, TabExplanationView, TabOverviewInterpolatedLocation, TabOverviewItem, TabSnapshotCache, UIButton, UILongPressGestureRecognizer, UIPanGestureRecognizer, UISearchBar, UITapGestureRecognizer;

@interface TabOverview : UIView <CloudTabTableDelegate, TabSnapshotCacheDelegate, _UIBasicAnimationFactory, UIGestureRecognizerDelegate, UISearchBarDelegate>
{
    CADisplayLink *_displayLink;
    TabOverviewInterpolatedLocation *_interpolatedLocation;
    NSArray *_displayedItems;
    UIView *_borrowedContentView;
    UIPanGestureRecognizer *_panRecognizer;
    HighlightRecognizer *_pressRecognizer;
    UILongPressGestureRecognizer *_reorderRecognizer;
    UIPanGestureRecognizer *_tabCloseRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    TabOverviewItem *_activeItem;
    TabOverviewItem *_pressedItem;
    TabSnapshotCache *_snapshotCache;
    TabOverviewInterpolatedLocation *_cloudTabsLocation;
    NSArray *_cloudTabDevices;
    NSArray *_cloudTabTables;
    double _cloudTabsHeight;
    struct CGPoint _lastPanTranslation;
    ReorderingAutoscroller *_reorderingAutoscroller;
    TabOverviewItem *_reorderingItem;
    struct CGPoint _reorderOffset;
    _Bool _reorderOffsetNeedsReset;
    CDStruct_5ca50560 _reorderStartLocation;
    struct CGPoint _reorderStartOffset;
    double _swipeCloseTranslation;
    TabOverviewItem *_swipeClosingItem;
    _Bool _presented;
    _Bool _dismissing;
    _Bool _dragging;
    _Bool _pinching;
    _Bool _horizontalBounceEnabled;
    _Bool _verticalBounceEnabled;
    _Bool _shouldBounceToConstrainedLocation;
    UIView *_header;
    UIView *_divider;
    UIButton *_doneButton;
    GradientView *_gradientView;
    UISearchBar *_searchBar;
    UIButton *_searchCancelButton;
    UIView *_scrollingContainerView;
    NSIndexSet *_indexesMatchingSearch;
    _Bool _shouldAnimateDimmingForSearch;
    _Bool _suppressItemAnimation;
    NSIndexSet *_stackBaseIndexes;
    NSArray *_extraStackOffsetForRow;
    NSIndexSet *_alternateStackBaseIndexes;
    NSArray *_alternateExtraStackOffsetForRow;
    double _bottomKeyboardInset;
    TabOverviewItem *_interactivePresentationStartingItem;
    struct CGPoint _interactivePresentationLastOffset;
    double _interactivePresentationLastTimestamp;
    double _interactivePresentationLastLogScale;
    struct CGPoint _interactivePresentationVelocity;
    double _interactivePresentationZoomLockStartTime;
    struct CGPoint _interactivePresentationZoomLockOffset;
    double _lastLayoutWidth;
    NSTimer *_itemActivationTimer;
    TabExplanationView *_explanationView;
    _Bool _explanationViewVisible;
    _Bool _searchBarBackdropStyleUpdated;
    double _fadingSnapshotCount;
    _Bool _synchronizeClosingItems;
    _Bool _showsPrivateBrowsingButton;
    _Bool _showsExplanationView;
    NSArray *_items;
    NSArray *_alternateItems;
    long long _alternateItemPosition;
    unsigned long long _maximumStackHeight;
    TabOverviewItem *_itemToActivate;
    id <TabOverviewDelegate> _delegate;
    UIButton *_addTabButton;
    UIButton *_privateBrowsingButton;
}

@property(readonly, nonatomic) _Bool showsExplanationView; // @synthesize showsExplanationView=_showsExplanationView;
@property(nonatomic) _Bool showsPrivateBrowsingButton; // @synthesize showsPrivateBrowsingButton=_showsPrivateBrowsingButton;
@property(readonly, nonatomic) UIButton *privateBrowsingButton; // @synthesize privateBrowsingButton=_privateBrowsingButton;
@property(readonly, nonatomic) UIButton *addTabButton; // @synthesize addTabButton=_addTabButton;
@property(nonatomic) __weak id <TabOverviewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TabOverviewItem *itemToActivate; // @synthesize itemToActivate=_itemToActivate;
@property(nonatomic) unsigned long long maximumStackHeight; // @synthesize maximumStackHeight=_maximumStackHeight;
@property(nonatomic) _Bool synchronizeClosingItems; // @synthesize synchronizeClosingItems=_synchronizeClosingItems;
@property(readonly, nonatomic) long long alternateItemPosition; // @synthesize alternateItemPosition=_alternateItemPosition;
@property(readonly, nonatomic) NSArray *alternateItems; // @synthesize alternateItems=_alternateItems;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)_updateIndexesMatchingSearch;
- (void)_cancelSearch;
- (void)tabSnapshotCacheDidFinishUpdating:(id)arg1;
- (void)tabSnapshotCache:(id)arg1 didCacheSnapshotWithIdentifier:(id)arg2;
- (void)tabSnapshotCache:(id)arg1 requestSnapshotWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cloudTabTable:(id)arg1 didFinishEditingTabItemView:(id)arg2;
- (void)cloudTabTable:(id)arg1 didStartEditingTabItemView:(id)arg2;
- (void)cloudTabTable:(id)arg1 closeCloudTab:(id)arg2 onDevice:(id)arg3;
- (void)cloudTabTable:(id)arg1 didSelectCloudTab:(id)arg2;
@property(readonly, nonatomic) _Bool allowsInteractivePresentation;
- (void)setShowsExplanationView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateExtraStackOffsets:(id *)arg1 baseIndexes:(id *)arg2 forItems:(id)arg3;
- (void)_updateStacks;
- (void)_updateSnapshotCacheIdentifiers;
- (void)_invalidateSnapshotForItem:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_displayLinkFired:(id)arg1;
- (void)setCloudTabDevices:(id)arg1;
- (void)cancelInteractivePresentation;
- (void)endInteractivePresentation;
- (void)_endInteractivePresentationRestoringPreviousState:(_Bool)arg1;
- (id)_itemAboveItem:(id)arg1;
- (id)_itemBelowItem:(id)arg1;
- (id)_itemLeftOfItem:(id)arg1;
- (id)_itemRightOfItem:(id)arg1;
- (void)updateInteractivePresentationWithOffset:(struct CGPoint)arg1 scale:(double)arg2;
- (void)beginInteractivePresentationWithOffset:(struct CGPoint)arg1 scale:(double)arg2;
- (void)_updateSnapshotAlphaForPinchAnimated:(_Bool)arg1;
- (id)_closestItemToLocation:(CDStruct_5ca50560)arg1;
- (CDStruct_5ca50560)_rescaleLocationByCentering:(CDStruct_5ca50560)arg1 toLogScale:(double)arg2;
- (void)_activateItemToActivate:(id)arg1;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)presentWithAnimation:(_Bool)arg1;
- (void)_beginPresentation;
- (CDStruct_5ca50560)_targetStackLocationForItem:(id)arg1;
- (id)_baseOfNonTrivialStackWithItem:(id)arg1 inItems:(id)arg2;
- (id)_stackBaseIndexesForItems:(id)arg1;
- (void)_updateBorrowedContentView;
- (_Bool)_wantsBorrowedContentView;
- (double)_snapshotFadePercentage;
- (double)_currentScalePercentage;
- (double)_widthForCloudTabTableAtIndex:(unsigned long long)arg1;
- (_Bool)_shouldUseFastExplanationViewAnimation;
- (void)layoutSubviews;
- (_Bool)_isShowingStacks;
@property(readonly, nonatomic, getter=_isSearching) _Bool _searching;
- (_Bool)_shouldDimItemsForSearch;
- (void)_tap:(id)arg1;
- (CDStruct_5ca50560)_applyItemPosition:(long long)arg1 toLocation:(CDStruct_5ca50560)arg2;
- (id)_itemsContainingItem:(id)arg1;
- (void)_dismissWithItemAtCurrentDecelerationFactor:(id)arg1;
- (void)_dismissWithItem:(id)arg1;
- (void)_tabClose:(id)arg1;
- (void)_startClosingItem:(id)arg1;
- (void)_reorder:(id)arg1;
- (CDStruct_5ca50560)_targetLocationForReorderingItem;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_press:(id)arg1;
- (id)_itemAtPoint:(struct CGPoint)arg1;
- (void)_pan:(id)arg1;
- (void)_close:(id)arg1;
- (void)_updateDisplayedItems;
- (void)setItems:(id)arg1 alternateItems:(id)arg2 atPosition:(long long)arg3;
- (void)_initializeIncomingItemIfNecessary:(id)arg1 fromItems:(id)arg2 oldItems:(id)arg3 atPosition:(long long)arg4;
- (void)_updateDisplayLink;
- (void)_setDismissing:(_Bool)arg1;
- (void)_updatePanGesture;
- (CDStruct_5ca50560)_constrainLocation:(CDStruct_5ca50560)arg1 includingCloudTabs:(_Bool)arg2;
- (CDStruct_5ca50560)_constrainLocation:(CDStruct_5ca50560)arg1;
- (struct CGRect)_scrollBounds;
- (struct CGSize)_contentSize;
- (double)_contentHeightForCloudTabs;
- (double)_bottomEdgeOfTabs;
- (struct CGPoint)_offsetForRubberbandOffset:(struct CGPoint)arg1;
- (struct CGPoint)_rubberbandOffsetForOffset:(struct CGPoint)arg1;
- (void)_setPresented:(_Bool)arg1;
- (CDStruct_5ca50560)_targetLocationForItemAtIndex:(unsigned long long)arg1 ofItems:(id)arg2 includingNewTabScale:(_Bool)arg3;
- (CDStruct_5ca50560)_targetLocationForItemAtIndex:(unsigned long long)arg1 ofItems:(id)arg2;
- (id)_itemAtLayoutIndex:(unsigned long long)arg1;
- (unsigned long long)_layoutIndexForItemIndex:(unsigned long long)arg1 ofItems:(id)arg2 baseIndex:(unsigned long long *)arg3;
- (CDStruct_5ca50560)_targetLocationForItem:(id)arg1 inItems:(id)arg2;
- (struct CGRect)_rectForItem:(id)arg1;
- (struct CGRect)_rectForItemLocation:(CDStruct_5ca50560)arg1;
- (double)_thumbnailScaleForItems:(id)arg1;
- (double)_totalWidthOfItems:(id)arg1;
- (unsigned long long)_cloudTabDevicesPerRow;
- (unsigned long long)_tabsPerRow;
- (void)_addTab;
- (void)_done;
- (void)_updateScrollBoundsForKeyboardNotification:(id)arg1;
- (void)_updateScrollBoundsForKeyboardInfo:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

