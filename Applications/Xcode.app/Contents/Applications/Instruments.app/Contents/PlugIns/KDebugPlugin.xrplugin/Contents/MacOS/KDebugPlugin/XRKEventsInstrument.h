//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRInstrument.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "XRExportDataProtocol.h"

@class NSArrayController, NSDictionary, NSMutableArray, NSScrollView, NSString, NSView, PFTTableDetailView, XRCallTreeDetailView, XRContext, XRKEventsProcess, XRManagedEventArrayController;

@interface XRKEventsInstrument : XRInstrument <NSTableViewDataSource, NSTableViewDelegate, XRExportDataProtocol>
{
    PFTTableDetailView *_summaryView;
    PFTTableDetailView *_threadsView;
    XRCallTreeDetailView *_callTreeView;
    PFTTableDetailView *_eventListView;
    XRContext *_topLevelContext;
    NSMutableArray *_topLevelContextList;
    NSScrollView *_enclosingScrollView;
    unsigned long long _lastDisplayedTimestamp;
    BOOL _targetSinglePid;
    int _lastTargetPid;
    XRKEventsProcess *_selectedProcess;
    unsigned long long _selectedTid;
    NSArrayController *_highlightThreadsController;
    NSArrayController *_highlightProcessesController;
    NSArrayController *_processesController;
    NSArrayController *_threadsController;
    XRManagedEventArrayController *_eventsController;
    BOOL _updatingSelection;
    BOOL _fullCallTreeReloadRequired;
    NSDictionary *_restoredPrefs;
}

+ (id)_timeColorsByKey;
@property(readonly) NSArrayController *highlightProcessesController; // @synthesize highlightProcessesController=_highlightProcessesController;
@property(readonly) NSArrayController *highlightThreadsController; // @synthesize highlightThreadsController=_highlightThreadsController;
@property(readonly) NSArrayController *processesController; // @synthesize processesController=_processesController;
@property(readonly) NSArrayController *threadsController; // @synthesize threadsController=_threadsController;
@property(readonly) XRManagedEventArrayController *eventsController; // @synthesize eventsController=_eventsController;
- (void).cxx_destruct;
- (BOOL)verifyEnvironment:(id)arg1 arguments:(id)arg2 instruments:(id)arg3 error:(id *)arg4;
- (id)threadStrategyDataSource;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(readonly) NSArrayController *activeAggregateController;
- (BOOL)setSelectedRunIndex:(long long)arg1;
- (void)_selectedThreadsDidChange:(id)arg1;
- (void)_pushNextView:(id)arg1;
- (id)contextContainerForUUID:(id)arg1;
- (id)iconForContext:(id)arg1;
- (id)siblingsForContext:(id)arg1;
- (void)displayContext:(id)arg1;
- (id)viewForContext:(id)arg1;
- (id)contextRepresentation;
- (id)currentDetailView;
- (id)_topLevelContexts;
- (BOOL)supportsCallTree;
- (void)updateRunForNextContext:(id)arg1;
- (id)defaultSortIdentifierForTable:(id)arg1 ascending:(char *)arg2;
- (id)focusContextForSelectedRow:(unsigned long long)arg1;
- (void)_filterEventsArrayWithTokens:(id)arg1 context:(id)arg2 matchesAny:(BOOL)arg3;
- (void)setupEventsArrayFilterWithToken:(id)arg1;
- (void)filterDetailWithTokens:(id)arg1 context:(id)arg2 matchesAny:(BOOL)arg3;
- (id)_predicateForTokens:(id)arg1 matchesAny:(BOOL)arg2 keyPathsToCheck:(id)arg3;
- (id)selectedSearchContext;
- (id)searchContexts;
- (void)setInspectionTime:(unsigned long long)arg1;
- (void)selectRowInDetailView:(long long)arg1;
- (void)_selectionDidChangeForViewNotification:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)_selectionDidChangeForView:(id)arg1;
- (id)dataElementsForContext:(id)arg1;
- (void)dataElementsForSetupViewContext:(id)arg1;
- (void)dataElementsForExtendedEventViewContext:(id)arg1;
- (void)dataElementsForTrackViewSetupContext:(id)arg1;
- (void)dataElementsForLegendContext:(id)arg1;
- (void)dataElementsForConfigurationViewContext:(id)arg1;
- (void)displayEvent:(unsigned int)arg1;
- (id)_detailScrollView;
@property(readonly) NSView *eventListView;
- (BOOL)getEventName:(id *)arg1 timeRange:(struct XRTimeRange *)arg2 forRow:(long long)arg3;
- (void)createFlagPair:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
@property(readonly) NSView *callTreeView;
@property(readonly) NSView *threadsView;
@property(readonly) NSView *summaryView;
- (void)addColumnsToDetailView:(id)arg1;
- (void)addColumnsToCallTreeDetailView:(id)arg1;
- (id)callsDisplayString;
- (void)addColumnsToThreadsView;
- (void)addColumnsToEventListView;
- (void)addColumnsToSummaryView;
- (void)_didEndWarning:(id)arg1;
- (BOOL)needsCoreProfileTap;
- (BOOL)isDeviceSupported:(id)arg1;
- (id)unsupportedDeviceReason:(id)arg1;
- (void)stopRecording;
- (void)startRecording;
- (BOOL)detailViewRequiresScrollView:(id)arg1;
- (void)updateCurrentDetailView;
- (id)menuForDetailViewRow:(id)arg1 andColumn:(id)arg2;
- (void)_dumpCSInfoToConsole:(id)arg1;
- (int)minimumAuthorizationRequirement;
- (id)availableRecordOptions;
- (void)exportSelectedRunInFormat:(int)arg1 toPath:(id)arg2;
- (void)restoreFromTraceTemplateData:(id)arg1;
- (id)traceTemplateData;
- (void)invalidate;
- (void)dealloc;
- (id)initWithType:(id)arg1;
- (id)pidValueTransformer;
- (id)tidValueTransformer;
- (id)timeColorDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
