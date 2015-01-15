//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSUserInterfaceValidations.h"
#import "NSWindowDelegate.h"

@class NSDate, NSPopUpButton, NSString, NSWindow;

@interface IBWindowController : NSWindowController <NSUserInterfaceValidations, NSWindowDelegate>
{
    NSWindow *localizeFromSheet;
    NSPopUpButton *localizeFromLanguagePopUp;
    NSPopUpButton *localizeFromValuesPopUp;
    struct CGPoint lastDragPoint;
    id lastDragTarget;
    NSDate *lastDragMouseMovedTime;
    BOOL blockDragTillMove;
    BOOL blockDragTillHold;
    long long lastDragSequenceNumber;
}

+ (id)windowControllerAtPoint:(struct CGPoint)arg1;
+ (id)windowControllerAtPoint:(struct CGPoint)arg1 inDocument:(id)arg2;
+ (id)windowControllerAtPoint:(struct CGPoint)arg1 inDocument:(id)arg2 ignoringWindowControllers:(id)arg3;
- (void)selectNextClippedObject:(id)arg1;
- (void)selectPreviousClippedObject:(id)arg1;
- (void)doSelectNextClippedObjectInReverse:(BOOL)arg1;
- (unsigned long long)dragObjects:(id)arg1 withImage:(id)arg2 inMouseDownEvent:(id)arg3 mouseDraggedEvent:(id)arg4 imageLocation:(struct CGPoint)arg5 allowedOperations:(unsigned long long)arg6 source:(id)arg7 draggingSourceContext:(id)arg8;
- (void)orderFrontAfterDrag:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)dragTarget:(id)arg1 didAcceptDraggedObjects:(id)arg2 fromDragInfo:(id)arg3;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)shouldBlockDragsUntilHoldFromDragginEntered;
- (id)draggedImageState:(id)arg1;
- (id)springLoadedObjectAtPoint:(struct CGPoint)arg1;
- (BOOL)prepareToAcceptDragInfo:(id)arg1;
- (id)dropTargetForDragInfo:(id)arg1 allowedDraggingOperations:(unsigned long long *)arg2;
- (id)connectionEndPointsForEvent:(id)arg1;
- (void)localizationModeChanged;
- (void)localizeFrom:(id)arg1;
- (void)middleContainerAlignViews:(id)arg1;
- (void)centerContainerAlignViews:(id)arg1;
- (void)baselineAlignViews:(id)arg1;
- (void)bottomAlignViews:(id)arg1;
- (void)middleAlignViews:(id)arg1;
- (void)topAlignViews:(id)arg1;
- (void)leftAlignViews:(id)arg1;
- (void)rightAlignViews:(id)arg1;
- (void)centerAlignViews:(id)arg1;
- (BOOL)canContainerAlignInspectedViews;
- (BOOL)canAlignInspectedViews;
- (void)selectParent:(id)arg1;
- (void)selectPreviousSibling:(id)arg1;
- (void)selectNextSibling:(id)arg1;
- (void)selectChild:(id)arg1;
- (BOOL)canSelectSibling;
- (BOOL)canSelectChild;
- (BOOL)canSelectParent;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)showDocumentationForSelection:(id)arg1;
- (void)showInterfaceForSelection:(id)arg1;
- (void)showDocumentationForObjects:(id)arg1;
- (void)showInterfaceForObjects:(id)arg1;
- (id)documentationTokensForObjects:(id)arg1;
- (void)cancelLocalizeFromSheet:(id)arg1;
- (void)okLocalizeFromSheet:(id)arg1;
- (void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)objectAtPoint:(struct CGPoint)arg1;
- (id)objectsAtPoint:(struct CGPoint)arg1;
- (void)indicateDropSuccessForTarget:(id)arg1;
- (void)indicateSpringLoadedPopForTarget:(id)arg1;
- (void)flashTarget:(id)arg1 withRepetitions:(long long)arg2 andOnInterval:(double)arg3 andOffInterval:(double)arg4;
- (void)flashTarget:(id)arg1 withRepetitions:(long long)arg2 andOnInterval:(double)arg3 andOffInterval:(double)arg4 fadeOffInterval:(double)arg5;
- (long long)identify:(id)arg1;
- (long long)identify:(id)arg1 untilDate:(id)arg2;
- (id)captionForIdentifiedObject:(id)arg1;
- (void)selectionDidChange;
- (void)invalidateSelection;
- (void)registerDragTypes;
- (id)windowsToPopInFrontOf;
- (void)revealObjectInClassesTab:(id)arg1;
- (void)revealInClassesTab:(id)arg1;
- (void)revealInWorkspace:(id)arg1;
- (void)revealInDocumentWindow:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)delete:(id)arg1;
- (void)deselectObjects:(id)arg1;
- (id)selection;
- (BOOL)shouldUpdateColorPanel;
- (id)selectedColorsForColorPanel;
- (id)selectedFontsForFontPanel;
- (id)acceptedDragTypes;
- (struct CGRect)visibleScreenRectForObject:(id)arg1;
- (struct CGRect)screenRectForObject:(id)arg1;
- (id)lastDragTarget;
- (void)setLastDragTarget:(id)arg1 fromDraggingInfo:(id)arg2;
- (id)lastDragMouseMovedTime;
- (void)setLastDragMouseMovedTime:(id)arg1;
- (id)contentView;
- (void)setWindow:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)documentOrWindowChanged;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

