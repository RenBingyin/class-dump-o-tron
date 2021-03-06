//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFTRun.h"

#import "SymbolAwareRun.h"
#import "XRSourceQuery.h"

@class NSArrayController, NSMutableArray, NSPredicate, NSString, XRBacktraceRepository;

@interface PFTDTraceRun : PFTRun <SymbolAwareRun, XRSourceQuery>
{
    struct __CFArray *_eventAttributes;
    NSMutableArray *_eventSymbolStacks;
    NSArrayController *_attrController;
    NSPredicate *_dataFilterPredicate;
    long long _attributeCount;
    XRBacktraceRepository *_primaryRepository;
    BOOL _reloadedDataNeedsDescriptors;
    struct XRTimeRange _selectedTimeRange;
}

+ (void)initialize;
- (void)dataProcessingComplete;
- (void)addStackTrace:(id)arg1 forRawEvent:(struct PFTEvent)arg2 dtraceEvent:(id)arg3 symbolicateStack:(BOOL)arg4;
- (void)addRawEvent:(struct PFTEvent)arg1 dtraceEvent:(id)arg2 stackTrace:(id)arg3;
- (id)operation:(id)arg1 commentsForSymbol:(id)arg2 inSourceManager:(id)arg3 callTreeInformation:(id)arg4;
- (id)sourceQueriesMustRunOnMainThread;
- (id)valueForKey:(id)arg1 atIndex:(long long)arg2;
- (BOOL)setSortKey:(id)arg1 ascending:(BOOL)arg2;
- (id)mutableDTraceEventsWithinTimeRange:(struct XRTimeRange)arg1 count:(unsigned long long *)arg2 atIndex:(unsigned long long *)arg3 filtered:(BOOL)arg4;
- (id)dtraceEventsWithinTimeRange:(struct XRTimeRange)arg1 filtered:(BOOL)arg2 lock:(BOOL)arg3;
- (id)dataMatchingPredicate:(id)arg1 lock:(BOOL)arg2;
- (id)dataMatchingPredicate:(id)arg1;
- (BOOL)reorderFetchAndReset;
- (unsigned long long)indexForFilteredIndex:(unsigned long long)arg1 lock:(BOOL)arg2;
- (unsigned long long)filteredIndexForIndex:(unsigned long long)arg1 lock:(BOOL)arg2;
- (unsigned long long)lastDTraceEventIndexRelativeToTimeInNanoSeconds:(unsigned long long)arg1 lock:(BOOL)arg2;
- (unsigned long long)lastFilteredEventIndexRelativeToTime:(double)arg1;
- (struct PFTEvent *)filteredEventAtIndex:(long long)arg1 lock:(BOOL)arg2;
- (long long)filteredCountUsingLock:(BOOL)arg1;
- (void)filterNow;
- (id)filterPredicate;
- (void)filterEventsWithStackTokens:(id)arg1 requireAny:(BOOL)arg2;
- (void)filterWithPredicate:(id)arg1 columns:(unsigned long long)arg2;
- (id)_substitutePredicateForPredicate:(id)arg1;
- (id)dateFilterPredicate;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (id)backtraceRepository;
- (id)stringOfKeyedValue:(id)arg1 forEvent:(struct PFTEvent *)arg2 forInstrument:(id)arg3 lock:(BOOL)arg4;
- (float)quantityOfKeyedValue:(id)arg1 forEvent:(struct PFTEvent *)arg2 atIndex:(unsigned long long)arg3 forInstrument:(id)arg4 lock:(BOOL)arg5;
- (id)repositoryForCallTrees;
- (long long)stackDepthForEvent:(struct PFTEvent *)arg1 lock:(BOOL)arg2;
- (id)rawStackAtIndex:(unsigned long long)arg1;
- (id)symbolStackTraceForEvent:(struct PFTEvent *)arg1;
- (id)symbolStackTraceForEvent:(struct PFTEvent *)arg1 lock:(BOOL)arg2;
- (long long)attributeCount;
- (void)setAttributeCount:(long long)arg1;
- (id)attributesForEvent:(struct PFTEvent *)arg1 lock:(BOOL)arg2;
- (id)attributesForEvent:(struct PFTEvent *)arg1;
- (id)dtraceEventForRawEvent:(struct PFTEvent *)arg1 lock:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setInstrument:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

