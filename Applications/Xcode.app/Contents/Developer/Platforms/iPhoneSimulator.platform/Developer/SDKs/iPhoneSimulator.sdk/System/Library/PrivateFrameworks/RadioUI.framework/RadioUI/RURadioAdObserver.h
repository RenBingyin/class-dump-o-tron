//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADBannerViewDelegate.h"
#import "ISDialogOperationDelegate.h"

@class ISDialogOperation, MPAVController, MPURTCReportingController, MPUReportingController, NSDate, NSObject<OS_dispatch_queue>, NSString, RUJingleTiltReportingController;

@interface RURadioAdObserver : NSObject <ADBannerViewDelegate, ISDialogOperationDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPUReportingController *_globalReportingController;
    _Bool _hasDirtyVisualEngagement;
    _Bool _isSlotAcquisitionInProgress;
    long long _lastApplicationState;
    RUJingleTiltReportingController *_jingleTiltReportingController;
    double _minDurationToCountAsPlayed;
    NSString *_playbackSessionID;
    long long _policyEngineEnabledCount;
    MPURTCReportingController *_RTCReportingController;
    NSDate *_sapSessionLoadBeginDate;
    double _skipThreshold;
    ISDialogOperation *_slotAcquisitionDialogOperation;
    double _startTimeForCurrentItem;
    long long _visualEngagementCount;
    _Bool _visuallyEngaged;
    MPAVController *_player;
    unsigned long long _numberOfSkippedTracks;
}

+ (id)sharedAdObserver;
@property(readonly, nonatomic) unsigned long long numberOfSkippedTracks; // @synthesize numberOfSkippedTracks=_numberOfSkippedTracks;
@property(readonly, nonatomic, getter=isVisuallyEngaged) _Bool visuallyEngaged; // @synthesize visuallyEngaged=_visuallyEngaged;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_updateVisualEngagement;
- (void)_updateWithStoreBag:(id)arg1;
- (void)_unregisterForPlayerNotifications;
- (void)__scheduleUpdateVisualEngagement;
- (void)_scheduleUpdateVisualEngagement;
- (void)_reportPlaybackEndedForAdTrack:(id)arg1 withItem:(id)arg2;
- (void)_reportPlaybackEndedForTimeoutWithItem:(id)arg1;
- (id)_reportingTrackMetadataForItem:(id)arg1;
- (id)_reportingRadioStationMetadataForItem:(id)arg1;
- (id)_reportingPlaybackEndEventForItem:(id)arg1;
- (void)_registerForPlayerNotifications;
- (void)_recordReportingEvents:(id)arg1;
- (void)_loadMinDurationToCountAsPlayedFromURLBag;
- (_Bool)_isPolicyEngineEnabled;
- (void)_handleSkipForChangedItem:(id)arg1 didChangeStation:(_Bool)arg2;
- (void)_getCurrentTime:(double *)arg1 duration:(double *)arg2 wasSkipped:(_Bool *)arg3 didAssetFailToLoad:(_Bool *)arg4 forItem:(id)arg5;
- (void)_clearAssetCacheForItem:(id)arg1;
- (void)_attemptSlotAcquisitionWithAdditionalBodyParameters:(id)arg1;
- (id)_adPolicyEngine;
- (void)willHitPlaybackTimeoutEndingPlayback:(_Bool)arg1 withCurrentItem:(id)arg2;
- (void)requestAdsForSlot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)optimalTransmissionWindowDidOpen;
- (void)noteDidEnterStation:(id)arg1;
- (void)historyDidEndPlayingAdTrack:(id)arg1 withItem:(id)arg2;
- (void)historyDidBeginPlayingAdTrack:(id)arg1 withItem:(id)arg2;
- (id)heartbeatTokenReturningError:(id *)arg1;
- (void)getTracksWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getHistoryWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)endVisualEngagement;
- (void)endEnablingPolicyEngine;
- (void)didHitPlaybackTimeoutEndingPlayback:(_Bool)arg1 withCurrentItem:(id)arg2;
- (void)beginVisualEngagement;
- (void)_beginEnablingPolicyEngine;
- (void)beginEnablingPolicyEngine;
- (void)attemptSlotAcquisition;
@property(retain, nonatomic) MPURTCReportingController *RTCReportingController;
@property(retain, nonatomic) RUJingleTiltReportingController *jingleTiltReportingController;
@property(retain, nonatomic) MPUReportingController *globalReportingController;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (void)_radioStreamTrackAVItemDidReceiveTimedMetadataPingsNotification:(id)arg1;
- (void)_radioFairPlayControllerSAPSessionWillBeginLoadingNotification:(id)arg1;
- (void)_radioFairPlayControllerSAPSessionDidFinishLoadingNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_itemNewAccessLogEntryNotification:(id)arg1;
- (void)_itemDidFinishLoadingNotification:(id)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)_itemAssetLoadedDidChangeNotification:(id)arg1;
- (void)_heartbeatChangedNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

