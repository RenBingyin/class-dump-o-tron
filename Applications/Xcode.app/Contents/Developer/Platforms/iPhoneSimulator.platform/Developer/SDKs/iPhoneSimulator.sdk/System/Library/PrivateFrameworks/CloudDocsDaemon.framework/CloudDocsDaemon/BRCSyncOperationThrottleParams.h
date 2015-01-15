//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface BRCSyncOperationThrottleParams : NSObject
{
    double minWait;
    double maxWait;
    double ratioOnSuccess;
    double ratioOnFailure;
    double inactivityKickbackDelay;
    double inactivityKickbackRatio;
}

@property(nonatomic) double inactivityKickbackRatio; // @synthesize inactivityKickbackRatio;
@property(nonatomic) double inactivityKickbackDelay; // @synthesize inactivityKickbackDelay;
@property(nonatomic) double ratioOnFailure; // @synthesize ratioOnFailure;
@property(nonatomic) double ratioOnSuccess; // @synthesize ratioOnSuccess;
@property(nonatomic) double maxWait; // @synthesize maxWait;
@property(nonatomic) double minWait; // @synthesize minWait;
- (id)initWithParams:(id)arg1 defaults:(id)arg2;
- (_Bool)check;
- (void)setupWithParams:(id)arg1 defaults:(id)arg2;
- (double)doubleForKey:(id)arg1 inParams:(id)arg2 defaults:(id)arg3;

@end

