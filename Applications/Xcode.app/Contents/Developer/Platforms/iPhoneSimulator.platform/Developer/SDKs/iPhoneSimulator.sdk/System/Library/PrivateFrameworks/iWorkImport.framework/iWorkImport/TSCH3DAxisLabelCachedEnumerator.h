//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DValueEnumerator.h>

@class TSCH3DAxisLabelKind;

__attribute__((visibility("hidden")))
@interface TSCH3DAxisLabelCachedEnumerator : TSCH3DValueEnumerator
{
    TSCH3DValueEnumerator *mCachee;
    TSCH3DAxisLabelKind *mKind;
    unsigned long long mCount;
    _Bool mShouldRender;
    _Bool mValid;
    int mLabelPosition;
    struct vector<TSCH3D::AxisLabelCacheItem, std::__1::allocator<TSCH3D::AxisLabelCacheItem>> mCache;
}

+ (id)enumeratorWithAxisLabelEnumerator:(id)arg1;
@property(readonly, nonatomic) TSCH3DAxisLabelKind *kind; // @synthesize kind=mKind;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldRender;
- (id)string;
- (void)update;
- (id)enumerator;
- (void)cache;
- (unsigned long long)count;
- (void)dealloc;
- (int)labelPosition;
- (id)initWithAxisLabelEnumerator:(id)arg1;

@end

