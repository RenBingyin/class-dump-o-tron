//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface NDStatusMonitor : NSObject
{
    struct __CFRunLoopSource *_dynamicStoreSource;
    NSMutableArray *_blocksToExecuteAfterNetworkChange;
    unsigned long long _networkChangeEventCount;
    NSObject<OS_dispatch_queue> *_queue;
    int _symptomToken;
}

+ (id)sharedMonitor;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)stopMonitoringDynamicStore;
- (void)startMonitoringDynamicStore;
- (void)handleBetterNetworkEvent;
- (void)handleDynamicStoreCallback:(struct __SCDynamicStore *)arg1 changedKeys:(struct __CFArray *)arg2;
- (void)performBlockAfterNetworkChangedEvent:(CDUnknownBlockType)arg1 numberOfPreviousRetries:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end

