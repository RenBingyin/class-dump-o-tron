//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MPDetailScrubControllerDelegate.h"
#import "MPUContentSizeCategoryChanging.h"

@class MPDetailScrubController, MPUNowPlayingIndicatorView, NSString, UILabel, UISlider<MPDetailedScrubbing><_MPUSliderScrubForwarding>;

@interface MPUChronologicalProgressView : UIView <MPDetailScrubControllerDelegate, MPUContentSizeCategoryChanging>
{
    MPDetailScrubController *_scrubController;
    UISlider<MPDetailedScrubbing><_MPUSliderScrubForwarding> *_slider;
    UILabel *_currentTimeLabel;
    UILabel *_remainingTimeLabel;
    MPUNowPlayingIndicatorView *_indicatorView;
    NSString *_lastCurrentTimeString;
    NSString *_lastRemainingTimeString;
    double _lastDisplayedDuration;
    _Bool _alwaysLive;
    _Bool _showTimeLabels;
    _Bool _scrubbingEnabled;
    _Bool _showIsPlaying;
    id <MPUChronologicalProgressViewDelegate> _delegate;
    long long _style;
    long long _substyle;
    double _totalDuration;
    double _currentTime;
}

@property(nonatomic) _Bool showIsPlaying; // @synthesize showIsPlaying=_showIsPlaying;
@property(nonatomic) _Bool scrubbingEnabled; // @synthesize scrubbingEnabled=_scrubbingEnabled;
@property(nonatomic) _Bool showTimeLabels; // @synthesize showTimeLabels=_showTimeLabels;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) long long substyle; // @synthesize substyle=_substyle;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <MPUChronologicalProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isAlwaysLive) _Bool alwaysLive; // @synthesize alwaysLive=_alwaysLive;
- (void).cxx_destruct;
- (id)_stringForTime:(double)arg1 isTimeRemaining:(_Bool)arg2;
- (void)_updateTimeLabels;
- (float)_sliderNormalizedValueForTime:(double)arg1;
- (id)_createIndicatorViewWithStyle:(long long)arg1;
- (id)_createTimeLabelWithStyle:(long long)arg1;
- (id)_trackImage;
- (id)_thumbImage;
- (id)_timeLabelFont;
- (void)_internalSetCurrentTime:(double)arg1;
- (void)updateTextForContentSizeCategory:(id)arg1;
- (void)detailScrubController:(id)arg1 didChangeValue:(float)arg2;
- (void)detailScrubControllerDidEndScrubbing:(id)arg1;
- (void)detailScrubControllerDidBeginScrubbing:(id)arg1;
@property(readonly, nonatomic) struct CGRect trackRect;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

