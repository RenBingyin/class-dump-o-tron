//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewCachedItemFramesArrayInfo.h>

@class IBUICollectionView;

@interface IBUICollectionViewCachedCellFramesInfo : IBUIViewCachedItemFramesArrayInfo
{
    IBUICollectionView *_collectionView;
}

@property __weak IBUICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)cachedValueFromRequestedValue:(id)arg1;
- (id)initWithCollectionView:(id)arg1 cachedKeyPath:(id)arg2 andRequestedKeyPath:(id)arg3;
- (id)initWithCachedKeyPath:(id)arg1 andRequestedKeyPath:(id)arg2;

@end

