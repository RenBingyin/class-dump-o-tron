//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUICollectionViewCell.h>

#import "SKUIPerspectiveView.h"

@class NSString, UICollectionView;

@interface SKUIShelfCollectionViewCell : SKUICollectionViewCell <SKUIPerspectiveView>
{
    UICollectionView *_collectionView;
    struct UIEdgeInsets _contentInset;
    _Bool _rendersWithPerspective;
}

+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;
@property(nonatomic) _Bool rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)setVanishingPoint:(struct CGPoint)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

