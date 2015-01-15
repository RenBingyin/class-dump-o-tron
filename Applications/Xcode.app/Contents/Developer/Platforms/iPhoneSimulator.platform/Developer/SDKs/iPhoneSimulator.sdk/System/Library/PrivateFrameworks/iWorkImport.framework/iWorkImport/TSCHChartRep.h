//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPTextHostRep.h>

#import "TSCHChartRepPlatformProtocols.h"
#import "TSCHSupportsRendering.h"

@class CALayer, CAShapeLayer, NSArray, NSString, TSCHChartDrawableInfo, TSCHChartLayout, TSCHMessageView, TSCHRendererLayer, TSCHSearchSelection, TSCHSelectionPath;

__attribute__((visibility("hidden")))
@interface TSCHChartRep : TSWPTextHostRep <TSCHChartRepPlatformProtocols, TSCHSupportsRendering>
{
    NSArray *mRenderers;
    _Bool mBuildingChunks;
    int mChunkPhase;
    long long mCurrentChunk;
    _Bool mBuildingFinalBackground;
    _Bool mBuildingFinalElements;
    _Bool mChunkTexturesValid;
    _Bool mInZoom;
    unsigned long long mInDynamicStandinOperation;
    unsigned long long mInDynamicStandinLayoutOperation;
    _Bool mIsKPFExportForMultiData;
    TSCHSelectionPath *mActiveTextEditingPath;
    TSCHRendererLayer *mLegendLayer;
    _Bool mForceSeparateLegendLayer;
    _Bool mIsLayerBasedRep;
    _Bool mInvalidateLegendLayerForLayerBasedRep;
    TSCHChartLayout *mChartLayout;
    _Bool mWantsPreviewLayout;
    _Bool mEditorIsEditingInfo;
    TSCHMessageView *mMessageView;
    _Bool mMessageViewValid;
    _Bool mMediatorEditingHaloLayerPathValid;
    CAShapeLayer *mMediatorEditingHaloLayer;
    _Bool mLegendBorderHaloLayerPathValid;
    CAShapeLayer *mLegendBorderHaloLayer;
    _Bool mChartRepGoingAway;
    _Bool mCDEIsEditingInfo;
    _Bool mCDECausedSetNeedsDisplay;
    _Bool mDrawingSearchReference;
    CALayer *mSubselectionKnobLayer;
    _Bool mFinishedBecomingSelected;
    CDUnknownBlockType mDrawingOpStartBlock;
    CDUnknownBlockType mDrawingOpEndBlock;
    _Bool mAwaitingLegendSubselection;
    int mRenderPassChunkPhase;
    struct CGPoint mLastSubselectionLayerRelativeReferencePosition;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType drawingOpEndBlock; // @synthesize drawingOpEndBlock=mDrawingOpEndBlock;
@property(copy, nonatomic) CDUnknownBlockType drawingOpStartBlock; // @synthesize drawingOpStartBlock=mDrawingOpStartBlock;
@property(readonly, nonatomic) long long currentChunk; // @synthesize currentChunk=mCurrentChunk;
@property(readonly, nonatomic) _Bool chartRepGoingAway; // @synthesize chartRepGoingAway=mChartRepGoingAway;
@property(readonly, retain, nonatomic) TSCHSelectionPath *activeTextEditingPath; // @synthesize activeTextEditingPath=mActiveTextEditingPath;
@property(nonatomic) _Bool chunkTexturesValid; // @synthesize chunkTexturesValid=mChunkTexturesValid;
@property(readonly, nonatomic) _Bool drawingSearchReference; // @synthesize drawingSearchReference=mDrawingSearchReference;
@property(nonatomic) _Bool forceSeparateLegendLayer; // @synthesize forceSeparateLegendLayer=mForceSeparateLegendLayer;
- (void)endDrawingOperation;
- (void)beginDrawingOperation;
- (void)protected_dynamicStyleLayoutChangeDidEnd:(id)arg1;
- (void)protected_dynamicStyleLayoutChangeWillBegin:(id)arg1;
- (void)protected_dynamicStyleChangeDidEnd:(id)arg1;
- (void)protected_dynamicStyleChangeWillBegin:(id)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (id)hitChartElements:(struct CGPoint)arg1;
- (id)hitChartElements:(struct CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)didAnimateFromCDE;
- (void)willAnimateIntoCDE;
- (void)endChartDataEditing;
- (void)beginChartDataEditing;
- (void)setNeedsDisplay;
- (_Bool)hasSubselection;
- (void)invalidateSubselectionKnobs;
- (id)selectedSeriesIndices;
- (id)subselectionLayer;
- (id)protected_haloLayersForHaloPositions:(id)arg1;
- (id)protected_knobLayersForKnobPositions:(id)arg1;
- (struct CGRect)visibleBoundsForTilingLayer:(id)arg1;
- (id)legendLayer;
- (void)releaseLegendLayer;
- (void)p_createLegendLayer;
- (id)legendLayerForLayerBasedRep;
- (_Bool)renderLegendIntoSeparateLayer;
- (void)invalidateLegendLayerForLayerBasedRep;
- (_Bool)p_usingSeparateLegendLayerForLayerBasedRep;
- (_Bool)shouldUseLegendLayerForLayerBasedRep;
- (_Bool)shouldApplyFractionalTranslationInRootForLegendLayer;
- (_Bool)isLegendOn;
- (_Bool)shouldLayoutTilingLayer:(id)arg1;
- (struct CGRect)convertUnscaledToBoundsRect:(struct CGRect)arg1;
- (struct CGRect)outerShadowFrame;
- (void)p_validateLegendSelectionHalo;
- (void)p_invalidateLegendSelectionHalo;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)processChanges:(id)arg1;
- (id)imageForSearchReference:(id)arg1 forPath:(struct CGPath *)arg2 shouldPulsate:(_Bool)arg3;
- (struct CGPath *)newPathForSearchReference:(id)arg1;
- (void)p_findUIStateChanged:(id)arg1;
- (void)p_removeOrShowAndPositionMessageOverlay;
- (void)p_invalidateMessageOverlay;
- (struct CGRect)rectForSelection:(id)arg1;
- (id)p_textImageForPath:(struct CGPath *)arg1 renderer:(id)arg2 selection:(id)arg3 shouldPulsate:(_Bool)arg4;
- (struct CGPath *)p_newPathForSearchSelection:(id)arg1;
@property(readonly, nonatomic) TSCHSearchSelection *selection;
- (void)tswpTextEditingDidEndEditing:(id)arg1;
- (_Bool)isCanvasTextEditing;
- (void)selectAllEditedText;
- (void)endCanvasTextEditing;
- (_Bool)beginCanvasTextEditingForSelectionPath:(id)arg1;
- (void)beginCanvasTextEditingForSearchSelection:(id)arg1;
- (id)currentTextEditingSupporter;
- (id)p_findRendererForTextEditingSelectionPath:(id)arg1;
- (id)p_findRendererForSelectionPath:(id)arg1;
- (_Bool)canEditWithEditor:(id)arg1;
- (id)beginEditing;
- (void)p_validateChartTitleSelection;
- (_Bool)p_hasAnySubselection;
- (_Bool)p_textEditingInLegend;
- (_Bool)p_legendIsBeingMoved;
- (_Bool)p_legendIsBeingResized;
- (_Bool)p_legendIsSelected;
- (_Bool)rotationKnobHitByNaturalPoint:(struct CGPoint)arg1;
- (_Bool)intersectsUnscaledRect:(struct CGRect)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (_Bool)p_legendHitByLayoutPoint:(struct CGPoint)arg1;
- (_Bool)shadowsEnabled;
- (void)dynamicallyUpdatingLegendFrameWithTracker:(id)arg1;
- (void)knobTrackingDidEnd:(id)arg1;
- (void)knobTrackingDidBegin:(id)arg1;
- (void)setCurrentKnobTracker:(id)arg1;
- (id)newTrackerForKnob:(id)arg1;
- (void)updatePositionsOfKnobs:(id)arg1;
- (void)p_updatePositionsOfLegendKnobs:(id)arg1;
- (void)p_updatePositionOfLegendKnob:(id)arg1;
- (void)viewScaleDidChange;
- (void)invalidateKnobs;
- (void)invalidateKnobPositions;
- (void)addKnobsToArray:(id)arg1;
- (unsigned long long)adjustedKnobForComputingResizeGeometry:(unsigned long long)arg1;
- (_Bool)legendHitByUnscaledPoint:(struct CGPoint)arg1 distanceFromCenter:(struct CGPoint *)arg2;
- (int)dragTypeAtCanvasPoint:(struct CGPoint)arg1;
- (void)addChartKnobsToArray:(id)arg1;
- (id)knobForDynamicStyleChangeKey:(id)arg1;
- (_Bool)shouldShowKnobs;
- (void)updateKnobs;
- (void)dynamicResizeDidEndWithTracker:(id)arg1;
- (void)dynamicallyResizingWithTracker:(id)arg1;
- (id)dynamicResizeDidBegin;
- (void)dynamicDragDidBegin;
- (_Bool)isDraggable;
- (_Bool)buildShouldUseRenderer:(id)arg1;
- (_Bool)planeIsVisible:(int)arg1;
- (int)planeState:(int)arg1 finalElements:(_Bool)arg2 chunkStage:(long long)arg3;
- (int)planeState:(int)arg1 finalElements:(_Bool)arg2;
- (int)p_backgroundLikePlaneStateForEffectiveStage:(long long)arg1;
- (id)renderValueIndexSetForSeries:(unsigned long long)arg1 finalElements:(_Bool)arg2 currentChunk:(long long)arg3;
- (id)renderValueIndexSetForSeries:(unsigned long long)arg1 finalElements:(_Bool)arg2;
- (id)renderValueIndexSetForSeries:(unsigned long long)arg1;
- (id)renderSeriesIndexSetForFinalElements:(_Bool)arg1 currentChunk:(long long)arg2;
- (id)renderSeriesIndexSetForFinalElements:(_Bool)arg1;
- (id)renderSeriesIndexSet;
- (_Bool)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
- (_Bool)renderLabels;
- (_Bool)renderElementsShadowOnly;
- (_Bool)renderElementsWithoutShadows;
- (_Bool)renderElements;
- (id)textureForContext:(id)arg1;
- (void)setTextureStage:(unsigned long long)arg1;
- (void)protected_renderChunkInBounds:(struct CGRect)arg1 textureSet:(id)arg2;
@property(readonly, nonatomic) unsigned long long chartDeliveryStyle;
@property(readonly, nonatomic) NSString *animationFilter;
- (void)p_validateMediatorEditingHaloLayer;
- (void)p_invalidateMediatorEditingHaloLayer;
- (void)becameNotSelected;
- (void)becameSelected;
- (void)editor:(id)arg1 isDeselectingInfos:(id)arg2;
- (void)editor:(id)arg1 isSelectingInfos:(id)arg2;
- (_Bool)isEditing;
- (id)itemsToAddToEditMenu;
- (_Bool)shouldShowLegendHighlight;
- (_Bool)shouldShowSelectionHighlight;
- (void)didEndZooming;
- (void)willBeginZooming;
- (void)updateMessageOverlayNow;
- (_Bool)messageIsVisible;
- (void)dismissMessageOverlayNowWithAnimation:(_Bool)arg1;
- (void)p_topBarsShowedUp:(id)arg1;
- (void)displayMessage:(id)arg1 zPosition:(double)arg2 style:(int)arg3;
- (void)p_messageAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)p_forceDismissTransientMessage;
- (_Bool)p_chartShouldDisplayMessage;
- (void)p_positionMessageView;
- (struct CGRect)targetRectForEditMenu;
- (_Bool)shouldUseChartAreaRectForEditMenuTargetRectMinY;
- (void)p_deleteMessageView;
- (int)tilingMode;
- (void)renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)didDrawInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)inPrintPreviewMode;
- (void)setupForDrawingInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (struct CGPoint)scaledSubpixelOffsetFromLayerFrameInScaledCanvas;
- (struct CGRect)frameInUnscaledCanvas;
- (_Bool)frameInUnscaledCanvasNeedsPaddingForShadows;
- (id)overlayLayers;
- (void)didUpdateLayer:(id)arg1;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (void)willUpdateLayer:(id)arg1;
- (_Bool)directlyManagesLayerContent;
- (_Bool)p_hasBackgroundLayerForPieChart;
- (_Bool)p_hasBackgroundFill;
- (id)additionalRectsForSnappingWithOffset:(struct CGPoint)arg1;
- (struct CGRect)snapRectForDynamicDragWithOffset:(struct CGPoint)arg1;
- (_Bool)isDrawingIntoPDF;
- (id)commandController;
@property(readonly, nonatomic) double contentsScale;
@property(readonly, nonatomic) double viewScale;
- (struct CGRect)geometryFrame;
- (id)geometry;
- (void)updateFromLayout;
- (_Bool)shouldUseRenderer:(id)arg1;
- (void)clearRenderers;
- (id)renderers;
- (_Bool)canDrawInParallel;
- (void)willBeRemoved;
@property(readonly, nonatomic) _Bool forceRenderBlankBackground;
- (id)p_legendRenderer;
- (_Bool)isLayerBasedRep;
@property(readonly, nonatomic) TSCHChartLayout *chartLayout;
- (id)drawableLayout;
@property(readonly, nonatomic) TSCHChartDrawableInfo *chartInfo;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (_Bool)requireSeparateLabelLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

