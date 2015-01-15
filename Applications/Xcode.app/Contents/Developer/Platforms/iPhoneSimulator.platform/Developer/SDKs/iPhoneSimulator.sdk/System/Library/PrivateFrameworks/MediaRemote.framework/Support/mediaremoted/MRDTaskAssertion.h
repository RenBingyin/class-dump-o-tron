//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSProcessAssertion, NSString, NSTimer;

@interface MRDTaskAssertion : NSObject
{
    NSString *_bundleID;
    int _pid;
    BKSProcessAssertion *_processAssertion;
    NSTimer *_invalidationTimer;
    _Bool _acquired;
    long long _type;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)_cancelInvalidationTimer;
@property(readonly, nonatomic) int pid;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidateOnDate:(id)arg1;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)arg1 pid:(int)arg2;
- (id)initWithType:(long long)arg1 bundleID:(id)arg2;
- (id)_initWithType:(long long)arg1 bundleID:(id)arg2 orPID:(int)arg3;

@end

