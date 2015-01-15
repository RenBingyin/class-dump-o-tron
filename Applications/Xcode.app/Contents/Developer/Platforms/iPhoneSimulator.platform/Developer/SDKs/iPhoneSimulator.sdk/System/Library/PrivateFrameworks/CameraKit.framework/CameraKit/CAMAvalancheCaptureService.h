//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraKit/CAMCaptureService.h>

@class CAMAvalancheSession, NSArray, NSCountedSet, NSMutableDictionary, NSMutableSet;

@interface CAMAvalancheCaptureService : CAMCaptureService
{
    _Bool _supportsAvalancheAnalysis;
    NSArray *_recentFaceMetadata;
    NSMutableDictionary *__avalancheSessionsByUUID;
    CAMAvalancheSession *__activeAvalancheSession;
    NSCountedSet *__inflightRequestsByUUID;
    NSMutableSet *__avalancheSessionsToBeFinalizedAfterNextResponseCompletion;
    double __avalancheStartTime;
}

@property(readonly, nonatomic) double _avalancheStartTime; // @synthesize _avalancheStartTime=__avalancheStartTime;
@property(readonly, nonatomic) NSMutableSet *_avalancheSessionsToBeFinalizedAfterNextResponseCompletion; // @synthesize _avalancheSessionsToBeFinalizedAfterNextResponseCompletion=__avalancheSessionsToBeFinalizedAfterNextResponseCompletion;
@property(readonly, nonatomic) NSCountedSet *_inflightRequestsByUUID; // @synthesize _inflightRequestsByUUID=__inflightRequestsByUUID;
@property(readonly, nonatomic) CAMAvalancheSession *_activeAvalancheSession; // @synthesize _activeAvalancheSession=__activeAvalancheSession;
@property(readonly, nonatomic) NSMutableDictionary *_avalancheSessionsByUUID; // @synthesize _avalancheSessionsByUUID=__avalancheSessionsByUUID;
@property(copy, nonatomic) NSArray *recentFaceMetadata; // @synthesize recentFaceMetadata=_recentFaceMetadata;
@property(nonatomic) _Bool supportsAvalancheAnalysis; // @synthesize supportsAvalancheAnalysis=_supportsAvalancheAnalysis;
- (void).cxx_destruct;
- (void)responseWasCompleted:(id)arg1 error:(id)arg2;
- (void)responseWasGenerated:(id)arg1 error:(id)arg2;
- (void)requestWasEnqueued:(id)arg1;
- (void)_finalizeAndBeginNewAvalancheSession;
- (void)_cancelAvalancheSession:(id)arg1;
- (void)_finalizeAvalancheSession:(id)arg1;
- (void)_ensureValidAvalancheSession;
- (_Bool)_canFinishCapturingActiveAvalanche;
- (long long)numberOfPhotos;
- (_Bool)canContinueAvalancheCapture;
- (void)cancelAvalancheCapture;
- (void)finishAvalancheCapture;
- (void)startAvalancheCapture;
- (id)init;

@end

