//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, RTRoutineManager;

__attribute__((visibility("hidden")))
@interface MCRoutineHelper : NSObject
{
    RTRoutineManager *_routineManager;
    NSArray *_allLOIs;
}

- (void).cxx_destruct;
- (void)findNearbySignificantLocationsAtLocation:(id)arg1 inRadius:(double)arg2 numberOfVisitsBucketSize:(unsigned int)arg3 finishedHandler:(CDUnknownBlockType)arg4;
- (void)findSignificantLocationAtLocation:(id)arg1 numberOfVisitsBucketSize:(unsigned int)arg2 finishedHandler:(CDUnknownBlockType)arg3;
- (void)findSignificantLocationAvailability:(CDUnknownBlockType)arg1;
- (id)init;

@end

