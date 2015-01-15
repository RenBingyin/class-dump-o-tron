//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDDrawableInfo.h>

#import "TSCECalculationEngineRegistration.h"
#import "TSCHStyleSwapSupporting.h"
#import "TSDMixing.h"
#import "TSDReducableInfo.h"
#import "TSKCustomFormatContainingInfo.h"
#import "TSKModel.h"
#import "TSKSearchable.h"
#import "TSPCopying.h"
#import "TSSPresetSource.h"
#import "TSSStyleClient.h"
#import "TSSThemedObject.h"

@class NSString, TSCHChartInfo, TSCHChunkManager, TSPObject<TSCHMediatorProvider>;

__attribute__((visibility("hidden")))
@interface TSCHChartDrawableInfo : TSDDrawableInfo <TSCECalculationEngineRegistration, TSDReducableInfo, TSKCustomFormatContainingInfo, TSPCopying, TSKSearchable, TSKModel, TSSPresetSource, TSSThemedObject, TSCHStyleSwapSupporting, TSDMixing, TSSStyleClient>
{
    TSCHChartInfo *mChart;
    TSPObject<TSCHMediatorProvider> *mMediatorPersistentObject;
    TSCHChunkManager *mChunkManager;
}

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
@property(readonly, nonatomic) TSCHChartInfo *chart; // @synthesize chart=mChart;
- (id)commandToReplaceCustomFormat:(id)arg1 withReplacementFormat:(id)arg2;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (id)changeDetailsForCustomFormatListDidUpdateToCustomFormatWrapper:(id)arg1;
- (void)performBlockWithStylesheetForAddingStyles:(CDUnknownBlockType)arg1;
- (id)commandToReplaceImageData:(id)arg1 withReducedImageData:(id)arg2 associatedHint:(id)arg3;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2;
- (id)applyStyleSwapTuples:(id)arg1;
- (id)applyStyleSwapTuple:(id)arg1;
- (void)chartTypeDidChangeWithDetails:(id)arg1;
- (void)modelDidInvalidateWithDetails:(id)arg1;
- (void)chartDidInvalidateWithProperties:(id)arg1;
- (void)p_sendInvalidationWithKind:(int)arg1 details:(id)arg2;
- (int)elementKind;
- (_Bool)aspectRatioLocked;
- (_Bool)canSizeBeChangedIncrementally;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (_Bool)supportsHyperlinks;
- (Class)layoutClass;
- (Class)repClass;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencedStyles;
- (id)childInfos;
- (void)acceptVisitor:(id)arg1;
- (id)childCommandForApplyThemeCommand:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3;
- (_Bool)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (_Bool)hasBackgroundLayerForPieChart;
- (_Bool)shouldAddMultiDataBuildWhenAddingToDocument;
- (_Bool)reverseChunkingIsSupported;
- (id)animationFilters;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (id)textureDeliveryStylesLocalized:(_Bool)arg1 animationFilter:(id)arg2;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
@property(readonly, nonatomic) TSCHChunkManager *chunkManager;
- (id)childCommandForReplaceAllCommand:(id)arg1;
- (id)searchForSpellingErrors:(CDUnknownBlockType)arg1 stop:(_Bool *)arg2;
- (id)searchForString:(id)arg1 options:(unsigned long long)arg2 onHit:(CDUnknownBlockType)arg3;
- (void)p_searchString:(id)arg1 atSelectionPath:(id)arg2 forString:(id)arg3 options:(unsigned long long)arg4 hitBlock:(CDUnknownBlockType)arg5;
- (void)p_processAllChartStrings:(CDUnknownBlockType)arg1;
- (void)setInsertionCenterPosition:(struct CGPoint)arg1;
- (void)tsaMoveToPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (struct CGRect)visibleBoundsForPositioning;
- (void)coalesceChanges:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setGeometry:(id)arg1 omitLegendResize:(_Bool)arg2;
- (id)geometry;
- (id)p_drawableGeometry;
- (void)p_setDrawableGeometry:(id)arg1 clearObjectPlaceholderFlag:(_Bool)arg2;
- (void)setPersistentMediator:(id)arg1;
- (void)willModify;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 chartAreaFrame:(id)arg3 legendFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartAreaFrame:(id)arg4 legendFrame:(id)arg5 stylePreset:(id)arg6 privateSeriesStyles:(id)arg7 chartNonStyle:(id)arg8 legendNonStyle:(id)arg9 valueAxisNonStyles:(id)arg10 categoryAxisNonStyles:(id)arg11 seriesNonStyles:(id)arg12;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 circumscribingFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 circumscribingFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 chartAreaFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartAreaFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 chartBodyFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartBodyFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11;
- (id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartBodyFrame:(id)arg4 chartAreaFrame:(id)arg5 circumscribingFrame:(id)arg6 legendFrame:(id)arg7 stylePreset:(id)arg8 privateSeriesStyles:(id)arg9 chartNonStyle:(id)arg10 legendNonStyle:(id)arg11 valueAxisNonStyles:(id)arg12 categoryAxisNonStyles:(id)arg13 seriesNonStyles:(id)arg14;
- (id)initWithContext:(id)arg1 chart:(id)arg2;
- (id)p_copyFor3DAs2DWithContext:(id)arg1 chartFrame:(struct CGRect)arg2 legendFrame:(struct CGRect)arg3;
- (id)initFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)objectToArchiveInDependencyTracker;
- (id)componentRootObject;
- (_Bool)registerLast;
- (void)unregisterFromCalculationEngine:(id)arg1;
- (void)registerWithCalculationEngineForDocumentLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

