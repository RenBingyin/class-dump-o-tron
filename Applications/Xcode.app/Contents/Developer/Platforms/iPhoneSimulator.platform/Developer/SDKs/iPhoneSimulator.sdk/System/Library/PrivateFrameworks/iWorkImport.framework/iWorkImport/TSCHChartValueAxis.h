//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartAxis.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface TSCHChartValueAxis : TSCHChartAxis
{
}

+ (id)axisForInfo:(id)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)defaultProperties;
- (id)p_GetGenericToValuePropertyMap;
- (_Bool)supportsAxisValueLabels;
- (_Bool)editableFormatForValueStrings;
- (double)validateUserMaxForDouble:(double)arg1;
- (double)validateUserMinForDouble:(double)arg1;
- (id)p_computeMajorGridlinesAutomaticallyInAnalysis:(id)arg1 forHorizChart:(_Bool)arg2;
- (CDStruct_41cea37a)p_axisDescFromMinValue:(double)arg1 maxValue:(double)arg2 userValues:(long long)arg3;
- (CDStruct_41cea37a)p_calculateAxisDescFromMinValue:(double)arg1 maxValue:(double)arg2 userValues:(long long)arg3;
- (double)p_calculateAxisDeltaFromSpread:(double)arg1 spreadRanges:(const CDStruct_c3b9c2ee *)arg2;
- (CDStruct_41cea37a)p_axisDescFromFixedMinValue:(double)arg1 fixedMaxValue:(double)arg2 spreadRanges:(const CDStruct_c3b9c2ee *)arg3;
- (CDStruct_41cea37a)p_axisDescFromNegativeMinValue:(double)arg1 fixedPositiveMaxValue:(double)arg2 spreadRanges:(const CDStruct_c3b9c2ee *)arg3;
- (CDStruct_41cea37a)p_axisDescFromPositiveMinValue:(double)arg1 fixedPositiveMaxValue:(double)arg2 spreadRanges:(const CDStruct_c3b9c2ee *)arg3;
- (CDStruct_41cea37a)p_axisDescFromFixedNegativeMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CDStruct_c3b9c2ee *)arg3;
- (CDStruct_41cea37a)p_axisDescFromFixedPositiveMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CDStruct_c3b9c2ee *)arg3;
- (CDStruct_41cea37a)p_axisDescFromNegativeMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CDStruct_c3b9c2ee *)arg3;
- (CDStruct_41cea37a)p_axisDescFromPositiveMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CDStruct_c3b9c2ee *)arg3;
- (void)p_includeZeroWithMinValue:(double *)arg1 maxValue:(double *)arg2 userValues:(long long)arg3;
- (id)p_computeMajorGridlines:(long long)arg1 analysis:(id)arg2;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (void)updateModelMinMaxForErrorBarsOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3;
- (void)updateModelMinMaxForTrendLineOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3;
- (void)updateModelMinMaxInAnalysis:(id)arg1;
@property(readonly, nonatomic) NSNumber *userMin;
@property(readonly, nonatomic) NSNumber *userMax;
- (void)dealloc;
- (pair_952e027e)labelEnumeratorPair;
- (id)g_genericToSpecificPropertyMap;

@end

