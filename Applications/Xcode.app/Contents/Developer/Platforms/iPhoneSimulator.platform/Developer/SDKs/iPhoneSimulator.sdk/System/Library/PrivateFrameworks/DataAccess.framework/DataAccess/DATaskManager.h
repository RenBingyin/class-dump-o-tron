//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DAAccount, NSArray, NSMutableArray, NSMutableSet, NSTimer;

@interface DATaskManager : NSObject
{
    DAAccount *_account;
    int _state;
    id <DATask> _activeModalTask;
    id <DATask> _activeQueuedTask;
    NSMutableArray *_queuedExclusiveTasks;
    id <DATask> _activeExclusiveTask;
    NSMutableSet *_independentTasks;
    NSMutableSet *_heldIndependentTasks;
    NSMutableSet *_modalHeldIndependentTasks;
    NSMutableArray *_mQueuedTasks;
    id <DATask> _modalHeldActiveQueuedTask;
    NSMutableArray *_queuedModalTasks;
    NSTimer *_managerIdleTimer;
    NSTimer *_userInitiatedSyncTimer;
}

@property(retain, nonatomic) NSTimer *userInitiatedSyncTimer; // @synthesize userInitiatedSyncTimer=_userInitiatedSyncTimer;
@property(retain, nonatomic) NSTimer *managerIdleTimer; // @synthesize managerIdleTimer=_managerIdleTimer;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *queuedModalTasks; // @synthesize queuedModalTasks=_queuedModalTasks;
@property(retain, nonatomic) id <DATask> modalHeldActiveQueuedTask; // @synthesize modalHeldActiveQueuedTask=_modalHeldActiveQueuedTask;
@property(retain, nonatomic) NSMutableArray *mQueuedTasks; // @synthesize mQueuedTasks=_mQueuedTasks;
@property(retain, nonatomic) NSMutableSet *modalHeldIndependentTasks; // @synthesize modalHeldIndependentTasks=_modalHeldIndependentTasks;
@property(retain, nonatomic) NSMutableSet *heldIndependentTasks; // @synthesize heldIndependentTasks=_heldIndependentTasks;
@property(retain, nonatomic) NSMutableSet *independentTasks; // @synthesize independentTasks=_independentTasks;
@property(retain, nonatomic) id <DATask> activeExclusiveTask; // @synthesize activeExclusiveTask=_activeExclusiveTask;
@property(retain, nonatomic) NSMutableArray *queuedExclusiveTasks; // @synthesize queuedExclusiveTasks=_queuedExclusiveTasks;
@property(retain, nonatomic) id <DATask> activeQueuedTask; // @synthesize activeQueuedTask=_activeQueuedTask;
@property(retain, nonatomic) id <DATask> activeModalTask; // @synthesize activeModalTask=_activeModalTask;
@property(nonatomic) __weak DAAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (void)taskManagerDidAddTask:(id)arg1;
- (void)_releasePowerAssertionForTask:(id)arg1;
- (void)_retainPowerAssertionForTask:(id)arg1;
- (void)_cancelTasksWithReason:(int)arg1;
- (void)_scheduleStartModal:(id)arg1;
- (void)_schedulePerformTask:(id)arg1;
- (void)_scheduleSelector:(SEL)arg1 withArgument:(id)arg2;
- (void)_makeStateTransition;
- (void)_reactivateHeldTasks;
- (void)_startModal:(id)arg1;
- (void)_requestCancelTasksWithReason:(int)arg1;
- (void)_performTask:(id)arg1;
- (_Bool)taskIsModal:(id)arg1;
- (void)taskEndModal:(id)arg1;
- (void)taskRequestModal:(id)arg1;
- (void)taskDidFinish:(id)arg1;
- (_Bool)_hasTasksIndicatingARunningSync;
- (_Bool)_hasTasksForcingNetworkConnection;
- (_Bool)_taskInQueueForcesNetworkConnection:(id)arg1;
- (_Bool)_taskForcesNetworking:(id)arg1;
- (void)_logSyncEnd;
- (void)_clearUserInitiatedSyncTimer;
- (void)_useOpportunisticSocketsAgain;
- (id)stateString;
- (void)shutdown;
- (void)cancelAllTasks;
- (void)cancelTask:(id)arg1;
- (void)cancelTask:(id)arg1 withUnderlyingError:(id)arg2;
- (void)submitQueuedTask:(id)arg1;
- (void)submitIndependentTask:(id)arg1;
- (void)submitExclusiveTask:(id)arg1 toFrontOfQueue:(_Bool)arg2;
- (void)submitExclusiveTask:(id)arg1;
- (_Bool)isShutdown;
- (id)accountPersistentUUID;
- (id)accountID;
- (id)identityPersist;
- (_Bool)useSSL;
- (id)password;
- (id)server;
- (long long)port;
- (id)user;
- (id)userAgent;
- (id)deviceType;
- (_Bool)_useFakeDescriptions;
- (id)_version;
- (void)_populateVersionDescriptions;
@property(readonly, nonatomic) NSArray *queuedTasks;
- (void)dealloc;
- (id)init;
- (id)initWithAccount:(id)arg1;
@property(readonly, nonatomic) NSArray *allTasks;

@end

