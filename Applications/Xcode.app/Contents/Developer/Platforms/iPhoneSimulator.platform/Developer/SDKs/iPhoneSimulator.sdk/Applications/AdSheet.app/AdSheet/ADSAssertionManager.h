//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface ADSAssertionManager : NSObject
{
    NSMutableSet *_clientAssertions;
    NSCountedSet *_objectAssertions;
    NSObject<OS_dispatch_queue> *_queue;
    double _shutdownScheduledTime;
}

+ (id)sharedInstance;
@property(nonatomic) double shutdownScheduledTime; // @synthesize shutdownScheduledTime=_shutdownScheduledTime;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSCountedSet *objectAssertions; // @synthesize objectAssertions=_objectAssertions;
@property(nonatomic) NSMutableSet *clientAssertions; // @synthesize clientAssertions=_clientAssertions;
- (void)returnObjectAssertion:(id)arg1;
- (void)takeObjectAssertion:(id)arg1;
- (void)_shutdown;
- (void)_returnClientAssertion:(id)arg1;
- (void)_takeClientAssertion:(id)arg1;
- (void)_takePowerAssertionForInterval:(double)arg1;
- (void)_releasePowerAssertionIfHeld;
- (void)returnClientAssertion:(id)arg1;
- (void)takeClientAssertion:(id)arg1;
@property(readonly, nonatomic) long long numberOfActiveAssertions;
- (id)init;

@end

