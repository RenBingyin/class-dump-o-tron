//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/WDIterator.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDArrayIterator : WDIterator
{
    NSArray *mArray;
    unsigned int mNextIndex;
}

- (id)next;
- (_Bool)hasNext;
- (id)initWithArray:(id)arg1;

@end

