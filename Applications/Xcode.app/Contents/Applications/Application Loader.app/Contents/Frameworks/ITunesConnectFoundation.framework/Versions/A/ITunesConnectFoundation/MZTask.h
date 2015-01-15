//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSPipe, NSTask;

@interface MZTask : NSObject
{
    NSTask *_task;
    NSPipe *_stdoutPipe;
    NSPipe *_stderrPipe;
    NSFileHandle *_stdoutHandle;
    NSFileHandle *_stderrHandle;
    id <MZTaskDelegate> _delegate;
    BOOL _terminated;
    long long _terminationStatus;
}

- (id)description;
- (long long)terminationStatus;
- (BOOL)isRunning;
- (long long)execute;
- (void)launch;
- (void)setArguments:(id)arg1;
- (void)setLaunchPath:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (void)mzTaskDidTerminate:(id)arg1;
- (void)mzStderrPipeDataAvailable:(id)arg1;
- (void)mzStdoutPipeDataAvailable:(id)arg1;

@end

