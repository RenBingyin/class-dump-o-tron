//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface PBXCStringPool : NSObject
{
    NSMutableData *_stringData;
    NSMutableData *_bucketsData;
    struct _PBXCStrPoolHashBucket *_buckets;
    unsigned long long _capacity;
    unsigned long long _count;
    unsigned long long _numInsertions;
    unsigned long long _totalNumCollisions;
    unsigned long long _maxNumCollisions;
    unsigned long long _numGrowths;
}

- (void).cxx_destruct;
- (id)description;
- (id)stringData;
- (const char *)cStringAtOffset:(unsigned long long)arg1;
- (unsigned long long)addCString:(const char *)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

