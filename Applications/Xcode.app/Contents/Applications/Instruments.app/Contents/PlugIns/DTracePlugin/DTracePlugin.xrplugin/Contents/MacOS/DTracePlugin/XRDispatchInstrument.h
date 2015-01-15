//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFTDTraceInstrument.h"

@class NSMutableArray, NSScrollView, NSString, PFTTableDetailView;

@interface XRDispatchInstrument : PFTDTraceInstrument
{
    unsigned long long _activeDetailView;
    PFTTableDetailView *_queueView;
    PFTTableDetailView *_blocksView;
    PFTTableDetailView *_blockQueuesView;
    PFTTableDetailView *_blockFocusView;
    NSScrollView *_enclosingScrollView;
    NSMutableArray *_detailViewStack;
    NSString *_focusBlockName;
    NSString *_focusQueueName;
    NSString *_sortedColumnIdentifier;
    unsigned long long _aggregatePeriod;
    unsigned long long _lastDisplayedTimestamp;
}

+ (void)initialize;
@property(readonly) NSString *focusQueue; // @synthesize focusQueue=_focusQueueName;
@property(readonly) NSString *focusBlock; // @synthesize focusBlock=_focusBlockName;
- (void)halfTick:(id)arg1;
- (BOOL)requiresHalfTickNotification;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)addColumnsToDetailView:(id)arg1;
- (void)addColumnsToCallTreeDetailView:(id)arg1;
- (void)addColumnsToBlockFocusView;
- (void)addColumnsToBlockQueuesView;
- (void)addColumnsToBlockView;
- (void)addColumnsToQueueView;
- (void)_pushNextView:(id)arg1;
- (void)selectRowInDetailView:(long long)arg1;
- (void)_selectionDidChange:(id)arg1;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (void)sortTable:(id)arg1 withColumnIdentifier:(id)arg2 sortDescriptors:(id)arg3;
- (id)sortDescriptorsForBlockFocusView:(id)arg1 ascending:(BOOL)arg2;
- (id)sortDescriptorsForBlockQueuesView:(id)arg1 ascending:(BOOL)arg2;
- (id)sortDescriptorsForBlocksView:(id)arg1 ascending:(BOOL)arg2;
- (id)sortDescriptorsForQueuesView:(id)arg1 ascending:(BOOL)arg2;
- (void)filterDetailWithTokens:(id)arg1 context:(id)arg2 matchesAny:(BOOL)arg3;
- (id)searchContexts;
- (id)dataSourceForBrushWithName:(id)arg1;
- (id)brushNames;
- (BOOL)willProvideConfigurationDataElementsForInspector:(id)arg1;
- (id)dataElementsForContext:(id)arg1;
- (void)dataElementsForDetailViewContext:(id)arg1;
- (void)defaultViewSymbolAction:(id)arg1;
- (void)_initializeDetailViews;
- (void)dataElementsForSetupViewContext:(id)arg1;
- (void)dataElementsForNavigationContext:(id)arg1;
- (void)dataElementsForTrackViewSetupContext:(id)arg1;
- (void)dataElementsForConfigurationViewContext:(id)arg1;
- (void)dataElementsForExtendedEventViewContext:(id)arg1;
- (void)_dataElementsForExtendedCallViewContext:(id)arg1;
- (void)_dataElementsForExtendedBlockFocusViewContext:(id)arg1;
- (void)_dataElementsForExtendedBlockQueuesViewContext:(id)arg1;
- (void)_dataElementsForExtendedBlocksViewContext:(id)arg1;
- (void)_dataElementsForExtendedQueuesViewContext:(id)arg1;
- (BOOL)setSelectedRunIndex:(long long)arg1;
- (unsigned long long)defaultDetailViewType;
- (void)setViewAsCallTree:(BOOL)arg1;
- (BOOL)detailViewRequiresScrollView:(id)arg1;
- (void)setDetailViewStack:(id)arg1;
- (void)setDetailViewType:(unsigned long long)arg1;
- (void)_updateDetailElements;
- (id)detailViewLabelForType:(unsigned long long)arg1;
- (unsigned long long)detailViewType;
- (unsigned long long)detailViewTypeMask;
- (void)updateCurrentDetailView:(BOOL)arg1;
- (id)defaultSortColumnIdentifierForView:(id)arg1;
- (int)currentDataType;
- (id)_currentDetailView;
- (void)stopRecording;
- (void)_startCommand:(id)arg1 instrumentNumber:(int)arg2;
- (void)restoreFromTraceTemplateData:(id)arg1;
- (id)traceTemplateData;
- (void)computeEventDescriptorsWithOutput;
- (id)eventDescriptorsToStringUsingNumberPrefix:(long long)arg1 includeSwitch:(BOOL)arg2 externalTarget:(int)arg3;
- (void)setAggregatePeriod:(unsigned long long)arg1;
- (unsigned long long)aggregatePeriod;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)unobserveStatistics;
- (void)dealloc;
- (id)initWithType:(id)arg1;

@end

