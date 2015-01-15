//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface XREpochBallotBox : NSObject
{
    struct _XRDeviceTimeInfo _initialTimeInfo;
    NSDate *_hostAbsoluteStartTime;
    NSDate *_hostAbsoluteEndTime;
    unsigned long long _newMachAbsTime;
}

- (void).cxx_destruct;
- (void)voteNanosecondsBeforeEndTime:(unsigned long long)arg1;
- (unsigned long long)bestTargetMachEpoch;
- (id)bestHostAbsoluteStartTime;
- (struct _XRDeviceTimeInfo)bestTargetDeviceTimeInfo;
- (void)voteDeviceRelativeMachAbsoluteTime:(unsigned long long)arg1;
- (id)initWithInitialTimeInfo:(struct _XRDeviceTimeInfo)arg1 hostAbsoluteStartTime:(id)arg2 hostAbsoluteEndTime:(id)arg3;

@end

