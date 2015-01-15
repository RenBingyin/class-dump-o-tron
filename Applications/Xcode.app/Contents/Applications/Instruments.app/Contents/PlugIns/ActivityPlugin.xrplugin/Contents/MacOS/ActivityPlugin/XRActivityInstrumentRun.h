//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRRun.h"

#import "SymbolAwareRun.h"
#import "XRSourceQuery.h"

@class NSArrayController, NSMutableArray, NSPredicate, NSRecursiveLock, NSString, XRBacktraceRepository;

@interface XRActivityInstrumentRun : XRRun <SymbolAwareRun, XRSourceQuery>
{
    NSMutableArray *_data;
    XRBacktraceRepository *_primaryRepository;
    struct XRTimeRange _selectedTimeRange;
    NSPredicate *_filterPredicate;
    NSArrayController *_controller;
    NSRecursiveLock *_dataLock;
}

+ (void)decodeProcessesForStat:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)loadSampleDataFromPaths:(id)arg1 error:(id *)arg2;
- (BOOL)loadDTPerformanceSessionDataFromPaths:(id)arg1 error:(id *)arg2;
- (id)operation:(id)arg1 commentsForSymbol:(id)arg2 inSourceManager:(id)arg3 callTreeInformation:(id)arg4;
- (id)sourceQueriesMustRunOnMainThread;
- (void)adjustSampleTimestamp:(id)arg1;
- (unsigned long long)traceRelativeTimestampOfSample:(id)arg1;
- (id)backtraceRepository;
- (id)repositoryForCallTrees;
- (BOOL)setSortKey:(id)arg1 ascending:(BOOL)arg2;
- (id)filterPredicate;
- (void)setFilterPredicate:(id)arg1;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (void)updateFilter;
- (id)predicateForTimeRange:(struct XRTimeRange)arg1;
- (id)samplesInclusiveOfRange:(struct XRTimeRange)arg1 filtered:(BOOL)arg2;
- (id)samplesInRange:(struct XRTimeRange)arg1 filtered:(BOOL)arg2;
- (unsigned long long)indexOfSample:(id)arg1 filtered:(BOOL)arg2;
- (id)lastSampleFiltered:(BOOL)arg1;
- (id)sampleAtIndex:(unsigned long long)arg1 filtered:(BOOL)arg2;
- (id)valueForStatistic:(id)arg1 atIndex:(unsigned long long)arg2 filtered:(BOOL)arg3;
- (unsigned long long)numberOfSamples:(BOOL)arg1;
- (void)addDataSample:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

