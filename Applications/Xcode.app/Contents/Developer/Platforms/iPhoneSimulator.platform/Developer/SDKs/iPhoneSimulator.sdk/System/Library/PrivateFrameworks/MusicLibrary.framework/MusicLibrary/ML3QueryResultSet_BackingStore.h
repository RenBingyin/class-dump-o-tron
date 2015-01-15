//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface ML3QueryResultSet_BackingStore : NSObject
{
    vector_c1c297d2 _persistentIDs;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _sections;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)backingStoreByRemovingPersistentIDs:(const unordered_set_f2692727 *)arg1;
- (void)reverseEnumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)containsPersistentIDs:(const unordered_set_f2692727 *)arg1;
- (void)reverseEnumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)persistentIDAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;

@end

