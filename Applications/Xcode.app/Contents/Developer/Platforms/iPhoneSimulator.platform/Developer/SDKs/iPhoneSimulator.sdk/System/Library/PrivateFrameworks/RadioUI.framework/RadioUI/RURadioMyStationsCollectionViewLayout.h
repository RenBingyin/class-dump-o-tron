//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class NSMutableArray;

@interface RURadioMyStationsCollectionViewLayout : UICollectionViewFlowLayout
{
    NSMutableArray *_deletedIndexPaths;
    NSMutableArray *_insertedIndexPaths;
}

- (void).cxx_destruct;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;

@end

