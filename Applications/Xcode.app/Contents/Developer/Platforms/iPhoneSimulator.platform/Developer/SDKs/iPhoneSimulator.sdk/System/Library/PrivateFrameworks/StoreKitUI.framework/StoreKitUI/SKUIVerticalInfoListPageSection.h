//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIArtworkRequestDelegate.h"

@class NSMutableArray, NSString, SKUIInfoListViewElement, SKUIViewElementLayoutContext;

@interface SKUIVerticalInfoListPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate>
{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    double _columnHeight;
    NSMutableArray *_columns;
    double _columnWidth;
    SKUIInfoListViewElement *_infoList;
    long long _numberOfColumns;
}

- (void).cxx_destruct;
- (void)_requestCellLayout;
- (id)_reloadColumnDataIfNecessary;
- (long long)_numberOfColumnsForWidth:(double)arg1;
- (void)_enumerateVisibleIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (struct UIEdgeInsets)_contentInsetForIndexPath:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (struct UIEdgeInsets)sectionContentInset;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (long long)numberOfCells;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

