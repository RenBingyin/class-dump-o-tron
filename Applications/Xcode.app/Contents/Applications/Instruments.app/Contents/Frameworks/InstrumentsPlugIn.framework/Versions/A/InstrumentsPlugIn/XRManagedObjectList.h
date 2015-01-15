//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray;

@interface XRManagedObjectList : NSObject <NSCoding>
{
    NSMutableArray *_objects;
    id <NSObject><NSCoding> _selectedObject;
}

- (void)removeObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addNextSelectedObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objects;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSelectedObject;
- (void)selectObjectAtIndex:(unsigned long long)arg1;
- (void)setSelectedObject:(id)arg1;
- (id)selectedObject;
- (id)lastObject;
- (id)firstObject;
- (long long)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

