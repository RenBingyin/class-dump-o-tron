//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OITSUPerformanceTest : NSObject
{
    NSString *mName;
    SEL mSelector;
    id mTarget;
    double mGoalTime;
    double mPrecision;
    _Bool mQuiet;
    struct TSUOpstat_s mTiming;
    _Bool mPassed;
}

+ (id)csvHeader;
@property(readonly, nonatomic) _Bool passed; // @synthesize passed=mPassed;
@property(nonatomic) _Bool quiet; // @synthesize quiet=mQuiet;
@property(nonatomic) double precision; // @synthesize precision=mPrecision;
@property(nonatomic) double goalTime; // @synthesize goalTime=mGoalTime;
@property(nonatomic) struct TSUOpstat_s timing; // @synthesize timing=mTiming;
@property(readonly, nonatomic) NSString *name; // @synthesize name=mName;
- (id)csvString;
- (void)report;
- (void)run;
- (void)dealloc;
- (id)initWithName:(id)arg1 selector:(SEL)arg2 target:(id)arg3 goalTime:(double)arg4;

@end

