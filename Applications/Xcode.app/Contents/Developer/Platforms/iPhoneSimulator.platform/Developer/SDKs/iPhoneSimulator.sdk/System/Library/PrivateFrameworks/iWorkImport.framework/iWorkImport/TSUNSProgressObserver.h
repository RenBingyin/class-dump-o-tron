//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSProgress, TSUBasicProgress, TSUProgressContext;

__attribute__((visibility("hidden")))
@interface TSUNSProgressObserver : NSObject
{
    NSProgress *_nsProgress;
    TSUProgressContext *_progressContext;
    TSUBasicProgress *_basicProgress;
    double _basicProgressMaxValue;
}

+ (id)observerForNSProgress:(id)arg1 reportingToBasicProgress:(id)arg2 maxValue:(double)arg3;
+ (id)observerForNSProgress:(id)arg1 reportingToProgressContext:(id)arg2;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stop;
- (void)start;
- (id)initWithNSProgress:(id)arg1 progressContext:(id)arg2 basicProgress:(id)arg3 basicProgressMaxValue:(double)arg4;
- (id)init;

@end

