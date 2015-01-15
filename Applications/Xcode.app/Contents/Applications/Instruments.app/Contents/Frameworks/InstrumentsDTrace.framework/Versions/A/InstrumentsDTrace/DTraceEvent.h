//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, PFTDTraceEventDescriptor, PFTDTraceRun;

@interface DTraceEvent : NSObject <NSCoding>
{
    NSMutableArray *_data;
    PFTDTraceEventDescriptor *_descriptor;
    PFTDTraceRun *_owner;
    long long _version;
    unsigned long long _index;
    unsigned long long _relativeTimestamp;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingStackTraceArray;
+ (id)keyPathsForValuesAffectingRawStackTrace;
+ (id)keyPathsForValuesAffectingStackDepth;
@property(readonly) long long version; // @synthesize version=_version;
@property(retain) PFTDTraceEventDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property PFTDTraceRun *owner; // @synthesize owner=_owner;
@property id stackTrace; // @dynamic stackTrace;
@property(readonly) unsigned long long tid; // @dynamic tid;
@property(readonly) unsigned long long relativeTimestamp; // @dynamic relativeTimestamp;
- (BOOL)isNumericKey:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (unsigned long long)indexForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 withDescriptor:(id)arg2;

@end

