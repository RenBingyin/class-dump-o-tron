//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUAdjustmentsModeBar.h>

#import "UICollectionViewDataSource.h"

@class NSArray, NSMapTable, NSString, PUAdjustmentsMode, PUSlidersCollectionView, UIButton, UIView;

@interface PURegularAdjustmentsModeBar : PUAdjustmentsModeBar <UICollectionViewDataSource>
{
    NSMapTable *_supermodeButtonsByMode;
    NSMapTable *_supermodeLabelsByMode;
    NSMapTable *_supermodeTitleBackgroundByMode;
    UIView *_modeDetailView;
    PUSlidersCollectionView *_modeDetailSlidersCollectionView;
    UIButton *_expansionButton;
    NSArray *_supermodeButtonsConstraints;
    NSArray *_modeDetailViewConstraints;
    NSArray *_modeDetailSlidersCollectionViewConstraints;
    NSArray *_expansionButtonConstraints;
    NSArray *__availableSupermodes;
    NSArray *__visibleSliderModes;
}

- (void).cxx_destruct;
- (id)visibleSliderAdjustmentModes;
- (id)_availableSupermodes;
- (void)_handleModeButton:(id)arg1;
- (void)configureSliderCell:(id)arg1 forMode:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)_slidersViewLongSideLength;
- (void)_updateSupermodeButtons;
- (void)updateEnabledForCurrentMode;
- (id)newConstraintsForModePickerList:(id)arg1;
- (void)_updateViewsForExpandedSupermode:(id)arg1 fromOldSupermode:(id)arg2 animated:(_Bool)arg3;
- (void)_createNewModeDetailViewAndSubviews;
- (id)_layoutConstraintsForExpandedModeDetailView:(id)arg1 mode:(id)arg2;
- (id)_layoutConstraintsForCollapsedModeDetailView:(id)arg1 mode:(id)arg2;
- (void)setSelectedMode:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) PUAdjustmentsMode *_expandedSupermode;
- (void)setSlidersLongContentLength:(double)arg1;
- (id)currentSlidersCollectionView;
- (_Bool)wantsToHandleEventAtPoint:(struct CGPoint)arg1;
- (void)updateConstraints;
- (void)willMoveToWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

