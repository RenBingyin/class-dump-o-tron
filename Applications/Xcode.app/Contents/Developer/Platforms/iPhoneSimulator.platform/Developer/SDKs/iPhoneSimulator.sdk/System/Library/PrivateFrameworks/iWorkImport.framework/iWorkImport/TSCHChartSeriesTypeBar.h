//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartSeriesType.h>

__attribute__((visibility("hidden")))
@interface TSCHChartSeriesTypeBar : TSCHChartSeriesType
{
}

- (id)supportedValueLabelsAxisCombinations;
- (id)axisTypesForValueLabels;
- (id)elementBuilder;
- (_Bool)chunkedBuildsIncludeInterceptValues;
- (id)genericToSpecificPropertyMap;
- (unsigned int)adjustLabelPosition:(unsigned int)arg1 forAxisValue:(double)arg2 intercept:(double)arg3;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (id)userInterfaceNameForLabelPosition:(id)arg1;
- (id)legalChartLabelPositions;
- (_Bool)isVertical;
- (_Bool)supportsBarGap;
- (_Bool)supportsSetGap;
- (_Bool)useInBarGapCalculations;
- (unsigned long long)valueDimensions;
- (id)init;
- (id)g_genericToSpecificPropertyMapBar;

@end

