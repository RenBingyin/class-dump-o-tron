//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StarkSuggestionSource.h"

@class RTRoutineManager;

__attribute__((visibility("hidden")))
@interface StarkPredictedLocation : StarkSuggestionSource
{
    RTRoutineManager *_routineManager;
}

- (void).cxx_destruct;
- (void)_handlePredictedLocationsOfInterest:(id)arg1 forLocation:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)requestForLocation:(id)arg1 timePeriod:(id)arg2 suggestionHandler:(CDUnknownBlockType)arg3 finishedHandler:(CDUnknownBlockType)arg4;
- (id)initWithRoutineManager:(id)arg1;

@end

