//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/EDCollection.h>

@class OITSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDKeyedCollection : EDCollection
{
    OITSUPointerKeyDictionary *mMap;
}

- (id)objectWithKey:(long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)addObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (_Bool)isOverwritingKeyOK;
- (void)removeFromMap:(id)arg1;
- (void)insertIntoMap:(id)arg1;
- (_Bool)isObjectInMap:(id)arg1;

@end

