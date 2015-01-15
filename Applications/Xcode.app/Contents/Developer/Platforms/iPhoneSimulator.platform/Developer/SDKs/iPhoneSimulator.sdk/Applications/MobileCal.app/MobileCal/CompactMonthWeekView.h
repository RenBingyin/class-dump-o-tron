//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "InfiniteScrollViewSubview.h"

@class CompactMonthWeekDayNumber, CompactMonthWeekDayOverlay, EKCalendarDate, NSArray, NSCalendar, NSObject<CompactMonthViewInteractionDelegate>, TodayCirclePulseView, UILabel;

@interface CompactMonthWeekView : UIView <InfiniteScrollViewSubview>
{
    EKCalendarDate *_startCalendarDate;
    EKCalendarDate *_endCalendarDate;
    NSCalendar *_calendar;
    long long _cellToStartDrawingIn;
    _Bool _containsFirstDayOfMonth;
    UIView *_grayLine;
    UILabel *_monthNameLabel;
    NSArray *_dayNumbers;
    NSArray *_dayNumberOverlays;
    NSArray *_eventMarkers;
    CompactMonthWeekDayNumber *_todayDayNumber;
    struct CGSize _monthNameLabelFittingSize;
    CompactMonthWeekDayNumber *_selectedWeekNumber;
    CompactMonthWeekDayOverlay *_todayDayNumberOverlay;
    CompactMonthWeekDayOverlay *_selectedDayNumberOverlay;
    TodayCirclePulseView *_todayPulse;
    _Bool _containsToday;
    UILabel *_weekNumberLabel;
    _Bool _compressedVerticalMode;
    _Bool _compressedHorizontalMode;
    _Bool _enableLayerAnimationsDuringLayout;
    _Bool _disableTodayPulse;
    _Bool _showWeekNumber;
    _Bool _temporarilyHideWeekNumber;
    NSObject<CompactMonthViewInteractionDelegate> *_interactionDelegate;
    NSArray *_eventCounts;
}

+ (double)_topOfMonthNameLabelToGrayLineDistance;
+ (id)_monthNameFont;
+ (double)_monthNameLabelBaselineToGrayLineDistance;
+ (double)_dayNumberBaselineToGrayLineDistance:(_Bool)arg1;
+ (double)_grayLineHeight;
+ (double)_spaceBelowGrayLineHeight:(_Bool)arg1;
+ (double)heightForViewThatContainsFirstDayOfMonth:(_Bool)arg1 compressed:(_Bool)arg2;
+ (_Bool)_viewForCalendarDateContainsFirstDayOfMonth:(id)arg1;
+ (double)_topInsetForViewThatContainsFirstDayOfMonth:(_Bool)arg1 cellToStartDrawingIn:(long long)arg2;
+ (long long)_cellToStartDrawingInForViewWithCalendarDate:(id)arg1 calendar:(id)arg2;
+ (double)eventMarkerDiameter:(_Bool)arg1;
+ (id)eventMarkerColor;
+ (struct CGPoint)eventMarkerPositionForIndex:(long long)arg1 compressed:(_Bool)arg2 showingOverlay:(_Bool)arg3 showingWeekNumbers:(_Bool)arg4;
+ (double)headerHeight;
+ (double)cellHeightWithVerticalCompression:(_Bool)arg1;
+ (double)circleDiameterWithOverlayLarge;
+ (double)circleDiameterWithOverlay;
+ (double)circleDiameter;
+ (double)heightForViewWithCalendarDate:(id)arg1 compressed:(_Bool)arg2;
+ (double)topInsetForViewWithCalendarDate:(id)arg1 calendar:(id)arg2;
+ (id)weekNumberColorForThisWeek:(_Bool)arg1;
+ (id)weekNumberFont;
+ (const double *)_dayWidthsShowingWeekNumbers:(_Bool)arg1;
+ (double)weekNumbersColumnWidth;
+ (double)extendedColumnWidth;
+ (double)regularDayColumnWidth;
@property(nonatomic) _Bool temporarilyHideWeekNumber; // @synthesize temporarilyHideWeekNumber=_temporarilyHideWeekNumber;
@property(nonatomic) _Bool showWeekNumber; // @synthesize showWeekNumber=_showWeekNumber;
@property(nonatomic) _Bool disableTodayPulse; // @synthesize disableTodayPulse=_disableTodayPulse;
@property(nonatomic) _Bool enableLayerAnimationsDuringLayout; // @synthesize enableLayerAnimationsDuringLayout=_enableLayerAnimationsDuringLayout;
@property(nonatomic) _Bool compressedHorizontalMode; // @synthesize compressedHorizontalMode=_compressedHorizontalMode;
@property(nonatomic) _Bool compressedVerticalMode; // @synthesize compressedVerticalMode=_compressedVerticalMode;
@property(retain, nonatomic) NSArray *eventCounts; // @synthesize eventCounts=_eventCounts;
@property(nonatomic) __weak NSObject<CompactMonthViewInteractionDelegate> *interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (void).cxx_destruct;
- (unsigned long long)_monthLabelColumnIndex;
- (id)monthNameLabel;
- (unsigned long long)_daysInAWeek;
- (void)_reloadMonthNameLabel;
- (void)setGrayLineAlpha:(double)arg1;
- (void)setSelectedDay:(id)arg1 animated:(_Bool)arg2;
- (void)setEventCounts:(id)arg1 animated:(_Bool)arg2;
- (void)_clearTodayHighlight;
- (void)resetTodayBits;
- (void)_updateWeekNumberAnimated:(_Bool)arg1;
- (void)setCalendarDate:(id)arg1;
- (double)_circleYOffsetFromTopForDiameter:(double)arg1;
- (struct CGPoint)_positionOfCircleInCellWithWidth:(double)arg1 circleSize:(struct CGSize)arg2;
- (void)adjustHighlight:(id)arg1 forDay:(id)arg2;
- (id)dayForPoint:(struct CGPoint)arg1;
- (id)dayNumberCellFrames;
- (struct CGRect)frameForTodayHighlight;
- (struct CGRect)rectForCells;
- (long long)daysInMonth;
@property(readonly, nonatomic) _Bool containsFirstDayOfMonth;
- (void)haltTodayPulse;
- (void)pulseTodayCircle;
- (double)topInset;
- (id)endCalendarDate;
- (id)calendarDate;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_initializeMonthNameLabel;
- (void)_initializeEventMarkers;
- (void)_updateDayNumberOverlays;
- (void)_initializeDayNumbers;
- (void)_initializeGrayLine;
- (id)description;
- (id)initWithCalendarDate:(id)arg1 calendar:(id)arg2 compressed:(_Bool)arg3;

@end

