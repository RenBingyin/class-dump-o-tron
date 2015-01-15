//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InterfaceBuilderKit/IBEditor.h>

@class NSSet;

@interface IBViewEditor : IBEditor
{
    struct __CFRunLoopObserver *observer;
    id extraspace2;
    BOOL inFrameChanged;
    BOOL translatingViews;
    struct CGRect bandSelectionRect;
    BOOL reguardSiblingsIngoredForDragGuides;
    NSSet *siblingsIngoredForDragGuides;
    id activeTracker;
    id extraspace;
    BOOL unused;
    long long pasteOffsetType;
    struct CGPoint nextPasteTarget;
    NSSet *previousSelection;
    unsigned long long dragAndDropGuideDisplayToken;
    id autoresizer;
    id reserved1;
    id reserved2;
    id reserved3;
    id reserved4;
    id reserved5;
    id reserved6;
    id reserved7;
    id reserved8;
}

+ (void)resetCursorRectsForObject:(id)arg1 inWindowController:(id)arg2;
+ (struct CGRect)rectForDefaultCursorForChildView:(id)arg1 ofEditedObject:(id)arg2 inWindowController:(id)arg3;
+ (id)lockedKnobImage;
+ (id)disabledKnobImage;
+ (id)knobImage;
- (id)acceptDragInfo:(id)arg1;
- (BOOL)prepareToAcceptDragInfo:(id)arg1;
- (void)failToAcceptDragInfo:(id)arg1;
- (struct CGSize)guidedOffsetForDraggingInfo:(id)arg1;
- (id)calculateFramesForViews:(id)arg1 withDraggingInfo:(id)arg2;
- (id)transformToWindowSpaceForViewsFromPasteboard:(id)arg1;
- (id)transformToUserSpaceForViewsFromPasteboard:(id)arg1;
- (id)draggedObjectStateToUseForGuidingFromDragInfo:(id)arg1;
- (void)resetCursorRects;
- (void)updatePasteInsertionPointFromMouseDown:(id)arg1;
- (void)updatePasteInsertionPointFromSelection;
- (id)objectsInRect:(struct CGRect)arg1;
- (void)activeKnobRects:(struct CGRect *)arg1 forObject:(id)arg2 inView:(id)arg3;
- (BOOL)isFrameLockedForView:(id)arg1;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (BOOL)isUndoingOrRedoing;
- (id)trackerForChild:(id)arg1 withView:(id)arg2 fromKnob:(long long)arg3;
- (void)setBandSelectionRect:(struct CGRect)arg1;
- (struct CGRect)bandSelectionRect;
- (id)selectedViewsInDesignableContainer;
- (BOOL)isViewInDesignableContainer:(id)arg1;
- (id)orderedSelectedViews;
- (id)selectedViews;
- (id)childViews;
- (id)layoutManager;
- (id)viewEditorWindowController;
- (id)lastMouseDown;
- (BOOL)canSizeSelectionToFit;
- (void)sizeSelectionToFit:(id)arg1;
- (BOOL)selectsNextObjectAfterDeletionFromRelationship:(id)arg1;
- (struct CGSize)preferredSizeForLiveResizeSize:(struct CGSize)arg1;
- (void)windowFinishedLiveResizing;
- (void)windowStartedLiveResizing;
- (void)customizePasteboardInsertionContext:(id)arg1 fromPasteboard:(id)arg2 andDraggingInfo:(id)arg3;
- (void)performCut:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)viewPasteboardType;
- (id)ibDesignableContentView;
- (id)editedView;
- (id)editorView;
- (void)didSelect:(id)arg1 andDeselect:(id)arg2;
- (void)didDeactivate;
- (void)didActivate;
- (void)willClose;
- (void)didOpen;
- (void)addVerticalGuide:(id)arg1;
- (void)addHorizontalGuide:(id)arg1;
- (struct CGRect)rectForGuide;
- (void)sendForward:(id)arg1;
- (void)sendToFront:(id)arg1;
- (void)sendBackward:(id)arg1;
- (void)sendToBack:(id)arg1;
- (void)moveViews:(id)arg1 toContainer:(id)arg2 withContentView:(id)arg3 andParent:(id)arg4;
- (void)didClose;
- (void)dealloc;
- (BOOL)interceptEvent:(id)arg1;
- (BOOL)stealMouseDragged:(id)arg1;
- (BOOL)stealMouseDown:(id)arg1;
- (void)moveSelectedViewsWithKeyEvent:(id)arg1;
- (struct CGSize)directionForKeyEvent:(id)arg1;
- (void)dragSelectedViewsWithMouseDown:(id)arg1 andMouseDragged:(id)arg2;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (void)detachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (id)initialDragImageState:(id)arg1;
- (id)draggedImageState:(id)arg1;
- (id)draggedImageStateForDraggingInfo:(id)arg1 forOrderedIdentifiedViews:(id)arg2 withName:(id)arg3;
- (void)bandSelect;
- (void)resizeChild:(id)arg1 fromKnob:(long long)arg2 withEvent:(id)arg3;
- (id)viewForTrackingObject:(id)arg1;
- (BOOL)shouldResizeChild:(id *)arg1 fromKnob:(long long *)arg2 inEvent:(id)arg3;
- (BOOL)shouldChildHaveResizeKnobs:(id)arg1;
- (BOOL)areKnobsLockedForObject:(id)arg1;
- (BOOL)wasChildSelectedBeforeClick:(id)arg1;
- (void)drawOverlay;
- (void)drawActivationDarkening;
- (void)drawTrackingKnobs;
- (id)viewForClippingToWhenDrawingSelectionKnobsForObject:(id)arg1;
- (void)drawBandSelection;
- (struct CGSize)decorationOutsetForChild:(id)arg1;
- (void)drawKnobsForView:(id)arg1;
- (void)observeRunloopActivity:(unsigned long long)arg1;
- (void)finishObservingRunLoop;
- (void)beginObservingRunLoop;

@end

