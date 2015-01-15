//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DTInstrumentsX/XRUIModel.h>

#import "NSCoding.h"
#import "XRUIModelChangeObserver.h"

@class NSMutableArray;

@interface XRUIMutableArrayModel : XRUIModel <XRUIModelChangeObserver, NSCoding>
{
    NSMutableArray *_elements;
}

- (void).cxx_destruct;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

