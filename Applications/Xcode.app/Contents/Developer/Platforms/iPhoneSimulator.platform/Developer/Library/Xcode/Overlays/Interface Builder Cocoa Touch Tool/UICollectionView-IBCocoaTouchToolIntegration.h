//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

@class NSArray, UIColor;

@interface UICollectionView (IBCocoaTouchToolIntegration)
@property(readonly) NSArray *ibCellBackgroundColors;
- (void)setIbCellBackgroundColors:(id)arg1;
@property(readonly) NSArray *ibCellSizes;
- (void)setIbCellSizes:(id)arg1;
- (void)setIbHasBackgroundView:(id)arg1;
- (id)ibCellFrames;
- (id)ibBackgroundViewFrame;
- (id)ibSectionFooterViewFrames;
- (id)ibSectionHeaderViewFrames;
- (id)ibFramesForSupplementaryElementsOfKind:(id)arg1;
- (_Bool)ibCapturePlaceholderTable:(id)arg1 forRelationship:(id)arg2 withContext:(id)arg3;
- (void)setIbCompiledPrototypeNibs:(id)arg1;
- (struct CGSize)ibContentSize;
- (void)ibReloadDataAndLayoutSubviewsIfNeeded;
@property(readonly) UIColor *ibSectionFooterViewBackgroundColor;
- (void)setIbSectionFooterViewBackgroundColor:(id)arg1;
@property(readonly) UIColor *ibSectionHeaderViewBackgroundColor;
- (void)setIbSectionHeaderViewBackgroundColor:(id)arg1;
- (void)setIbDataSourceType:(id)arg1;
- (id)initWithMarshalledValues:(id)arg1 orderedKeys:(id)arg2 ignoredKeys:(id)arg3 marshallerClassNames:(id)arg4 andMarshallerInstantiationContexts:(id)arg5 globalMarshallingContext:(id)arg6;
@end

