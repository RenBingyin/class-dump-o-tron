//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SKUILayoutCache;

@interface SKUIViewElementTextLayoutCache : NSObject
{
    SKUILayoutCache *_layoutCache;
    NSMutableDictionary *_layoutMapTables;
}

@property(readonly, nonatomic) SKUILayoutCache *layoutCache; // @synthesize layoutCache=_layoutCache;
- (void).cxx_destruct;
- (id)_layoutIndexForViewElement:(id)arg1 width:(long long)arg2;
- (id)_existingLayoutForViewElement:(id)arg1 width:(long long)arg2;
- (struct CGSize)_bestGuessSizeForOrdinal:(id)arg1 width:(double)arg2;
- (struct CGSize)_bestGuessSizeForLabel:(id)arg1 width:(double)arg2;
- (struct CGSize)_bestGuessSizeForButton:(id)arg1 width:(double)arg2;
- (void)_addRequest:(id)arg1 forViewElement:(id)arg2;
- (struct CGSize)sizeForViewElement:(id)arg1 width:(double)arg2;
- (struct CGSize)sizeForLabel:(id)arg1 width:(double)arg2;
- (struct CGSize)sizeForButton:(id)arg1 width:(double)arg2;
- (void)requestLayoutForViewElement:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (void)requestLayoutForOrdinal:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (void)requestLayoutForLabel:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (void)requestLayoutForButton:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (void)requestLayoutForBadge:(id)arg1 width:(long long)arg2;
- (id)layoutForWidth:(long long)arg1 viewElement:(id)arg2;
- (void)invalidateLayoutsForUpdatedElements;
- (struct CGSize)estimatedSizeForOrdinal:(id)arg1 width:(double)arg2;
- (struct CGSize)estimatedSizeForLabel:(id)arg1 width:(double)arg2;
- (struct CGSize)estimatedSizeForButton:(id)arg1 width:(double)arg2;
- (id)initWithLayoutCache:(id)arg1;

@end

