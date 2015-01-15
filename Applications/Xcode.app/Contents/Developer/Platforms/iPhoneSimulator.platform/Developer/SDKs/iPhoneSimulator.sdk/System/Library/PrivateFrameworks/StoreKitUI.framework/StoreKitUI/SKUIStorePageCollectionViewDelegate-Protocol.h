//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSIndexPath, SKUICollectionViewLayoutAttributes, SKUIStorePageCollectionViewLayout, UICollectionView;

@protocol SKUIStorePageCollectionViewDelegate <UICollectionViewDelegateFlowLayout>

@optional
- (NSArray *)indexPathsForPinningItemsInCollectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2;
- (void)collectionView:(UICollectionView *)arg1 willBeginEditingItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2 willApplyLayoutAttributes:(SKUICollectionViewLayoutAttributes *)arg3;
- (long long)collectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2 pinningTransitionStyleForItemAtIndexPath:(NSIndexPath *)arg3;
- (long long)collectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2 pinningStyleForItemAtIndexPath:(NSIndexPath *)arg3;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(SKUIStorePageCollectionViewLayout *)arg2 pinningContentInsetForItemAtIndexPath:(NSIndexPath *)arg3;
- (_Bool)collectionView:(UICollectionView *)arg1 canScrollCellAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didEndEditingItemAtIndexPath:(NSIndexPath *)arg2;
@end

