//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableSet.h"

@class NSManagedObject, NSString;

__attribute__((visibility("hidden")))
@interface _NSNotifyingWrapperMutableSet : NSMutableSet
{
    NSManagedObject *_container;
    NSString *_key;
    NSMutableSet *_mutableSet;
}

- (void)unionSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeAllObjects;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (_Bool)isSubsetOfSet:(id)arg1;
- (void)getObjects:(id *)arg1;
- (_Bool)isEqualToSet:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)anyObject;
- (id)allObjects;
- (id)descriptionWithLocale:(id)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableSet:(id)arg3;
- (void)dealloc;

@end

