//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSApplicationStateMonitor;

@interface GKApplicationStateMonitor : NSObject
{
    BKSApplicationStateMonitor *_applicationStateMonitor;
}

@property BKSApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
- (void)startObservingStateChangesForBundleID:(id)arg1;
- (_Bool)observingStateChangesForBundleID:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType handler;
- (void)dealloc;
- (id)init;

@end

