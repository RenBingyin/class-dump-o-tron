//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "NSMutableCopying.h"
#import "NSObject.h"

@class NSArray, NSEnumerator, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, Protocol;

@protocol IBCollection <NSObject, NSCopying, NSFastEnumeration, NSMutableCopying>
+ (id)ib_collectionWithObject:(id)arg1;
+ (id)ib_emptyCollection;
+ (Class)ib_mutableClass;
- (void)ib_removeObjectsInReceiverFromArray:(NSMutableArray *)arg1;
- (void)ib_removeObjectsInReceiverFromOrderedSet:(NSMutableOrderedSet *)arg1;
- (void)ib_removeObjectsInReceiverFromSet:(NSMutableSet *)arg1;
- (id)ib_maximumObjectUsingComparator:(long long (^)(id, id))arg1;
- (id)ib_minimumObjectUsingComparator:(long long (^)(id, id))arg1;
- (long long)ib_numberOfObjectsPassingTest:(_Bool (^)(id))arg1;
- (NSArray *)ib_arrayByMappingBlock:(id (^)(id))arg1;
- (NSArray *)ib_arrayBySortingUsingComparator:(long long (^)(id, id))arg1;
- (NSArray *)ib_arrayBySortingUsingSelector:(SEL)arg1 onKeyPath:(NSString *)arg2;
- (NSArray *)ib_arrayBySortingUsingSelector:(SEL)arg1;
- (void)ib_enumerateObjectsUsingMutatingBlock:(void (^)(id))arg1;
- (void)ib_enumerateCopyOfObjectsUsingBlock:(void (^)(id))arg1;
- (void)ib_enumerateObjectsUsingBlock:(void (^)(id))arg1;
- (id <IBCollection>)ib_collectionByRemovingObject:(id)arg1;
- (id <IBCollection>)ib_collectionByAddingObject:(id)arg1;
- (id <IBCollection>)ib_collectionByRemovingObjectsInSet:(NSSet *)arg1;
- (id <IBCollection>)ib_collectionByAddingObjectsFromCollection:(id <IBCollection>)arg1;
- (id <IBCollection>)ib_collectionByRemovingObjectsFromCollection:(id <IBCollection>)arg1;
- (id <IBCollection>)ib_collectionByMappingBlock:(id (^)(id))arg1;
- (id <IBCollection>)ib_collectionByFilteringUsingBlock:(_Bool (^)(id))arg1;
- (id <IBCollection>)ib_collectionByRemovingNulls;
- (id)ib_onlyObjectPassingTest:(_Bool (^)(id))arg1;
- (id)ib_firstObjectPassingTest:(_Bool (^)(id))arg1;
- (_Bool)ib_objectsAreStrictlyContainedBySet:(NSSet *)arg1;
- (_Bool)ib_objectsAreContainedBySet:(NSSet *)arg1;
- (_Bool)ib_anyObjectsPassTest:(_Bool (^)(id))arg1;
- (_Bool)ib_allObjectsPassTest:(_Bool (^)(id))arg1;
- (id)mutableCopy;
- (id)copy;
- (Class)ib_mutableClass;
- (NSEnumerator *)objectEnumerator;
- (NSSet *)ib_uniqueObjects;
- (NSArray *)allObjects;
- (id <IBCollection>)ib_objectsConformingToProtocol:(Protocol *)arg1;
- (id <IBCollection>)ib_objectsOfClass:(Class)arg1;
- (unsigned long long)count;
- (_Bool)containsObject:(id)arg1;
- (id)ib_onlyObject;
- (id)anyObject;
@end

