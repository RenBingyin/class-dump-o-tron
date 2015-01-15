//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRLeak.h"

@class NSArray, NSMutableArray, NSString;

@interface XRBacktraceAggregatedLeak : XRLeak
{
    NSMutableArray *_leaks;
    NSString *_agreedName;
}

- (id)className;
- (unsigned int)size;
- (unsigned int)count;
- (unsigned long long)address;
@property(readonly) NSArray *leaks;
- (void)addLeak:(id)arg1;
- (void)dealloc;
- (id)initWithBacktrace:(id)arg1;

@end

