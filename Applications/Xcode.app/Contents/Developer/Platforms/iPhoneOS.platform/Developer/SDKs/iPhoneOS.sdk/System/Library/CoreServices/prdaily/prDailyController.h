//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSObject<OS_dispatch_queue>;

@interface prDailyController : NSObject
{
    _Bool _btaJobExists;
    double _lastWakeupTime;
    NSDate *_expectedWakeupTime;
    NSDate *_plannedNextWakeupTime;
    NSObject<OS_dispatch_queue> *_requestQueue;
    int _todayDaysSince1970;
}

+ (int)_daysSince1970;
@property(nonatomic) double lastWakeupTime; // @synthesize lastWakeupTime=_lastWakeupTime;
- (void)_rescheduleCurrentTrigger;
- (void)_rescheduleNextTrigger;
- (id)newBackgroundTaskAgentJobWithNextWakeupTime:(id)arg1;
- (void)_setupBackgroundTaskAgentHandler;
- (void)_handleBackgroundTaskAgentEvent:(id)arg1;
- (void)_handleRequest:(id)arg1;
- (void)handleTrigger;
- (_Bool)_alreadyDumpedToday;
- (void)_markLastWakeupTime;
- (int)_getWakeupStatus;
- (id)plannedNextWakeupTime;
- (id)expectedWakeupTime;
- (id)init;

@end

