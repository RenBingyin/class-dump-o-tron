//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSCETrackedReference;

__attribute__((visibility("hidden")))
@interface TSTSortRuleReferenceTrackerReference : NSObject
{
    unsigned char mColumnIndex;
    TSCETrackedReference *mTrackedReference;
}

+ (id)referenceWithColumnIndex:(unsigned char)arg1 trackedReference:(id)arg2;
@property(retain, nonatomic) TSCETrackedReference *trackedReference; // @synthesize trackedReference=mTrackedReference;
@property(nonatomic) unsigned char columnIndex; // @synthesize columnIndex=mColumnIndex;
- (_Bool)isEqual:(id)arg1;
- (_Bool)hasTrackedReferenceEqualTo:(id)arg1;
- (unsigned long long)hash;
- (id)initWithColumnIndex:(unsigned char)arg1 trackedReference:(id)arg2;

@end

