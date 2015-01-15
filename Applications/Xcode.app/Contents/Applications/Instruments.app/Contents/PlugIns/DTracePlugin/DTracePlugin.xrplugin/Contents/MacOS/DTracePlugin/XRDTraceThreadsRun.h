//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFTDTraceRun.h"

#import "XRThreadSource.h"

@class NSMutableArray, NSMutableDictionary, XRThread, XRThreadGroup;

@interface XRDTraceThreadsRun : PFTDTraceRun <XRThreadSource>
{
    NSMutableArray *_threadGroups;
    XRThreadGroup *_activeThreadGroup;
    XRThreadGroup *_allThreads;
    XRThreadGroup *_selectedThreads;
    XRThreadGroup *_running;
    XRThreadGroup *_terminated;
    XRThread *_focusedThread;
    NSMutableDictionary *_tempKernelBacktraceMap;
    BOOL _warnedOfThrashingConcurrentDispatchWork;
    NSMutableDictionary *_threadUniquingTable;
    int _threadUniquingNextId;
    int _processingOnCPUEventType;
    int _processingLWPCreateEventType;
    int _processingLWPCreateEventType1;
    int _processingLWPCreateEventType2;
    int _processingLWPExitEventType;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
- (id)focusedThread;
- (void)setFocusedThread:(id)arg1;
- (void)setSelectedThreadGroup:(id)arg1;
- (id)selectedThreadGroup;
- (id)allThreadsGroup;
- (id)allThreads;
- (id)threadGroups;
- (id)graphingThreadGroup;
- (id)threadNameForThreadAtIndex:(unsigned long long)arg1;
- (BOOL)isThreadRunningForIndex:(unsigned long long)arg1;
- (unsigned long long)threadIdForIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfThreads;
- (id)_substitutePredicateForPredicate:(id)arg1;
- (void)addRawEvent:(struct PFTEvent)arg1 dtraceEvent:(id)arg2 stackTrace:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

