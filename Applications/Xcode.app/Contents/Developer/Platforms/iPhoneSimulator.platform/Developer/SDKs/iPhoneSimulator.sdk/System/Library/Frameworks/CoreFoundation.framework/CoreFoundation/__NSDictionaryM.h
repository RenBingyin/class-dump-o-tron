//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSMutableDictionary.h>

__attribute__((visibility("hidden")))
@interface __NSDictionaryM : NSMutableDictionary
{
    unsigned int _used:58;
    unsigned int _kvo:1;
    unsigned long long _size;
    unsigned long long _mutations;
    id *_objs;
    id *_keys;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(const id *)arg1:(const id *)arg2:(unsigned long long)arg3:(_Bool)arg4:(_Bool)arg5;
- (double)_clumpingInterestingThreshold;
- (double)_clumpingFactor;
- (void)__setObject:(id)arg1 forKey:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setObservationInfo:(void *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)_mutate;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;

@end

