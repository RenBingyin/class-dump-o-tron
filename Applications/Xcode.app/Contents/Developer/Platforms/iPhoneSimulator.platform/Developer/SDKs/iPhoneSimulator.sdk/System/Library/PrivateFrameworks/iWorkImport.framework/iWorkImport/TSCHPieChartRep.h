//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartRep.h>

@class NSArray, NSDictionary, TSCHChartPieElementsRenderer;

__attribute__((visibility("hidden")))
@interface TSCHPieChartRep : TSCHChartRep
{
    TSCHChartPieElementsRenderer *mPieElementRenderer;
    NSArray *mWedgeKnobs;
    NSDictionary *mSeriesIndexedPieWedgeDraggingLayers;
    _Bool mHasDrawnSinceWedgeKnobTrackerCreated;
}

- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

