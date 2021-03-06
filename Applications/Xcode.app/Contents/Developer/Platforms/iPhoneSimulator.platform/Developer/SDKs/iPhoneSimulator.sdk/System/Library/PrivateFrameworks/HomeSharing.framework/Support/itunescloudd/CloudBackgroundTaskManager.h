//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface CloudBackgroundTaskManager : NSObject
{
    NSMapTable *_jobNameToSelectorMap;
}

+ (id)sharedTaskManager;
- (void).cxx_destruct;
- (id)_nextJaliscoAppsPollTimeKey;
- (id)_nextJaliscoMediaPollTimeKey;
- (id)_nextEvaluateSyncRulesThrottleOperationTimeKey;
- (id)_nextEvaluateSyncRulesOperationTimeKey;
- (double)_throttledDeferredEvaluateKeepLocalTime;
- (id)_homeSharingPrefsNumberForKey:(id)arg1;
- (void)_setHomeSharingPrefsNumber:(id)arg1 forKey:(id)arg2;
- (id)_baseBtaJobForPeriodicPoll;
- (id)_baseBtaJobForDeferredPush;
- (id)_baseBtaJobForDeferredKeepLocal;
- (id)_baseBtaJobForPeriodicKeepLocal;
- (void)_handleJobNamed:(const char *)arg1 satisfied:(_Bool)arg2 invalid:(_Bool)arg3;
- (void)_unscheduleJobNamed:(const char *)arg1;
- (void)_scheduleJobNamed:(const char *)arg1 withStartTime:(id)arg2 baseBtaJob:(id)arg3;
- (void)_initializeBTAHandlers;
- (void)_handleJaliscoAppsDeferredPushUpdateJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;
- (void)_handleJaliscoAppsPeriodicPollJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;
- (void)_handleJaliscoMediaDeferredPushUpdateJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;
- (void)_handleJaliscoMediaPeriodicPollJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;
- (void)_handleSagaDeferredPushUpdateJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;
- (void)_handleUpdateKeepLocalRulesDeferredJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;
- (void)_handleUpdateKeepLocalRulesPeriodicJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;
- (void)unscheduleJaliscoAppsDeferredPushUpate;
- (void)scheduleJaliscoAppsDeferredPushUpate;
- (void)unscheduleJaliscoAppsPeriodicPoll;
- (void)scheduleJaliscoAppsPeriodicPoll;
- (void)unscheduleJaliscoMediaDeferredPushUpate;
- (void)scheduleJaliscoMediaDeferredPushUpate;
- (void)unscheduleJaliscoMediaPeriodicPoll;
- (void)scheduleJaliscoMediaPeriodicPoll;
- (void)unscheduleSagaDeferredPushUpate;
- (void)scheduleSagaDeferredPushUpate;
- (void)unscheduleDeferredUpdateKeepLocalRules;
- (void)scheduleDeferredUpdateKeepLocalRules;
- (void)unschedulePeriodicUpdateKeepLocalRules;
- (void)schedulePeriodicUpdateKeepLocalRules;
- (id)init;

@end

