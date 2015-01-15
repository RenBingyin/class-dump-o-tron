//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSWPFontHeightCache : NSObject
{
    struct list<unsigned long, std::__1::allocator<unsigned long>> _fontHashList;
    struct map<unsigned long, TSWPFontHeightCacheEntry, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TSWPFontHeightCacheEntry>>> _fontHashToInfoMap;
    unsigned int _cacheSize;
    unsigned int _maxCacheSize;
    struct _opaque_pthread_rwlock_t _lock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedCache;
+ (id)_singletonAlloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_addEntryForFont:(struct __CTFont *)arg1 heightInfo:(const CDStruct_a6fa95e6 *)arg2;
- (_Bool)p_findEntryForFont:(struct __CTFont *)arg1 outHeightInfo:(CDStruct_a6fa95e6 *)arg2 collision:(_Bool *)arg3;
- (CDStruct_a6fa95e6)fontHeightInfoForFont:(struct __CTFont *)arg1;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

