//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPUBorderDrawingCache, NSMutableArray, NSMutableDictionary, RURadioStationsCollectionViewTemplateTextElement, UIColor, UITraitCollection;

@interface RURadioStationsCollectionViewTemplate : NSObject
{
    NSMutableArray *_orderedNamesOfTextElements;
    NSMutableDictionary *_textElementsByName;
    UITraitCollection *_traitCollection;
    UIColor *_tintColor;
    double _horizontalSpacingBetweenItems;
    double _horizontalEdgePadding;
    MPUBorderDrawingCache *_stackItemBorderDrawingCache;
    struct CGSize _rootViewSize;
    struct CGSize _artworkSize;
    struct CGSize _itemSize;
    CDStruct_22171f69 _stackAttributes;
}

+ (double)_stackBaseWidthForHorizontalSizeClass:(long long)arg1 displayScale:(double)arg2 rootViewWidth:(double)arg3 horizontalEdgePadding:(double)arg4 horizontalSpacingBetweenItems:(double)arg5;
+ (double)_targetStackBaseWidthForHorizontalSizeClass:(long long)arg1 displayScale:(double)arg2 rootViewWidth:(double)arg3;
+ (double)_horizontalSpacingBetweenItemsForHorizontalSizeClass:(long long)arg1 displayScale:(double)arg2 rootViewWidth:(double)arg3;
+ (double)_horizontalEdgePaddingForHorizontalSizeClass:(long long)arg1 displayScale:(double)arg2 rootViewWidth:(double)arg3;
+ (CDStruct_93c99dff)_attributesForStackItemAtIndex:(long long)arg1 displayScale:(double)arg2;
+ (CDStruct_22171f69)_stackAttributesForHorizontalSizeClass:(long long)arg1 displayScale:(double)arg2 rootViewHeight:(double)arg3;
+ (long long)numberOfStackItems;
@property(retain, nonatomic) MPUBorderDrawingCache *stackItemBorderDrawingCache; // @synthesize stackItemBorderDrawingCache=_stackItemBorderDrawingCache;
@property(readonly, nonatomic) CDStruct_22171f69 stackAttributes; // @synthesize stackAttributes=_stackAttributes;
@property(readonly, nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(readonly, nonatomic) struct CGSize artworkSize; // @synthesize artworkSize=_artworkSize;
@property(readonly, nonatomic) double horizontalEdgePadding; // @synthesize horizontalEdgePadding=_horizontalEdgePadding;
@property(readonly, nonatomic) double horizontalSpacingBetweenItems; // @synthesize horizontalSpacingBetweenItems=_horizontalSpacingBetweenItems;
@property(copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) struct CGSize rootViewSize; // @synthesize rootViewSize=_rootViewSize;
@property(copy, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void).cxx_destruct;
- (void)_updateForLayoutChange;
- (id)_textAttributesByReplacingForegroundColorInTextAttributes:(id)arg1 withColor:(id)arg2;
- (CDStruct_93c99dff)attributesForStackItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) RURadioStationsCollectionViewTemplateTextElement *lastTextElement;
- (void)endCoalescingTextDrawingCacheInvalidationNotifications;
- (void)beginCoalescingTextDrawingCacheInvalidationNotifications;
- (void)enumerateTextElementsUsingBlock:(CDUnknownBlockType)arg1;
- (id)textElementNamed:(id)arg1;
- (void)addTextElement:(id)arg1 withName:(id)arg2;
- (void)updateForPreferredContentSizeChange;

@end

