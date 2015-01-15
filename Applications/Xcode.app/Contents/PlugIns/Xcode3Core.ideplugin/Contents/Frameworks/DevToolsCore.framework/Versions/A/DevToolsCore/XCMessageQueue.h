//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, NSMutableArray;

@interface XCMessageQueue : NSObject
{
    NSMutableArray *_queue;
    id _runloopSource;
    NSCountedSet *_runloops;
    id _delegate;
    unsigned long long _firstSuspendedIndex;
    BOOL _dispatchSuspended;
}

+ (BOOL)backgroundThreadsShouldSynchronizeWithMainThread;
+ (void)initialize;
- (void).cxx_destruct;
- (void)resumeDispatch;
- (void)suspendDispatchAfterCurrentQueueDrains;
- (void)addObject:(id)arg1;
- (id)dequeueFirstObject;
- (unsigned long long)count;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)isValid;
- (void)invalidate;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)init;

@end

