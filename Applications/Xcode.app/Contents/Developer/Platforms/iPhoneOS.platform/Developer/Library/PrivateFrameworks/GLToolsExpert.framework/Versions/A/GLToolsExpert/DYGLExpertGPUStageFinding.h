//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GLToolsExpert/DYGLExpertFindingPercentOfFrame.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface DYGLExpertGPUStageFinding : DYGLExpertFindingPercentOfFrame
{
    unsigned int _notableEvidence;
    NSMutableDictionary *_notableAnalyzerFindings;
}

- (void).cxx_destruct;
- (id)nameValueStringForEvidenceItem:(id)arg1 withObject:(id)arg2;
- (id)verifyWithExpert:(id)arg1 withCase:(id)arg2;
- (BOOL)createVerificationExperiments:(id)arg1;
- (void)_recommendationSetGeneralRecommendationsWithCase:(id)arg1 withPreamble:(id)arg2;
- (BOOL)_recommendationSetSpecificRecommendations;
- (void)_recommendationSetSummaryWithCase:(id)arg1;
- (void)generateRecommendation:(id)arg1;
- (void)associateAnalyzerFindings:(id)arg1;
- (void)_recordNotableAnalyzerFindings:(id)arg1;
- (id)_allocPertinentAnalyzerFindingClassifications;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKind:(int)arg1 withConfidence:(float)arg2;
- (id)description;

@end

