//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRSamplerInstrument.h"

@class NSMutableArray, XRCountersSetupModel;

@interface XRCountersInstrument : XRSamplerInstrument
{
    XRCountersSetupModel *_countersSetupModel;
    NSMutableArray *_sampleListCounterColumns;
    NSMutableArray *_callTreeCounterColumns;
    unsigned int _tapGroup;
}

- (void).cxx_destruct;
- (void)startRecording;
- (void)addColumnsToDetailView:(id)arg1;
- (void)addColumnsToCallTreeDetailView:(id)arg1;
- (void)_addSampleCounterColumns:(id)arg1;
- (void)_removeSampleCounterColumns;
- (void)_addCalltreeCounterColumns:(id)arg1;
- (void)_removeCalltreeCounterColumns;
- (BOOL)setSelectedRunIndex:(long long)arg1;
- (void)_prepareCurrentRunToRecord;
- (BOOL)verifyEnvironment:(id)arg1 arguments:(id)arg2 instruments:(id)arg3 error:(id *)arg4;
- (id)unsupportedDeviceReason:(id)arg1;
- (id)samplerDataElementsForContext:(id)arg1;
- (void)setConfigurationOptions:(id)arg1;
- (id)configurationOptions;
- (int)targetPID;
- (id)countersSetupModel;
- (BOOL)needsCoreProfileTap;
- (BOOL)shouldPreloadCoreProfile;
- (void)invalidate;
- (id)initWithExtension:(id)arg1;

@end

