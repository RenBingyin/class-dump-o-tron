//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

#import "FBProcessObserver.h"

@class BSWatchdog, FBProcess, FBProcessManager, NSString;

@interface FBWaitForProcessDeathTransaction : FBTransaction <FBProcessObserver>
{
    FBProcessManager *_manager;
    FBProcess *_process;
    double _timeout;
    BSWatchdog *_watchdog;
}

@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, retain, nonatomic) FBProcess *process; // @synthesize process=_process;
- (void)processDidExit:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_begin;
- (void)dealloc;
- (id)initWithProcess:(id)arg1 timeout:(double)arg2;
- (id)initWithProcess:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

