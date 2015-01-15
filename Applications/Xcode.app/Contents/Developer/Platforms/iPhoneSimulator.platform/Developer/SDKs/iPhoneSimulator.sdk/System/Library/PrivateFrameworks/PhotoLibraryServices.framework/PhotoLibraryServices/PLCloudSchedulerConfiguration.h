//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PLCloudSchedulerConfiguration : NSObject
{
    NSArray *_triggers;
    NSArray *_scenarioProducers;
    unsigned long long _concurrencyLevel;
}

@property(nonatomic) unsigned long long concurrencyLevel; // @synthesize concurrencyLevel=_concurrencyLevel;
@property(retain, nonatomic) NSArray *scenarioProducers; // @synthesize scenarioProducers=_scenarioProducers;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;

@end

