//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface EventMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_events;
    double _lastPollTime;
    NSObject<OS_dispatch_source> *_pollTimer;
}

+ (id)sharedEventMonitor;
- (void)_willRemoveEvent:(id)arg1;
- (void)_reloadPollTimer;
- (void)_fireEventsAfterPollTimer;
- (void)_cancelPollTimer;
- (void)removeEvent:(id)arg1;
- (id)monitorEvent:(id)arg1;
- (void)dealloc;
- (id)init;

@end

