//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutlineView.h"

#import "PFTDetailViewProtocol.h"

@class NSMutableDictionary, NSString, NSTableColumn, XRInstrument;

@interface XROutlineDetailView : NSOutlineView <PFTDetailViewProtocol>
{
    XRInstrument *_targetInstrument;
    NSString *_viewLabel;
    NSString *_name;
    NSMutableDictionary *_viewingPreferences;
    long long _lastTrackedCellX;
    long long _lastTrackedCellY;
    NSTableColumn *_trackingColumn;
    struct __CFSet *_selectionSet;
    unsigned long long _selectionPreservationThreshold;
    BOOL _shouldReorder;
    BOOL _isTracking;
    BOOL _disallowAutoExpand;
    BOOL _isSetup;
    BOOL _delegateChecked;
    BOOL _delegateResponds;
    BOOL _maintainsSelection;
    BOOL _uidBasedSelection;
    int _blockAutoScrolling;
    double _outlineXDelta;
    double _outlineXInset;
    BOOL _slidingEnabled;
    BOOL _isExpandingItem;
    BOOL _isCollapsingItem;
    double _expandCollapseDelta;
    long long _expandCollapseMaxLevel;
    long long *_xrindentArray;
    long long _xrindentArraySize;
    XROutlineDetailView *_mirroredOutline;
}

+ (id)slideShadow;
@property(nonatomic) BOOL disallowAutoExpand; // @synthesize disallowAutoExpand=_disallowAutoExpand;
- (void)expandPath:(id)arg1 usingItemKey:(id)arg2;
- (id)nodeForPath:(id)arg1 usingItemKey:(id)arg2;
- (void)setDisplaySelection:(id)arg1 usingItemKey:(id)arg2;
- (id)diplaySelectionUsingItemKey:(id)arg1;
- (void)deepCopy:(id)arg1;
- (void)copy:(id)arg1;
- (id)_copySelectedHierarchyFromNode:(id)arg1;
- (void)_appendChildDataForItem:(id)arg1 toString:(id)arg2 atLevel:(int)arg3;
- (void)keyDown:(id)arg1;
- (void)expandItem:(id)arg1 expandChildren:(BOOL)arg2;
- (void)reloadDetailData;
- (id)detailViewLabel;
- (void)setDetailViewLabel:(id)arg1;
- (void)setInspectionTimeInSeconds:(double)arg1;
- (void)setDelegate:(id)arg1;
- (id)instrument;
- (void)setInstrument:(id)arg1;
- (void)deselectRow:(long long)arg1;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)extendSelectedRowsByIndex:(unsigned long long)arg1;
- (void)restoreSelection:(id)arg1;
- (id)savedSelection;
- (void)setSelectionPreservationThreshold:(unsigned long long)arg1;
- (void)setPreservesSelection:(BOOL)arg1;
- (void)_applySelectionSet;
- (id)_childItemOfItem:(id)arg1 withUID:(id)arg2;
- (void)_refreshSelectionSet;
- (void)_clearSelectionSet;
- (void)_destroySelectionPath:(CDStruct_1b81fc1c *)arg1;
- (CDStruct_1b81fc1c *)_createSelectionPathForItem:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)exportableData;
- (void)_drawBandForOutlineCellAtRow:(long long)arg1;
- (struct CGRect)_highlightBandInRow:(long long)arg1 mouseRow:(long long)arg2;
- (BOOL)_shouldHighlightBandInRow:(long long)arg1 mouseRow:(long long)arg2;
- (id)menuForEvent:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)_drawContentsAtRow:(long long)arg1 column:(long long)arg2 withCellFrame:(struct CGRect)arg3;
- (void)_drawOutlineCellAtRow:(long long)arg1;
- (void)drawGridInClipRect:(struct CGRect)arg1;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)_sizeToFitForUserColumnResizeWithOriginalWidths:(id)arg1;
- (void)sizeColumnToFit:(id)arg1;
- (BOOL)isExpandingOrCollapsing;
- (BOOL)isCollapsingItem;
- (BOOL)isExpandingItem;
- (void)_postItemDidCollapseNotification:(id)arg1;
- (void)_postItemDidExpandNotification:(id)arg1;
- (void)_changeIndentLevel:(long long)arg1 indent:(BOOL)arg2;
- (double)slidingOutlineColumnWidthDelta;
- (void)_resizeOutlineColumn;
- (void)resetOutlineX;
- (double)outlineXInset;
- (void)setOutlineXInset:(double)arg1;
- (double)outlineXDelta;
- (void)setOutlineXDelta:(double)arg1;
- (void)defaultViewSymbolAction:(id)arg1;
- (void)setVisibilityOfTableColumnWithIdentifier:(id)arg1 hidden:(BOOL)arg2;
- (void)toggleVisibility:(id)arg1;
- (void)setupContextMenuForColumns;
- (void)setHighlightedTableColumn:(id)arg1;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (BOOL)shouldDisplayActionInOutlineView:(id)arg1 forItem:(id)arg2;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)moveColumn:(unsigned long long)arg1 toColumn:(unsigned long long)arg2 prefs:(BOOL)arg3;
- (void)mirrorColumnWidths:(id)arg1;
- (void)_setMirroringEnabled:(BOOL)arg1 withSourceView:(id)arg2;
- (void)moveColumn:(long long)arg1 toColumn:(long long)arg2;
- (id)addColumn:(id)arg1 weightIndex:(unsigned long long)arg2 title:(id)arg3 datacell:(id)arg4 isOutlineColumn:(BOOL)arg5 initialWidth:(double)arg6 hidden:(BOOL)arg7;
- (id)addColumn:(id)arg1 title:(id)arg2 datacell:(id)arg3 isOutlineColumn:(BOOL)arg4 initialWidth:(double)arg5 hidden:(BOOL)arg6;
- (void)evaluateSlideCapability;
- (BOOL)useSlidingColumn;
- (id)addActionColumn:(id)arg1 weightIndex:(unsigned long long)arg2 action:(SEL)arg3 target:(id)arg4 title:(id)arg5 isOutlineColumn:(BOOL)arg6 initialWidth:(double)arg7 hidden:(BOOL)arg8;
- (id)addActionColumn:(id)arg1 action:(SEL)arg2 target:(id)arg3 title:(id)arg4 isOutlineColumn:(BOOL)arg5 initialWidth:(double)arg6 hidden:(BOOL)arg7;
- (id)tableColumnWithIdentifier:(id)arg1 andIndex:(unsigned long long)arg2;
- (long long)columnWithIdentifier:(id)arg1 andIndex:(unsigned long long)arg2;
- (void)setBlockAutoScrolling:(BOOL)arg1;
- (void)scrollRowToVisible:(long long)arg1;
- (void)viewDidMoveToWindow;
- (void)viewDidMoveToSuperview;
- (void)setupView;
- (id)name;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

