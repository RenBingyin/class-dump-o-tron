//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRManagedEvent.h"

@interface XRSamplerEvent : XRManagedEvent
{
    unsigned long long _timestamp;
    unsigned long long _tid;
    id <CommonRawStack> _backtrace;
    unsigned int _cpu;
    unsigned int _threadState;
    unsigned long long _runningTime;
}

+ (void)configureDescriptor:(id)arg1 forStorageManager:(id)arg2;
+ (void)_setBlockForLegacyDecoding:(CDUnknownBlockType)arg1;
@property(readonly) id <CommonRawStack> backtrace; // @synthesize backtrace=_backtrace;
@property(readonly) unsigned int cpuIndex; // @synthesize cpuIndex=_cpu;
@property(readonly) unsigned long long tid; // @synthesize tid=_tid;
@property(readonly) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) unsigned int stackDepth;
@property(readonly) unsigned long long runningTime;

@end

