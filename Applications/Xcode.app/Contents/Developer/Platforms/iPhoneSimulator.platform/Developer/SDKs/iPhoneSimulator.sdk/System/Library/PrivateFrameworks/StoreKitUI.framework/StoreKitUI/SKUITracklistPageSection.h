//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIArtworkRequestDelegate.h"

@class NSString, SKUITracklistColumnData, SKUITracklistPageComponent, SKUIViewElementLayoutContext;

@interface SKUITracklistPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate>
{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUITracklistColumnData *_columnData;
    long long _lastNeedsMoreCount;
}

- (void).cxx_destruct;
- (double)_widthForButtonElements:(id)arg1;
- (id)_viewElementForIndex:(long long)arg1;
- (void)_requestCellLayoutWithColumnData:(id)arg1;
- (id)_representativeStringForViewElement:(id)arg1;
- (id)_mediaURLWithTrack:(id)arg1;
- (void)_enumerateVisibleViewElementsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_columnData;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;
- (struct UIEdgeInsets)sectionContentInset;
- (_Bool)requestLayoutWithReloadReason:(long long)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (long long)numberOfCells;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)firstAppearanceIndexPath;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillScrollToOffset:(struct CGPoint)arg1 visibleRange:(struct SKUIIndexPathRange)arg2;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUITracklistPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

