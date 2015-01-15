//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCWorkQueueCommandInvocation.h>

@class DVTSearchPath, XCPath, XCStringList;

@interface XCWorkQueueCommandSubprocessInvocation : XCWorkQueueCommandInvocation
{
    XCStringList *_arguments;
    XCStringList *_environment;
    XCPath *_workingDirPath;
    DVTSearchPath *_searchPath;
    int _exitCode;
    unsigned long long _numOutputBytesRead;
    double _userTime;
    double _systemTime;
}

- (void).cxx_destruct;
- (void)cancelAndWaitUntilFinished;
- (void)killSubprocess;
- (void)handleEndOfOutput;
- (void)reapExitedSubprocess;
- (void)handleOutputBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)maxNumberOfOutputBytesToAcceptFromSubprocessInvocations;
- (BOOL)startRunning;
- (BOOL)launchSubprocessWithArguments:(const char **)arg1 environment:(const char **)arg2 workingDirectory:(const char *)arg3;
- (void)createOutputStreamIfNeeded;
- (double)elapsedSystemTime;
- (double)elapsedUserTime;
@property BOOL isCancelled;
- (int)exitCode;
- (id)initWithWorkQueueCommand:(id)arg1 arguments:(id)arg2 environmentAssignments:(id)arg3 workingDirectoryPath:(id)arg4;
- (id)initWithWorkQueueCommand:(id)arg1 arguments:(id)arg2 environmentAssignments:(id)arg3 workingDirectoryPath:(id)arg4 searchPath:(id)arg5;

@end
