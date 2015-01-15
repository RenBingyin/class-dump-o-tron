//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLPlatformObject.h"

#import "CPLEngineSyncManagerImplementation.h"

@class NSCountedSet, NSObject<OS_dispatch_queue>, NSProgress, NSString;

@interface CPLBaseSyncManager : CPLPlatformObject <CPLEngineSyncManagerImplementation>
{
    NSCountedSet *_activities;
    unsigned long long _indicatorAge;
    double _startShowingIndicatorTime;
    NSObject<OS_dispatch_queue> *_indicatorQueue;
    _Bool _foreground;
    NSProgress *_progress;
    unsigned long long _currentState;
    _Bool _closed;
}

- (void).cxx_destruct;
- (void)prepareForClose;
- (void)didProgress:(float)arg1 forState:(unsigned long long)arg2;
- (void)didMoveToState:(unsigned long long)arg1;
- (long long)_baseProgressForState:(unsigned long long)arg1 totalUnits:(long long *)arg2;
- (void)syncSessionDidSucceed;
- (void)syncSessionDidFailWithError:(id)arg1;
- (void)didFinishSyncSession;
- (void)willStartSyncSession;
- (void)setSyncSessionShouldBeForeground:(_Bool)arg1;
- (void)endClientWork:(id)arg1;
- (void)beginClientWork:(id)arg1;
- (void)_stopShowingIndicator:(id)arg1;
- (void)_startShowingIndicator:(id)arg1;
- (void)_emitActivityStateLog;
- (void)_actuallyStopShowingIndicatorLocked;
- (void)_actuallyStartShowingIndicatorLocked;
- (_Bool)_shouldShowIndicator;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

