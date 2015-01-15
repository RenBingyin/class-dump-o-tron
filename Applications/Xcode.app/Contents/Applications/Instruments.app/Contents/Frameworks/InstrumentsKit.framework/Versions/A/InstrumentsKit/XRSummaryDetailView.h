//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCollectionView.h"

@class NSArrayController, NSMutableArray, NSView, PFTInstrumentList;

@interface XRSummaryDetailView : NSCollectionView
{
    PFTInstrumentList *_instrumentList;
    NSMutableArray *_summaries;
    NSArrayController *_summariesArrayController;
    NSView *_highlightedView;
}

@property(retain) NSMutableArray *summaries; // @synthesize summaries=_summaries;
- (id)highlightedView;
- (void)setHighlightedView:(id)arg1;
- (id)description;
- (id)newItemForRepresentedObject:(id)arg1;
- (void)reloadData;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 keyPath:(id)arg2;

@end

