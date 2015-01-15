//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSPortDeathWatcher, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface BKAlternateSystemApp : NSObject
{
    id <BKAlternateSystemAppDelegate> _delegate;
    NSString *_bundleID;
    NSDictionary *_options;
    NSString *_jobLabel;
    NSObject<OS_dispatch_queue> *_queue;
    BSPortDeathWatcher *_portDeathWatcher;
}

+ (id)bundleInfoOverrides;
+ (void)deleteAllJobs;
@property(retain, nonatomic) BSPortDeathWatcher *portDeathWatcher; // @synthesize portDeathWatcher=_portDeathWatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *jobLabel; // @synthesize jobLabel=_jobLabel;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) id <BKAlternateSystemAppDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_noteExited:(unsigned long long)arg1;
- (void)_noteLaunchSucceeded;
- (void)_noteLaunchFailed:(int)arg1;
- (_Bool)terminate;
- (_Bool)launch;
- (void)dealloc;
- (id)initWithBundleId:(id)arg1 options:(id)arg2 queue:(id)arg3;

@end

