//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSNotificationQueue : NSObject
{
    id _notificationCenter;
    id _asapQueue;
    id _asapObs;
    id _idleQueue;
    id _idleObs;
}

+ (id)defaultQueue;
- (void)dequeueNotificationsMatching:(id)arg1 coalesceMask:(unsigned long long)arg2;
- (void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2 coalesceMask:(unsigned long long)arg3 forModes:(id)arg4;
- (void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2;
- (void)_flushNotificationQueue;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1;
- (id)init;

@end

