//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CompactMonthViewController.h"

#import "ABPersonViewControllerDelegate.h"
#import "CompactMonthListViewControllerDelegate.h"
#import "CompactMonthViewInteractionDelegate.h"
#import "EKEventViewDelegate.h"
#import "EKEventViewDelegatePrivate.h"

@class CompactMonthListViewController, CompactMonthWeekView, EKCalendarDate, NSCalendar, NSString, TappableDayNumber, UIView;

@interface CompactHeightMonthViewController : CompactMonthViewController <CompactMonthViewInteractionDelegate, CompactMonthListViewControllerDelegate, EKEventViewDelegate, ABPersonViewControllerDelegate, EKEventViewDelegatePrivate>
{
    EKCalendarDate *_pressedDay;
    TappableDayNumber *_pressHighlight;
    CompactMonthWeekView *_pressedMonthView;
    CompactMonthWeekView *_selectedMonthWeekView;
    UIView *_listViewContainer;
    CompactMonthListViewController *_listViewController;
    NSCalendar *_weekCalculationCalendar;
    UIView *_dividerLine;
    _Bool _shouldSetSelectedDate;
    _Bool _loadingOccurrenceCache;
    _Bool _currentlyVisible;
    _Bool _needToReloadEventsOnAppear;
    _Bool _eventLoadingSuspendedForScroll;
    _Bool _reloadAfterStoppedScrolling;
    EKCalendarDate *_navigationBarDisplayedDate;
    _Bool _editorDismissedFromDelete;
}

- (void).cxx_destruct;
- (_Bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)eventViewControllerWillFinishEditingEvent:(id)arg1 deleted:(_Bool)arg2;
- (void)eventViewController:(id)arg1 requestsDismissalOfEditViewController:(id)arg2;
- (void)eventViewControllerWillDisappear:(id)arg1;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)_showDetailsForEvent:(id)arg1 animated:(_Bool)arg2 showComments:(_Bool)arg3;
- (void)_showDetailsForEvent:(id)arg1 animated:(_Bool)arg2;
- (void)compactMonthListViewController:(id)arg1 didSelectEvent:(id)arg2;
- (_Bool)eventViewControllerShouldHideInlineEditButton;
- (void)_updateListViewFrame;
- (struct CGRect)frameOfListView;
- (void)_updateInfiniteScrollViewFrame;
- (long long)eventCountDisplayedForDate:(id)arg1;
- (id)monthWeekViewForCalendarDate:(id)arg1;
- (double)_showDateVerticalOffsetWithVerticalCompression:(_Bool)arg1;
- (double)showDateVerticalOffset;
- (double)decelerationDistanceThresholdToStopShowingMonthBanner;
- (double)decelerationDistanceThresholdForDisplayingMonthBanner;
- (double)decelerationDistanceThresholdForPreferringMonthBoundary;
- (double)topInsetForSubviewWithCalendarDate:(id)arg1;
- (double)heightForSubviewWithCalendarDate:(id)arg1;
- (struct CGRect)frameForTodayHighlight;
- (struct CGRect)frameForWeekContainingDate:(id)arg1;
- (id)pushedWeekViewControllerWithDate:(id)arg1 animated:(_Bool)arg2;
- (double)_scrollViewVerticalVelocity;
- (_Bool)_shouldAnimateDots;
- (id)_loadEventsForStartDate:(id)arg1 endDate:(id)arg2;
- (void)_loadEventsForAllSubviews;
- (void)_loadEventsForViewsInRangeStartingAt:(id)arg1 endingAt:(id)arg2;
- (void)_occurrencesChanged:(id)arg1;
- (void)_cachedOccurrencesChanged:(id)arg1;
- (void)_setSelectedDay:(id)arg1 onMonthWeekView:(id)arg2 animated:(_Bool)arg3;
- (void)_removeMonthHighlight;
- (void)_createMonthHighlightForMonthView:(id)arg1 day:(id)arg2;
- (id)_dayInMonth:(id)arg1 fromTouches:(id)arg2;
- (void)monthView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (void)monthView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)monthView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)monthView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (id)_viewFromTouches:(id)arg1;
- (void)showDate:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)didScroll;
- (void)willEndDraggingWithVelocity:(struct CGPoint)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
- (void)didEndScrolling;
- (_Bool)shouldUpdateSelectedDateWithCentralView;
- (id)newBottomViewBelowViewWithCalendarDate:(id)arg1;
- (id)newTopViewAboveViewWithCalendarDate:(id)arg1;
- (id)createInitialViewForDate:(id)arg1;
- (unsigned long long)maximumCachedReusableViews;
- (_Bool)_monthWeekViewsUseHorizontalCompression;
- (_Bool)_monthWeekViewsUseVerticalCompression;
- (id)bestDateForNewEvent;
- (void)updatePalette:(id)arg1;
- (void)presentDetailsViewWhenReady:(id)arg1 animated:(_Bool)arg2;
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showDetails:(_Bool)arg3 showComments:(_Bool)arg4;
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showDetails:(_Bool)arg3;
- (void)showEvent:(id)arg1 animated:(_Bool)arg2;
- (unsigned long long)edgesForExtendedLayout;
- (void)updateNavigationBarDisplayedDateString;
- (void)_setupListViewController;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

