//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartFeatureScatter.h>

__attribute__((visibility("hidden")))
@interface TSCHChartFeatureBubble : TSCHChartFeatureScatter
{
}

- (_Bool)supportsShowLabelsInFrontOption;
- (_Bool)supportsConnectingLines;
- (_Bool)supportsBubbleOptions;
- (id)supportedSeriesTypes;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (id)supportedAxisScales;
- (id)genericToSpecificPropertyMap;
- (id)defaultDataFileName;
- (Class)presetImagerClass;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;
- (_Bool)supportsEditingForAxisID:(id)arg1;
- (void)p_initializeAxisIDs;
- (_Bool)supportsSharedAndSeparateX;

@end

