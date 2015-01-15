//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CompactWidthMonthViewController, DayTwoPartLabel, MonthDayNavigationTransitionView, PaletteView, UILabel;

@interface MonthDayTransitionView : UIView
{
    _Bool _animating;
    PaletteView *_paletteView;
    UIView *_allDayView;
    struct CGPoint _dayViewDayLocation;
    struct CGPoint _dayViewMonthLocation;
    CompactWidthMonthViewController *_monthViewController;
    UIView *_topView;
    UIView *_bottomView;
    MonthDayNavigationTransitionView *_scrubber;
    DayTwoPartLabel *_weekDayLabel;
    UILabel *_weekNumberLabel;
    CDUnknownBlockType _completion;
    struct CGSize _dayCellSize;
    struct CGRect _dayScrubberFrame;
    struct CGRect _monthScrubberFrame;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UILabel *weekNumberLabel; // @synthesize weekNumberLabel=_weekNumberLabel;
@property(retain, nonatomic) DayTwoPartLabel *weekDayLabel; // @synthesize weekDayLabel=_weekDayLabel;
@property(nonatomic) struct CGRect monthScrubberFrame; // @synthesize monthScrubberFrame=_monthScrubberFrame;
@property(nonatomic) struct CGSize dayCellSize; // @synthesize dayCellSize=_dayCellSize;
@property(nonatomic) struct CGRect dayScrubberFrame; // @synthesize dayScrubberFrame=_dayScrubberFrame;
@property(retain, nonatomic) MonthDayNavigationTransitionView *scrubber; // @synthesize scrubber=_scrubber;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)_basicAnimateView:(id)arg1 toAlpha:(double)arg2 duration:(double)arg3;
- (void)_animateView:(id)arg1 toAlpha:(double)arg2 delay:(double)arg3;
- (void)_animateView:(id)arg1 toPosition:(struct CGPoint)arg2;
- (id)_animateView:(id)arg1 toPosition:(struct CGPoint)arg2 setDelegate:(_Bool)arg3;
- (void)_updateWeekNumberLabel;
- (void)_updateWeekDayLabel;
- (void)_haltAnimations;
- (double)_topExtensionHeight;
- (void)animateToMonthWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateToDayWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareTransitionScrubberWithSelectedDate:(id)arg1 todayDate:(id)arg2 dayViewController:(id)arg3 monthViewController:(id)arg4 paletteView:(id)arg5;
- (void)prepareTransitionWithTopView:(id)arg1 bottomView:(id)arg2 allDayView:(id)arg3;
- (double)animationDuration;
@property(readonly, nonatomic) _Bool animating;
- (void)_createViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

