//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, AVPlayerItem, NSString, PLMoviePlayerView, PLTVOutWindow, UIAlertView;

@interface PLMoviePlayerController : NSObject
{
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    PLMoviePlayerView *_view;
    UIAlertView *_alertView;
    PLTVOutWindow *_tvOutWindow;
    _Bool _hasPendingTime;
    double _pendingTime;
    unsigned long long _pendingTimeSnapOption;
    _Bool _forceUpdateCurrentTime;
    _Bool _isExternalPlayback;
    _Bool _exited;
    double _lastSetCurrentTimeTime;
    _Bool _isSeeking;
    unsigned long long _backgroundTaskId;
    _Bool _audioSessionActive;
    NSString *_originalAudioCategory;
    _Bool _TVOutEnabled;
    _Bool _forceDisableTVOut;
    _Bool _isPreparedForPlayback;
    _Bool _isActiveController;
    id <PLMoviePlayerControllerDelegate> _delegate;
    unsigned long long _bufferingState;
    unsigned long long _playbackState;
}

+ (_Bool)_isNetworkSupportedPath:(id)arg1;
+ (_Bool)_isStreamableAsset:(id)arg1;
+ (id)AVAssetURLWithPath:(id)arg1;
@property(nonatomic) _Bool isActiveController; // @synthesize isActiveController=_isActiveController;
@property(readonly, nonatomic) _Bool isPreparedForPlayback; // @synthesize isPreparedForPlayback=_isPreparedForPlayback;
@property(nonatomic, setter=_setForceDisableTVOut:) _Bool forceDisableTVOut; // @synthesize forceDisableTVOut=_forceDisableTVOut;
@property(nonatomic) _Bool TVOutEnabled; // @synthesize TVOutEnabled=_TVOutEnabled;
@property(readonly, nonatomic) unsigned long long playbackState; // @synthesize playbackState=_playbackState;
@property(readonly, nonatomic) unsigned long long bufferingState; // @synthesize bufferingState=_bufferingState;
@property(readonly, retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(readonly, retain, nonatomic) PLMoviePlayerView *view; // @synthesize view=_view;
@property(nonatomic) id <PLMoviePlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_serverConnectionDidDie:(id)arg1;
- (void)_exitPlayer:(int)arg1;
- (void)_playbackFailedWithError:(id)arg1;
- (void)_playerItemFailedToPlayToEnd:(id)arg1;
- (void)_playerItemFailedToPlayToEndNotification:(id)arg1;
- (void)_playerItemDidReachEndNotification:(id)arg1;
- (void)willResignAsActiveController;
- (void)didBecomeActiveController;
- (void)requestToResignAsActiveController;
- (void)requestToBecomeActiveController;
- (void)_updateBackgroundViewInformation;
- (long long)externalPlaybackType;
- (_Bool)isExternalPlayback;
- (void)_updateDisableAirPlayMirroringDuringPlayback;
- (_Bool)_allowsExternalPlayback;
- (void)_tearDownTVOutWindow;
- (void)tearDownTVOutWindow;
- (void)_setupTVOutWindow;
- (void)_displayVideoView;
- (void)_restoreTVOutVideoIfNecessary;
- (void)_updateTVOutEnabled;
- (_Bool)videoOutActive;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_willResignNotification:(id)arg1;
- (void)_willBeginSuspendAnimationNotification:(id)arg1;
- (void)_willSuspendNotification:(id)arg1;
- (void)_pausePlaybackForNotification;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)_setPlaybackState:(unsigned long long)arg1;
- (void)_setBufferingState:(unsigned long long)arg1;
- (void)_streamUnlikelyToKeepUp;
- (void)_streamRanDry;
- (void)_streamLikelyToKeepUp;
- (void)_streamBufferFull;
@property(nonatomic) double currentTime;
@property(readonly, nonatomic) float playbackRate;
@property(readonly, nonatomic) double duration;
- (void)_delayedUpdateFromPendingTime;
- (void)_updateFromPendingTime;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2 forceUpdate:(_Bool)arg3;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned long long)arg2;
- (void)stop;
- (void)pauseDueToInsufficientData;
- (void)pause;
- (void)playDueToEnoughData;
- (void)playFromBeginning;
- (void)play;
- (void)_playerRateDidChange:(id)arg1;
- (void)_dispatchOnMainThreadWithBlock:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_didLoadValueOfKey:(id)arg1 forAsset:(id)arg2;
- (void)_loadAsset:(id)arg1;
- (void)_setPlayerItem:(id)arg1;
- (void)setPlayerItem:(id)arg1 startTime:(double)arg2;
- (id)_asset;
- (void)_updateAudioSession;
- (void)_setPlayerAudioSessionActive:(_Bool)arg1;
- (void)_tearDownPlayer;
- (void)_setupPlayer;
- (id)_playerKeysToObserve;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)init;

@end

