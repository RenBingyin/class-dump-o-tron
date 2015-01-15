//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRKEventsRun.h"

@class NSMutableArray, XRSignpostPointContainer;

@interface XRSignpostRun : XRKEventsRun
{
    struct XRTimeRange _latestDataRange;
    struct _XRSignpostEventFields _storageFields;
    NSMutableArray *_lastChildOfTopLevelContexts;
    NSMutableArray *_flagsFromTrace;
    XRSignpostPointContainer *_pairedPoints;
}

+ (void)translateModelValueArg:(int)arg1 toAnalysisValueArg:(int *)arg2;
+ (void)translateModelGroupBy:(int)arg1 toAnalysisGroupBy:(int *)arg2;
@property(retain) XRSignpostPointContainer *pairedPoints; // @synthesize pairedPoints=_pairedPoints;
@property(retain) NSMutableArray *flagsFromTrace; // @synthesize flagsFromTrace=_flagsFromTrace;
@property(retain) NSMutableArray *lastChildOfTopLevelContexts; // @synthesize lastChildOfTopLevelContexts=_lastChildOfTopLevelContexts;
- (void).cxx_destruct;
- (void)didInitializeDatasetExpertSpace:(id)arg1;
- (void)processEvent:(struct XRKEventIntermediate *)arg1;
- (void)startRecording;
- (id)descriptorIdentifier;
- (BOOL)interestedInEvent:(struct XRKEventIntermediate *)arg1;
- (id)requiredKEventCodes;
- (void)recomputeSummaries;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (void)resetLatestDataRange;
- (struct XRTimeRange)latestDataRange;
- (void)addFlag:(id)arg1;
- (void)removeFlagsFromTrace;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

