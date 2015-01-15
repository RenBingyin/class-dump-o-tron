//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface AVVoiceController : NSObject
{
    void *_impl;
}

@property(getter=isStopOnEndpointEnabled) _Bool stopOnEndpointEnabled;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (void)updateMeters;
@property(getter=isMeteringEnabled) _Bool meteringEnabled;
@property float playbackVolume;
@property float alertVolume;
@property(readonly, getter=isRecording) _Bool recording;
@property(readonly, getter=isPlaying) _Bool playing;
- (_Bool)setPlaybackBufferDuration:(double)arg1;
- (double)getPlaybackBufferDuration;
@property(readonly) NSDictionary *playbackSettings;
@property id <AVVoiceControllerPlaybackDelegate> playbackDelegate; // @dynamic playbackDelegate;
@property double recordEndWaitTime;
@property double recordInterspeechWaitTime;
@property double recordStartWaitTime;
@property int recordEndpointMode;
@property(retain) id <Endpointer> endpointerDelegate;
- (_Bool)setRecordBufferDuration:(double)arg1;
- (double)getRecordBufferDuration;
@property(readonly) NSDictionary *recordSettings;
@property id <AVVoiceControllerRecordDelegate> recordDelegate; // @dynamic recordDelegate;
- (void)stopPlaying;
- (_Bool)startPlaying;
- (_Bool)preparePlaybackFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)preparePlaybackWithSettings:(id)arg1 error:(id *)arg2;
- (void)stopRecording;
- (_Bool)startRecording;
- (_Bool)playAlertSoundForType:(int)arg1;
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(int)arg2;
- (_Bool)prepareRecordWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)setCurrentContext:(id)arg1 error:(id *)arg2;
- (_Bool)willAcceptContext:(id)arg1;
- (void)releaseAudioSession:(unsigned long long)arg1;
- (void)releaseAudioSession;
- (void)dealloc;
- (void)finalize;
- (void)prewarmAudioSession;
- (id)initWithContext:(id)arg1 error:(id *)arg2;
- (void)endPlaybackInterruption;
- (void)beginPlaybackInterruption;
- (void)endRecordInterruption;
- (void)beginRecordInterruption;
- (void)decodeError;
- (void)finishedPlaying;
- (void)playbackBufferReceived:(struct MyAudioQueueBuffer *)arg1;
- (void)beganPlaying;
- (void)encodeError;
- (void)endpointDetected;
- (void)interspeechPointDetected;
- (void)startpointDetected;
- (void)finishedRecording;
- (void)recordBufferReceived:(struct MyAudioQueueBuffer *)arg1;
- (void)beganRecording;
- (void)handleMediaServerReset:(id)arg1;
- (void)handleMediaServerDeath:(id)arg1;
- (void)handleRouteChange:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (void)hardwareConfigChanged;
- (void)removeSessionNotifications;
- (void)setSessionNotifications;
- (struct ControllerImpl *)impl;
@property(getter=isSynchronousCallbackEnabled) _Bool synchronousCallbackEnabled;
@property(getter=isStopOnBargeInEnabled) _Bool stopOnBargeInEnabled;
@property(getter=isBargeInDetectEnabled) _Bool bargeInDetectEnabled;
@property(readonly) NSDictionary *voiceTriggerInfo;
@property(readonly) unsigned long long lastRecordStartTime;
@property(readonly, copy) NSString *recordRoute;

@end

