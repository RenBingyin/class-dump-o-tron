//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSHashTable.h>

__attribute__((visibility("hidden")))
@interface NSConcreteHashTable : NSHashTable
{
    struct NSSlice slice;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long options;
    unsigned long long mutations;
}

- (id)objectEnumerator;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (void)getKeys:(const void **)arg1 count:(unsigned long long *)arg2;
- (id)allObjects;
- (void)removeAllItems;
- (void)removeItem:(const void *)arg1;
- (void)insertKnownAbsentItem:(const void *)arg1;
- (void)addObject:(id)arg1;
- (void)insertItem:(const void *)arg1;
- (void *)getItem:(const void *)arg1;
- (void)rehash;
- (void)assign:(unsigned long long)arg1 key:(const void *)arg2;
- (void)hashGrow;
- (unsigned long long)rehashAround:(unsigned long long)arg1;
- (void)raiseCountUnderflowException;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)pointerFunctions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2;
- (id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (id)copy;
- (id)init;
- (void)_initBlock;

@end

