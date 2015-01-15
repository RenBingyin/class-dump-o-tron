//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPMoviePlayerControllerDelegate.h"
#import "UIMovieScrubberDelegate.h"

@class MPMoviePlayerController, NSArray, NSMutableDictionary, NSString, NSTimer, NSURL, QLMovieScrubberDataSource, UIButton, UIImage, UIImageView, UIMovieScrubber, UITapGestureRecognizer, UIView;

@interface QLMovieViewController : UIViewController <UIMovieScrubberDelegate, MPMoviePlayerControllerDelegate>
{
    id <QLMovieViewControllerDelegate> _delegate;
    MPMoviePlayerController *_moviePlayer;
    NSURL *_contentURL;
    UIMovieScrubber *_scrubber;
    UIView *_overlayPlayButtonView;
    UIButton *_playPauseButton;
    UIView *_scrubberContainerView;
    NSTimer *_scrubberUpdateTimer;
    UIImage *_posterFrame;
    UIImageView *_posterFrameImageView;
    int _enableAnimationCount;
    double _animationDuration;
    CDUnknownBlockType _canPlayBlock;
    int _controlStyle;
    double _scrubberVerticalOffset;
    unsigned int _didAppear:1;
    unsigned int _showsPlayOverlay:1;
    unsigned int _showsScrubber:1;
    unsigned int _scrubberVisible:1;
    unsigned int _showsEmbeddedControls:1;
    unsigned int _canCreateMetadata:1;
    unsigned int _canPlay:1;
    unsigned int _wantsScrubberUpdates:1;
    unsigned int _isVisible:1;
    unsigned int _showingScrubber:1;
    unsigned int _scrubbing:1;
    unsigned int _shouldResumePlayAfterScrubbing:1;
    unsigned int _playing:1;
    unsigned int _needToPrepareToPlay:1;
    unsigned int _loadScrubberThumbnails:1;
    unsigned int _hasBeenPlayed:1;
    _Bool _readyToPlay;
    NSMutableDictionary *_cachedThumbnails;
    NSArray *_landscapeSummaryThumbnailTimestamps;
    NSArray *_portraitSummaryThumbnailTimestamps;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    QLMovieScrubberDataSource *_scrubberDataSource;
    NSURL *_originalContentURL;
    _Bool _canEdit;
}

@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property _Bool readyToPlay; // @synthesize readyToPlay=_readyToPlay;
@property id <QLMovieViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)naturalSize;
- (double)movieDuration;
- (double)endTime;
- (double)startTime;
- (id)movieScrubber;
- (id)moviePlayer;
- (id)contentURL;
- (void)setContentURL:(id)arg1;
@property(nonatomic) _Bool wantsScrubberUpdates;
- (void)setCanPlayBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool canPlay;
@property(nonatomic) _Bool canCreateMetadata;
@property(nonatomic) double scrubberVerticalOffset;
@property(nonatomic) _Bool showsScrubber;
@property(nonatomic) int controlStyle;
@property(nonatomic) _Bool showsPlayOverlay;
- (_Bool)isAnimationEnabled;
- (void)enableAnimation;
- (void)disableAnimation;
- (void)movieScrubber:(id)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)endScrubbing;
- (void)scrubToValue:(double)arg1;
- (void)beginScrubbing;
- (_Bool)_isAVNotificationApropos:(id)arg1;
- (void)_avControllerPlaybackStateChanged:(id)arg1;
- (void)_movieDidExitFullScreen:(id)arg1;
- (void)_movieDidEnterFullScreen:(id)arg1;
- (void)_airPlayVideoActiveDidChange:(id)arg1;
- (void)_moviePlaybackDidFinish:(id)arg1;
- (void)_moviePlaybackStateChanged:(id)arg1;
- (void)_movieIsPreparedForDisplay:(id)arg1;
- (void)_movieIsReadyForDisplay:(id)arg1;
- (void)_updatePrepareToPlayState;
- (void)playPause:(id)arg1;
- (void)play:(id)arg1;
- (void)_playConditionally:(id)arg1;
- (void)_updateScrubberValue;
- (void)_stopScrubberUpdateTimer;
- (void)_startScrubberUpdateTimer;
- (void)_updateScrubberTimer;
- (void)_setDoubleTapEnabled:(_Bool)arg1;
- (void)_doubleTapRecognized:(id)arg1;
- (id)_overlayPlayButtonView;
- (void)_updatePlayButton:(_Bool)arg1;
- (void)_createScrubberIfNeeded;
- (void)_updateScrubberDataSource;
- (void)_updateScrubberLayout;
- (void)_updatePlaybackRange;
- (void)_updateScrubberState;
- (void)_updateScrubberThumb;
- (void)_setScrubberPlayVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setScrubberVisible:(_Bool)arg1 duration:(double)arg2;
- (void)setControlsVisible:(_Bool)arg1 duration:(double)arg2;
- (void)_updateMovieVisibility;
@property(nonatomic) double currentPlaybackTime;
- (_Bool)canBecomeFirstResponder;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (_Bool)isPlaying;
- (void)_setPlaying:(_Bool)arg1 isNotification:(_Bool)arg2;
- (void)pause;
- (void)play;
- (void)_cancelPrepareMoviePlayer;
- (void)_prepareMoviePlayerAfterDelay;
- (_Bool)isPreparedToPlay;
- (void)prepareToPlay;
- (void)preparePosterFrame;
- (void)_updatePosterFrame;
- (id)_snapshotImage;
- (_Bool)mayBeAudioOnly;
@property(readonly, getter=isAudioOnly) _Bool audioOnly;
- (void)moviePlayerDidHideOverlay:(id)arg1;
- (void)moviePlayer:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)moviePlayerDidShowOverlay:(id)arg1;
- (void)moviePlayer:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (_Bool)moviePlayerShareButtonPressed:(id)arg1;
- (_Bool)moviePlayerPreviousButtonPressed:(id)arg1;
- (_Bool)moviePlayerNextButtonPressed:(id)arg1;
- (_Bool)moviePlayerBookmarkButtonPressed:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_updatePosterFrameBackgroundColor;
@property(nonatomic) _Bool disallowsAMRAudio;
- (void)dealloc;
- (id)initWithContentURL:(id)arg1;
- (void)_tearDownMovieView;
- (void)_createMovieViewIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

