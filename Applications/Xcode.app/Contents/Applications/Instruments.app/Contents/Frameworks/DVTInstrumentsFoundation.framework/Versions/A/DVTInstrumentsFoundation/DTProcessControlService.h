//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTXService.h"

#import "DTProcessControlServiceAuthorizedMethods.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface DTProcessControlService : DTXService <DTProcessControlServiceAuthorizedMethods>
{
    NSMutableArray *_pids;
    NSMutableArray *_sources;
    NSMutableDictionary *_activeIODispatchSources;
    NSObject<OS_dispatch_queue> *_deathNoteQueue;
}

- (void).cxx_destruct;
- (void)watchOutputFileDescriptor:(int)arg1 forPid:(int)arg2;
- (int)cleanupPid:(int)arg1;
- (void)sendProcessControlEvent:(id)arg1 toPid:(id)arg2;
- (void)_performMemoryWarningForPid:(int)arg1;
- (void)killPid:(id)arg1;
- (id)launchSuspendedProcessWithDevicePath:(id)arg1 bundleIdentifier:(id)arg2 environment:(id)arg3 arguments:(id)arg4 options:(id)arg5;
- (id)launchSuspendedProcessWithDevicePath:(id)arg1 bundleIdentifier:(id)arg2 environment:(id)arg3 arguments:(id)arg4;
- (void)suspendPid:(id)arg1;
- (void)resumePid:(id)arg1;
- (void)stopObservingPid:(id)arg1;
- (void)startObservingPid:(id)arg1;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

