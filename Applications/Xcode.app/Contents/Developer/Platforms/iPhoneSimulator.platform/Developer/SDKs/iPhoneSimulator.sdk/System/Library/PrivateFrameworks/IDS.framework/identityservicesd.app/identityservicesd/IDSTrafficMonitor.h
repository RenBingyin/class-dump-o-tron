//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSTimer;

@interface IDSTrafficMonitor : NSObject
{
    NSMutableDictionary *_traffic;
    NSTimer *_hourlyTimer;
    NSTimer *_dailyTimer;
    NSRecursiveLock *_lock;
}

+ (id)sharedInstance;
- (_Bool)noteOutgoingServerMessageForService:(id)arg1 requestor:(id)arg2;
- (_Bool)noteOutgoingMessageForService:(id)arg1 requestor:(id)arg2;
- (void)noteIncomingLocalMessageForService:(id)arg1;
- (void)noteIncomingMessageForService:(id)arg1;
- (_Bool)noteQueryRequestForService:(id)arg1 requestor:(id)arg2;
- (_Bool)noteQueryForService:(id)arg1 requestor:(id)arg2;
- (void)logState;
- (_Bool)_noteActionType:(id)arg1 forService:(id)arg2 requestor:(id)arg3;
- (void)_setHourlyTimer;
- (void)_setDailyTimer;
- (void)_hourlyTimer:(id)arg1;
- (void)_dailyTimer:(id)arg1;
- (void)dealloc;
- (id)init;

@end
