//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSUProgress.h>

@class NSObject<OS_dispatch_queue>, TSUProgressContext;

__attribute__((visibility("hidden")))
@interface TSUProgressContextProgress : TSUProgress
{
    TSUProgressContext *mProgressContext;
    NSObject<OS_dispatch_queue> *mProgressContextObserverQueue;
    _Bool hasAddedProgressContextObserver;
}

- (void)p_progressDidChange:(id)arg1;
- (void)p_updateProgressContextObserver;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)isIndeterminate;
- (double)maxValue;
- (double)value;
- (void)dealloc;
- (id)init;
- (id)initWithProgressContext:(id)arg1;

@end

