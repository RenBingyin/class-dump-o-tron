//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CHDDataValuesCollection : NSObject
{
    struct __CFData *mPackedValues;
    unsigned long long mDataValueCount;
    struct __CFDictionary *mIndexToDataValueMap;
    _Bool mContainsStringValue;
}

- (_Bool)containsStringValue;
- (void)finishReading;
- (id)dataValueWithIndex:(unsigned long long)arg1;
- (id)contentFormatAtIndex:(unsigned long long)arg1 resources:(id)arg2;
- (id)dataValueAtIndex:(unsigned long long)arg1;
- (struct CHDDataPoint *)dataPointWithIndex:(unsigned long long)arg1;
- (struct CHDDataPoint *)dataPointAtIndex:(unsigned long long)arg1;
- (_Bool)addDataValue:(id)arg1;
- (_Bool)addDataPoint:(struct CHDDataPoint *)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)resetWithDataPointCount:(unsigned long long)arg1;
- (id)initWithDataPointCount:(unsigned long long)arg1;
- (id)init;
- (void)cleanup;
- (void)setupBufferForValues:(unsigned long long)arg1;

@end

