//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVSpeechSynthesizer.h"

@interface AVSpeechSynthesizer (Implementation)
- (_Bool)continueSpeaking;
- (_Bool)pauseSpeakingAtBoundary:(long long)arg1;
- (_Bool)stopSpeakingAtBoundary:(long long)arg1;
- (void)_handleSpeechDone:(id)arg1 successful:(_Bool)arg2;
- (void)_speakUtterance:(id)arg1;
- (void)_didBeginInterruption;
- (void)_didEndInterruption;
- (void)speakUtterance:(id)arg1;
- (void)_enqueueNextJob;
- (_Bool)isPaused;
- (_Bool)isSpeaking;
- (int)_convertBoundary:(long long)arg1;
- (void)_handleAudioInterruption:(id)arg1;
- (void)_handleMediaServicesWereReset:(id)arg1;
- (void)_handleMediaServicesWereLost:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)inflightUtterance;
- (void)setInflightUtterance:(id)arg1;
- (id)speechQueue;
- (id)speechManager;
- (void)setShouldHandleAudioInterruptions:(_Bool)arg1;
- (_Bool)shouldHandleAudioInterruptions;
- (void)setRequestedUtteranceDuringAudioInterruption:(id)arg1;
- (id)requestedUtteranceDuringAudioInterruption;
- (void)setDidRequestResumeSpeakingDuringAudioInterruption:(_Bool)arg1;
- (_Bool)didRequestResumeSpeakingDuringAudioInterruption;
- (void)setDidRequestPauseSpeakingDuringAudioInterruption:(_Bool)arg1;
- (_Bool)didRequestPauseSpeakingDuringAudioInterruption;
- (void)setDidRequestStartSpeakingDuringAudioInterruption:(_Bool)arg1;
- (_Bool)didRequestStartSpeakingDuringAudioInterruption;
- (void)setIsInAudioInterruption:(_Bool)arg1;
- (_Bool)isInAudioInterruption;
- (void)setWasSpeakingBeforeAudioInterruption:(_Bool)arg1;
- (_Bool)wasSpeakingBeforeAudioInterruption;
@end

