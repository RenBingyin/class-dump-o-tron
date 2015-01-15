//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRRun.h"

@class NSArray, NSString, XRSpaceDataToken;

@interface XRNetworkingRun : XRRun
{
    XRSpaceDataToken *_storeTok;
    struct XRTimeRange _latestDataRange;
    BOOL _fromSavedDocument;
    NSString *_savedInstrumentUUID;
    NSArray *_savedActivityQueries;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)activityAtIndex:(unsigned long long)arg1 intervalRange:(struct _NSRange)arg2 intervalsPerBucket:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)labelForActivityAtIndex:(unsigned long long)arg1;
- (unsigned long long)activityViewCount;
- (BOOL)removeActivityQuery:(id)arg1;
- (long long)containsActivityQuery:(id)arg1;
- (void)addActivityQuery:(id)arg1;
- (id)activityQueryID:(id)arg1;
- (id)histogramForQuery:(id)arg1 bins:(id)arg2 timeRange:(struct XRTimeRange)arg3;
- (id)topFiveMostActiveProcesses;
- (id)topFiveMostActiveConnections;
- (id)filteredInterfaceSummary;
- (id)filteredProcessSummary;
- (id)filteredConnectionSummary;
- (void)recomputeSummaries;
- (void)didInitializeDatasetExpertSpace:(id)arg1;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (void)resetLatestDataRange;
- (struct XRTimeRange)latestDataRange;
- (void)targetObserved:(id)arg1 kind:(int)arg2;
- (void)setPath:(id)arg1;
- (void)setInstrument:(id)arg1;
- (void)commitDataForSaving;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)afterOperation:(id)arg1 accessGuarded:(CDUnknownBlockType)arg2;

@end

